#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  size_t open_offset;
  ReadFn read;
  WriteFn write;
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

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {//文件记录表
  [FD_STDIN]  = {"stdin", 0, 0, 0,invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0,0, invalid_read, invalid_write},
  [FD_STDERR] = {"stderr", 0, 0,0, invalid_read, invalid_write},
#include "files.h"
};

void init_fs() {
  // TODO: initialize the size of /dev/fb
}

int fs_open(const char *pathname, int flags, int mode){
  for(int i=0;i<sizeof(file_table);i++){
    if(strcmp(pathname,file_table[i].name)==0){
      file_table[i].open_offset=0;
      return i;}
  }
  assert(0);
}

extern size_t ramdisk_read(void *buf, size_t offset, size_t len);

size_t fs_read(int fd, void *buf, size_t len){
  printf("file_table[fd].open_offset:%d\n",file_table[fd].open_offset);
  assert((file_table[fd].open_offset+len)<=file_table[fd].size);
  ramdisk_read(buf,file_table[fd].disk_offset+file_table[fd].open_offset,len);
  file_table[fd].open_offset+=len;
  return len;
}

// size_t fs_write(int fd, const void *buf, size_t len){
//   printf("I am here\n");
//   return 0;
// }

int fs_size(int fd){
  return file_table[fd].size;
}

//enum {SEEK_SET,SEEK_CUR,SEEK_end};

size_t fs_lseek(int fd, size_t offset, int whence){
  if(whence == SEEK_SET) file_table[fd].open_offset=offset;
  else if(whence == SEEK_CUR) file_table[fd].open_offset+=offset;
  else file_table[fd].open_offset = file_table[fd].size;

  return file_table[fd].open_offset;
}

int fs_close(int fd){
  return 0;
}
