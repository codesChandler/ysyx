#ifndef __SYSCALL_H__
#define __SYSCALL_H__

enum {
  SYS_exit,
  SYS_yield,
  SYS_open,
  SYS_read,
  SYS_write,
  SYS_kill,
  SYS_getpid,
  SYS_close,
  SYS_lseek,
  SYS_brk,
  SYS_fstat,
  SYS_time,
  SYS_signal,
  SYS_execve,
  SYS_fork,
  SYS_link,
  SYS_unlink,
  SYS_wait,
  SYS_times,
  SYS_gettimeofday
};

char *syscall_name[]={
  "SYS_exit",//0
  "SYS_yield",//1
  "SYS_open",//2
  "SYS_read",//3
  "SYS_write",//4
  "SYS_kill",//5
  "SYS_getpid",//6
  "SYS_close",//7
  "SYS_lseek",//8
  "SYS_brk",
  "SYS_fstat",
  "SYS_time",
  "SYS_signal",
  "SYS_execve",
  "SYS_fork",
  "SYS_link",
  "SYS_unlink",
  "SYS_wait",
  "SYS_times",
  "SYS_gettimeofday"
};

#endif
