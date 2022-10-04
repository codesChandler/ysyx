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
  size_t open_offset;
} Finfo;


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
size_t dispinfo_read(void *buf, size_t offset, size_t len);
extern size_t fb_write(const void *buf, size_t offset, size_t len);
/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {//文件记录表
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0,invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0,invalid_read, serial_write},
  {"/dev/events", 0, 0},
  {"/dev/fb",0,0},
  {"/proc/dispinfo",0,0},
#include "files.h"
  
};

int fs_open(const char *pathname, int flags, int mode){
  for(int i=0;i<sizeof(file_table)/sizeof(Finfo);i++){

    if(strcmp(pathname,file_table[i].name)==0){
      
      file_table[i].open_offset=file_table[i].disk_offset;

      #ifdef CONFIG_STRACE
        Log("syscall ID= sys_open file= %s", file_table[i].name);
      #endif

      if(i==1||i==2)
        file_table[i].write=serial_write;
      else if(i==4) file_table[i].write=fb_write;
      else file_table[i].write=ramdisk_write;

      if(i==3)
        file_table[i].read=events_read;
      else if(i==5)
        file_table[i].read=dispinfo_read;
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
  if(len==0) return 0;
  if(fd!=5 && fd!=3 &&  file_table[fd].open_offset>=file_table[fd].size+file_table[fd].disk_offset) return 0;
  int len_r=0;
  len_r=file_table[fd].read(buf,file_table[fd].open_offset,len);
  file_table[fd].open_offset+=len_r;
  return len_r;
}

size_t fs_write(int fd, const void *buf, size_t len){
  #ifdef CONFIG_STRACE
    Log("syscall ID= sys_write file= %s", file_table[fd].name);
  #endif
  if(len==0) return 0;
  if(fd!=2 && fd!=1  && file_table[fd].open_offset>=file_table[fd].size+file_table[fd].disk_offset) return 0;
  int ret=file_table[fd].write(buf,file_table[fd].open_offset,len);
  file_table[fd].open_offset+=ret;
  return ret;
  assert(0);
}


//enum {SEEK_SET,SEEK_CUR,SEEK_end};
size_t fs_lseek(int fd, size_t offset, int whence){

  #ifdef CONFIG_STRACE
    Log("syscall ID= sys_lseek file= %s", file_table[fd].name);
  #endif
  // printf("fs_lseek\n");
  switch(whence){
  case SEEK_SET: file_table[fd].open_offset=file_table[fd].disk_offset+offset;break;
  case SEEK_CUR: file_table[fd].open_offset+=offset;break;
  case SEEK_END: file_table[fd].open_offset = file_table[fd].size+offset+file_table[fd].disk_offset;break;//+file_table[fd].disk_offset;
  default:assert(0);return -1;}

  return file_table[fd].open_offset-file_table[fd].disk_offset;
}

int fs_close(int fd){
  #ifdef CONFIG_STRACE
    Log("syscall ID= sys_close file= %s", file_table[fd].name);
  #endif
  return 0;
}

void init_fs() {
  // TODO: initialize the size of /dev/fb
  // static char fb[400*300*32/8];
  for(int i=0;i<sizeof(file_table)/sizeof(Finfo);i++){
    if(strcmp("/dev/fb",file_table[i].name)==0){
        file_table[i].size=400*300*32/8;
    }}
}




