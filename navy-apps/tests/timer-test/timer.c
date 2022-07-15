#include <stdio.h>
#include <assert.h>
// #include <sys/time.h>
#include <NDL.h>

int main(){
  NDL_Init(0);//暂时不确定flags的数值
  uint32_t time_old=NDL_GetTicks();
  uint32_t time_new=0;
  int ms_cnt=0.5*1000;
  while(1){
    time_new=NDL_GetTicks();
    if((time_new-time_old)>=ms_cnt){
      time_old=time_new;
      printf("0.5s passes by\n");}
  }

  return 0;
}