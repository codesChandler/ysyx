// #include <common.h>
// #include "syscall.h"

// #define CONFIG_STRACE 1

// int sys_yield(){
//   yield();
//   return 0;
// }

// void sys_exit(Context *c){
//   halt(c->GPRx);
// }

// extern size_t fs_write(int fd, const void *buf, size_t len);
// int sys_write(Context *c){ 
//   int fd=c->GPR2;
//   uintptr_t buf=c->GPR3;
//   int len=c->GPR4;
//   return fs_write(fd, (void *)buf, len);
// }

// extern int fs_open(const char *pathname, int flags, int mode);
// int sys_open(Context *c){
//   char *pathname=(char *)c->GPR2;
//   return fs_open(pathname,0,0);
// }

// extern size_t fs_read(int fd, void *buf, size_t len);
// int sys_read(Context *c){
//    int fd=c->GPR2;
//    void *buf=(void *)c->GPR3;
//    size_t len=c->GPR4;
//   return fs_read(fd, buf,len);
// }

// extern int fs_close(int fd);
// int sys_close(Context *c){
//   int fd=c->GPR2;
//   return fs_close(fd);
// }

// extern size_t fs_lseek(int fd, size_t offset, int whence);
// int sys_lseek(Context *c){
//   int fd=c->GPR2;
//   size_t offset=c->GPR3;
//   int whence=c->GPR4;
//   return fs_lseek(fd, offset, whence);
// }

// int sys_brk(){
//   return 0;
// }


// void do_syscall(Context *c) {
//   uintptr_t a[4];
//   a[0] = c->GPR1;

//   #ifdef CONFIG_STRACE
//       Log("syscall ID= %s", syscall_name[a[0]]);
//   #endif

//   switch (a[0]) {
//     case SYS_yield:c->GPRx=sys_yield();break;
//     case SYS_exit:sys_exit(c);break;
//     case SYS_brk:c->GPRx=sys_brk();break;
//     case SYS_write:c->GPRx=sys_write(c);break;
//     case SYS_read:c->GPRx=sys_read(c);break;
//     case SYS_open:c->GPRx=sys_open(c);break;
//     case SYS_close:c->GPRx=sys_close(c);break;
//     case SYS_lseek:c->GPRx=sys_lseek(c);break;
//     default: panic("Unhandled syscall ID = %d", a[0]);
//   }
// }

#include <common.h>
#include "syscall.h"
#include <sys/time.h>
int fs_open(const char *pathname, int flags, int mode);
size_t fs_read(int fd, void *buf, size_t len);
int fs_close(int fd);
size_t fs_write(int fd, const void *buf, size_t len);
size_t fs_lseek(int fd, size_t offset, int whence);
extern uintptr_t *program_break;

int gettime_ofday(struct timeval *tv, struct timezone *tz){
  AM_TIMER_UPTIME_T time_us;
  time_us.us = io_read(AM_TIMER_UPTIME).us;
  tv->tv_sec = time_us.us/1000000;
  tv->tv_usec = time_us.us%1000000;
  return 0;
}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  switch (a[0]) {
    case SYS_exit: halt(0);break;
    case SYS_yield: yield();c->GPRx = 0;break;
    case SYS_open:c->GPRx=fs_open((const char*)c->GPR2,c->GPR3,c->GPR4);break;
    case SYS_read:c->GPRx=fs_read(c->GPR2,(void *)c->GPR3,c->GPR4);break;
    case SYS_write:c->GPRx=fs_write(c->GPR2,(const void *)c->GPR3,c->GPR4);break;
    //case SYS_kill:break;
    //case SYS_getpid:break;
    case SYS_close:c->GPRx=fs_close(c->GPR2);break;
    case SYS_lseek:c->GPRx =fs_lseek(c->GPR2,c->GPR3,c->GPR4);break;
    case SYS_brk: c->GPRx = 0;break;
    //case SYS_fstat:break;
    //case SYS_time:break;
    //case SYS_signal:break;
    //case SYS_execve:break;
    //case SYS_fork:break;
    //case SYS_link:break;
    //case SYS_unlink:break;
    //case SYS_wait:break;
    //case SYS_times:break;
    case SYS_gettimeofday:c->GPRx = gettime_ofday((struct timeval *)c->GPR2,(struct timezone *)c->GPR3);break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}

