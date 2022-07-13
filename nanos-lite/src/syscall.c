#include <common.h>
#include "syscall.h"

int sys_yield(){
  yield();
  return 0;
}

void sys_exit(Context *c){
  halt(c->GPRx);
}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;

  switch (a[0]) {
    case SYS_yield:c->GPRx=sys_yield();break;
    case SYS_exit:sys_exit(c);break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
