#include <fs.h>
#include <common.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
} Finfo;

static int open_offset[25];

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}


extern size_t serial_write(const void *buf, size_t offset, size_t len);
extern size_t ramdisk_write(const void *buf, size_t offset, size_t len);
extern size_t ramdisk_read(void *buf, size_t offset, size_t len);
extern size_t events_read(void *buf, size_t offset, size_t len);
/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {//文件记录表
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0,invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0,invalid_read, serial_write},
  {"/dev/events", 0, 0},
#include "files.h"
  
};

int fs_open(const char *pathname, int flags, int mode){
  for(int i=0;i<sizeof(file_table)/sizeof(Finfo);i++){
    if(strcmp(pathname,file_table[i].name)==0){
      open_offset[i]=0;

      #ifdef CONFIG_STRACE
        Log("syscall ID= sys_open file= %s", file_table[i].name);
      #endif

      if(i==1||i==2)
        file_table[i].write=serial_write;
      else file_table[i].write=ramdisk_write;

      if(i==3)
        file_table[i].read=events_read;
      else file_table[i].read=ramdisk_read;

      return i;}
  }
  assert(0);
  return -1;
}

size_t fs_read(int fd, void *buf, size_t len){
  #ifdef CONFIG_STRACE
    Log("syscall ID= sys_read file= %s", file_table[fd].name);
  #endif
  // printf()
  if(len==0) return 0;
  int len_r=0;
  printf("fs_read\n");
  len_r=file_table[fd].read(buf,file_table[fd].disk_offset+open_offset[fd],len);
  open_offset[fd]+=len_r;
  return len_r;

  // printf("fs_read\n");
  // assert(fd>2);
  // // assert((open_offset[fd]+len)<=file_table[fd].size);
  // if((open_offset[fd]+len)>file_table[fd].size)
  //   len=file_table[fd].size-open_offset[fd];
  // assert(ramdisk_read(buf,file_table[fd].disk_offset+open_offset[fd],len)==len);
  // open_offset[fd]+=len;
  // return len;
}


size_t fs_write(int fd, const void *buf, size_t len){
  #ifdef CONFIG_STRACE
    Log("syscall ID= sys_write file= %s", file_table[fd].name);
  #endif
  assert(file_table[fd].write(buf,file_table[fd].disk_offset+open_offset[fd],len)==len);
  open_offset[fd]+=len;
  return len;
  // return file_table[fd].write(buf,file_table[fd].disk_offset+open_offset[fd],len);

  // if(fd==1 || fd==2){
  //   int i=0;
  //   for(;i<len;i++){
  //   putch(*((char *)buf+i));}
  //   return i;}
  // else{
  //   assert(buf!=NULL);
  //   assert((open_offset[fd]+len)<=file_table[fd].size);
  //   assert(ramdisk_write(buf,file_table[fd].disk_offset+open_offset[fd],len)==len);
  //   open_offset[fd]+=len;
  //   return len;
  // }

  assert(0);
}


//enum {SEEK_SET,SEEK_CUR,SEEK_end};
size_t fs_lseek(int fd, size_t offset, int whence){
  #ifdef CONFIG_STRACE
    Log("syscall ID= sys_lseek file= %s", file_table[fd].name);
  #endif
  // printf("fs_lseek\n");
  if(whence == SEEK_SET) open_offset[fd]=offset;
  else if(whence == SEEK_CUR) open_offset[fd]+=offset;
  else open_offset[fd] = file_table[fd].size;

  return open_offset[fd];
}

int fs_close(int fd){
  #ifdef CONFIG_STRACE
    Log("syscall ID= sys_close file= %s", file_table[fd].name);
  #endif
  return 0;
}

void init_fs() {
  // TODO: initialize the size of /dev/fb
}




