#include <common.h>


void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();
word_t expr(char *, bool *);

word_t char2dec(char *hex)
{
  int len;
  word_t num = 0;
  //int temp0=0;

  len = strlen(hex);

  for (int i = 0, temp = 0; i < len; i++)
  {
    //temp0=*(hex + i) - 48;
    temp =( *(hex + i) - 48)*((int)pow(10,(double)(len - i - 1)));
    num = num + temp;
  }

  return num;
}

int main(int argc, char *argv[]) {
  /* Initialize the monitor. */

FILE * fp;
fp =fopen("~/ysyx-workbench/nemu/tools/gen-expr/input","r");
bool success;
for(int i=0;i<200;i++){
  printf("time : %d\n",i);
  char ref_result[100];
  word_t result;
  char expre[60300];
  int m=fscanf(fp,"%s",ref_result);
  word_t ref_result_num=char2dec(ref_result);
  int n=fscanf(fp,"%s",expre);
  if(m==n){printf("I am OK");}
  result=expr(expre,&success);
  if(result != ref_result_num || !success)
  printf("I am wrong\n");
  else printf("succcess time: %d\n",i);
}


#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

  /* Start engine. */
  engine_start();

  return is_exit_status_bad();
}
