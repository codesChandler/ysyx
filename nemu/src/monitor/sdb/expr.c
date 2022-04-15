#include "isa.h"
#include "common.h"
#include <memory/vaddr.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include "regex.h"

// hexadecimal-number char 2 decimal chars
void hnchar2dec(char *hex,char *dec)
{
  int len;
  int num = 0;
  //int temp0=0;

  len = strlen(hex);

  for (int i = 0, temp = 0; i < len; i++)
  {
    temp =( *(hex + i) - 48)*((int)pow(16,(double)(len - i - 1)));
    num = num + temp;
  }

  sprintf(dec,"%d",num);
}

enum {
  TK_NOTYPE = 256, TK_EQ,TK_NR,TK_NEQ,TK_HN,TK_REG,DEREF,TK_AND

  /* TODO: Add more token types */

};


typedef struct Point{
      int x;
      int y;
} point;//mark the number


static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  {"\\w+", TK_NR},        // number
  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"-", '-'},          // minus
  {"\\*",'*'},          //multiplication
  {"/",'/'},             //division 
  {"==", TK_EQ},        // equal
  {"!=", TK_NEQ},       //not equal
  {"&{2}",TK_AND},        //and
  {"\\(", '('},         //left bracket
  {"\\)",')'},          //right bracket
  {"^0x\\w+",TK_HN},    //hexadecimal-number
  {"^\\$\\w+",TK_REG}   //reg_name

};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] ;

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[1000]  ;
static int nr_token  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
     // printf("%s\n",e);
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

       Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        //int type=rules[i].token_type;
        //printf("I am here %d",type);
        //int token_type=TK_NR;
        //printf("I am here %d\n",token_type);
        switch (rules[i].token_type) {

          case TK_NR: {
                  for(int i=0;i<substr_len;i++){
                  tokens[nr_token].str[i]= *(substr_start+i);}
                  tokens[nr_token].str[substr_len]='\0';
                  tokens[nr_token].type=rules[i].token_type;
                  break;}
          case TK_HN:{
                  for(int i=2;i<substr_len;i++){
                  tokens[nr_token].str[i]= *(substr_start+i);}
                  tokens[nr_token].str[substr_len]='\0';
                  tokens[nr_token].type=rules[i].token_type;
                  hnchar2dec(tokens[nr_token].str, tokens[nr_token].str);
                  break;
                      }
          case TK_REG:{
                  for(int i=1;i<substr_len;i++){
                  tokens[nr_token].str[i]= *(substr_start+i);}
                  tokens[nr_token].str[substr_len]='\0';
                  int trg=0;
                  bool *success=false;
                  trg=isa_reg_str2val(tokens[nr_token].str, success);
                  if(*success==true)
                  sprintf(tokens[nr_token].str,"%d",trg);
                  tokens[nr_token].type=rules[i].token_type;
          }       
          default: tokens[nr_token].type=rules[i].token_type;break;
        }

        nr_token++;

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

//stack implement brackt matchment

bool check_parentheses(int p,int q){
  int top=0;
  int cnt_l=0;
  int cnt_r=0;

  for (int i=p;i<=q;i++)
    {if(tokens[i].type=='(')
      cnt_l++;
     else if(tokens[i].type==')')
      cnt_r++;
    }
  
  if(tokens[p].type!='(' || tokens[q].type!=')')
    return false;
  else if(cnt_l!=cnt_r)
    return false;
  
  for(int i=p+1;i<=q-1;i++)
  {if(tokens[i].type=='(')
      top++;
     else if(tokens[i].type==')')
      {top--;
      if (top <0)
      return false;
      }
    }

    return true;
}

word_t eval(int p, int q) {
  if (p > q) {
    /* Bad expression */
    //assert(0);
  }
  else if (p == q) {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
    return atoi(tokens[p].str);
  }
  else if (check_parentheses(p, q) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1);
  }
  else {

    //find the positon of bracket

    point points[320];
    struct {int location[320];
            int top;} locations;
    locations.top=-1;        
    //int cnt[100];
    //int pointer=0;
    int len=0;

    for (int i=p;i<=q;i++){
      
    {if(tokens[i].type=='(')
      {points[len].x=i;
        locations.location[++locations.top]=len++;
      }
     else if(tokens[i].type==')')
      {
         points[locations.location[locations.top--]].y=i;}
    }
    //assert((cnt==0));
    }

    //find the position of dominant symbol
    int ops[10000];
    int len_ops=0;
    int flag=0;
    for (int i=p;i<=q;i++,flag=0){
      for(int j=0;j<len;j++)
      {
        if(i>=points[j].x && i<=points[j].y)
        flag=1;
      }
      if(flag==0){
        ops[len_ops++]=i;
      }
    }

    int op=0;

    for (int i=len_ops-1;i>=0;i--){
      if (tokens[ops[i]].type==TK_AND) 
      {
        flag=1;
        op=ops[i];
        break;
      }}

      for (int i=len_ops-1;i>=0;i--)
      if ((tokens[ops[i]].type== TK_EQ || tokens[ops[i]].type==TK_NEQ) && (flag==0)) 
      { flag=1;
        op=ops[i];
        break;
      }



    for (int i=len_ops-1;i>=0;i--)
      if ((tokens[ops[i]].type=='+'|| tokens[ops[i]].type=='-') && (flag==0)) 
      { flag=1;
        op=ops[i];
        break;
      }

    for (int i=len_ops-1;i>=0;i--){
      if((tokens[ops[i]].type=='*'|| tokens[ops[i]].type=='/')&& (flag==0))
      {flag=1;
        op=ops[i];
      break;}
    }

    for (int i=len_ops-1;i>=0;i--){
      if((tokens[ops[i]].type== DEREF )&& (flag==0))
      { flag=1;
        op=ops[i];
      break;}
    }

    
    if(len_ops==1 && tokens[op].type==DEREF){
      return vaddr_read(eval(op + 1, q), 8);
    }
    

    //op = the position of 主运算符 in the token expression;
    word_t val1 = eval(p, op - 1);
    word_t val2 = eval(op + 1, q);

    switch (tokens[op].type) {
      case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/': return val1 / val2;
      case TK_EQ: return val1 == val2;
      case TK_NEQ: return val1 != val2;
      case TK_AND: return val1 && val2;
      default: assert(0);
    }
  }
  return 0;
}

word_t expr(char *e, bool *success) {
  init_regex();
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  //TODO();
  for (int i = 0; i < nr_token; i ++) {
  if (tokens[i].type == '*' && (i == 0 || tokens[i - 1].type == '+'\
   || tokens[i - 1].type =='-' || tokens[i - 1].type =='*' || tokens[i - 1].type=='/'\
   || tokens[i - 1].type=='(' || tokens[i - 1].type==TK_EQ ||tokens[i - 1].type==TK_NEQ\
   || tokens[i - 1].type== TK_AND)) {
    tokens[i].type = DEREF;
   }
  }

  *success = true;
  //printf("nr_token:%d",nr_token);
  return eval(0,--nr_token);

  //return 0;
}
