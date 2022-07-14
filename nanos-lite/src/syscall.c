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
  int fd=c->GPR2;
  uintptr_t buf=c->GPR3;
  int len=c->GPR4;
  int i=0;
  if(fd==1 || fd==2){
    for(;i<len;i++){
    putch(*((char *)buf+i));}
    }
  return i;
}

extern int fs_open(const char *pathname, int flags, int mode);
int sys_open(Context *c){
  char *pathname=(char *)c->GPR2;
  return fs_open(pathname,0,0);
}

extern size_t fs_read(int fd, void *buf, size_t len);
int sys_read(Context *c){
   int fd=c->GPR2;
   void *buf=(void *)c->GPR3;
   size_t len=c->GPR4;
  return fs_read(fd, buf,len);
}

extern int fs_close(int fd);
int sys_close(Context *c){
  int fd=c->GPR2;
  return fs_close(fd);
}

int sys_brk(){
  return 0;
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
    case SYS_brk:c->GPRx=sys_brk();break;
    case SYS_write:c->GPRx=sys_write(c);break;
    case SYS_read:c->GPRx=sys_read(c);break;
    case SYS_open:c->GPRx=sys_open(c);break;
    case SYS_close:c->GPRx=sys_close(c);break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
