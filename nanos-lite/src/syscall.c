#include <common.h>
#include "syscall.h"
#include <sys/time.h>
#include <proc.h>

int sys_yield(){
  yield();
  return 0;
}

void naive_uload(PCB *pcb, const char *filename);
void sys_exit(Context *c){
  naive_uload(NULL,"/bin/nterm");
  // halt(c->GPRx);
}

extern size_t fs_write(int fd, const void *buf, size_t len);
int sys_write(Context *c){ 
  int fd=c->GPR2;
  uintptr_t buf=c->GPR3;
  size_t len=c->GPR4;
  return fs_write(fd, (void *)buf, len);
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

extern size_t fs_lseek(int fd, size_t offset, int whence);
int sys_lseek(Context *c){
  int fd=c->GPR2;
  size_t offset=c->GPR3;
  int whence=c->GPR4;
  return fs_lseek(fd, offset, whence);
}


int sys_execve(Context * c){
  // assert(0);
  char *filename =(char *)c->GPR2;
  naive_uload(NULL, filename);
  return -1;
}

int sys_brk(){
  return 0;
}

int sys_gettimeofday(Context *c){
  AM_TIMER_UPTIME_T uptime=io_read(AM_TIMER_UPTIME);
  struct timeval *tv=(struct timeval *)c->GPR2;
  tv->tv_sec=uptime.us/1000000;
  tv->tv_usec=uptime.us%1000000;
  #ifdef CONFIG_STRACE
    Log("syscall ID= sys_gettimeofday sec= %x usec= %x", tv->tv_sec,tv->tv_usec);
  #endif
  return 0;
}


void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;

  extern char *name_(int fd);
  #ifdef CONFIG_STRACE
        if(!(a[0]==2||a[0]==3||a[0]==4||a[0]==7||a[0]==8||a[0]==19))
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
    case SYS_lseek:c->GPRx=sys_lseek(c);break;
    case SYS_gettimeofday:c->GPRx=sys_gettimeofday(c);break;
    case SYS_execve:c->GPRx=sys_execve(c);break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}