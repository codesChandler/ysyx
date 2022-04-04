#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>
//#include <unistd.h>

// this should be enough
static char buf[65536] = {};
static int op=0;//mark the position of buf point
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

int choose(int mol){
  //printf("choose\n");
  //srand(time(0));
  //printf("%d", rand());
  if(op<6000)
  return (unsigned) (rand() % mol);
  else return 0;//prevent buf overflow
}

void gen_num(){
  // printf("num\n");
  //srand((unsigned)time(NULL));
  char num[3];
  //printf(" before buf here\n");
  sprintf(num,"%d",(unsigned)rand()%99);
  //printf(" after buf here\n");
  int len=strlen(num);
  for(int i=0;*(num+i)!='\0';i++)
  {*(buf+op+i)=*(num+i);}
  op +=len;
  //printf("buf here\n");
  //printf("op: %d i:\n",op);
}

void gen_rand_op(){
   //printf("op\n");
  //srand((unsigned)time(NULL));
  switch((unsigned)(rand()%4)) {
    case 0: *(buf+op)='+' ;break;
    case 1: *(buf+op)='-' ;break;
    case 2: *(buf+op)='*' ;break;
    default: *(buf+op)='/';break;
  }
  op++;
  //printf("op: %d",op);
}

void gen(char sym){
   //printf("gen: %c\n",sym);
  *(buf+op)=sym;
  op++;
   //printf("op: %d",op);
}

static void gen_rand_expr() {
  //printf("I am here\n");
  int n=choose(3);
   switch (n) {
    case 0: {//printf("case 0\n");
              gen_num();break;}
    case 1: {//printf("case 1\n");
              gen('('); gen_rand_expr(); gen(')'); break;
              }
    default: {//printf("case 2\n");
              gen_rand_expr(); gen_rand_op(); gen_rand_expr(); break;
            }
  }
  *(buf+op)='\0';
  //printf("buf: %s\n",buf);
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1)
    sscanf(argv[1], "%d", &loop);
  
  int i;
  for (i = 0; i < loop; i++) {
    op=0;
    gen_rand_expr();
    //printf("%s\n",buf);
    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;//exception handling

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}