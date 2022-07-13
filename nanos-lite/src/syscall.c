#include <common.h>
#include "syscall.h"

// #define CONFIG_STRACE 1

int sys_yield(){
  yield();
  return 0;
}

void sys_exit(Context *c){
  halt(c->GPRx);
}

int sys_write(Context *c){
  int fd=c->GPR1;
  uintptr_t buf=c->GPR2;
  int len=c->GPR3;
  int i=0;
  if(fd==1 || fd==2){
  for(;i<len;i++){
    putch(*(((char *)buf)+i));
  }}
  return i;
}


void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;

  #ifdef CONFIG_STRACE
      Log("syscall ID= %s", syscall_name[a[0]]);
  #endif

  switch (a[0]) {
    case SYS_yield:c->GPRx=sys_yield();break;
    case SYS_exit:sys_exit(c);break;
    case SYS_write:c->GPRx=sys_write(c);break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
