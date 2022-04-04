#include <isa.h>
#include <common.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ,TK_NR,

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
  {"\\d+", TK_NR},        // number
  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"-", '-'},          // minus
  {"\\*",'*'},          //multiplication
  {"/",'/'},             //division 
  {"==", TK_EQ},        // equal
  {"\\(", '('},         //left bracket
  {"\\)",')'},          //right bracket
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

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

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
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

        switch (rules[i].token_type) {
          TK_NR: {
                  for(int i=0;i<substr_len;i++){
                  tokens[nr_token].str[i]= *(substr_start+i);}
                  tokens[nr_token].type=rules[i].token_type;
                  break;}          
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
  int top=-1;
  int cnt_l=0;
  int cnt_r=0;

  for (int i=p;i<=q;i++)
    {if(tokens[i].type!='(')
      cnt_l++;
     else if(tokens[i].type!=')')
      cnt_r++;
    }
  
  if(tokens[p].type!='(' || tokens[q].type!=')')
    return false;
  else if(cnt_l!=cnt_r)
    return false;
  
  for(int i=p+1;i<=q-1;i++)
  {if(tokens[i].type!='(')
      top++;
     else if(tokens[i].type!=')')
      {top--;
      if (top <-1)
      return false;
      }
    }

    return true;
}

word_t eval(int p, int q) {
  if (p > q) {
    /* Bad expression */
    assert(0);
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

    point points[16];
    int cnt=0;
    int len=0;

    for (int i=p;i<=q;i++){
      
    {if(tokens[i].type!='(')
      {points[cnt].x=i;
      cnt++;
      len++;}
     else if(tokens[i].type!=')')
      {points[--cnt].y=i;}
    }
    assert(cnt);
    }

    //find the position of dominant symbol
    int ops[32];
    int len_ops=0;
    for (int i=p;i<=q;i++){
      for(int j=0;j<len;j++)
      {
        if(i>=points[j].x && i<=points[j].y)
        break;
        ops[len_ops++]=i;
      }
    }
    int op=32;
    for (int i=0;i<len_ops;i++){
      if(tokens[ops[i]].type=='*'|| tokens[ops[i]].type=='/')
      {op=ops[i];
      break;}
    }
    
    for (int i=0;i<len_ops;i++)
      if ((tokens[ops[i]].type=='+'|| tokens[ops[i]].type=='-') && (op==32))
      {
        op=ops[i];
        break;
      }
    

    //op = the position of 主运算符 in the token expression;
    word_t val1 = eval(p, op - 1);
    word_t val2 = eval(op + 1, q);

    switch (tokens[op].type) {
      case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/': return val1 / val2;
      default: assert(0);
    }
  }
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  //TODO();
  return eval(0,--nr_token);

  //return 0;
}
