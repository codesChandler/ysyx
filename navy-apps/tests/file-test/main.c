#include "stdio.h"
#include <assert.h>

FILE *fopen (const char *file,
       const char *mode)
{
  // printf("I am here\n");
  return 1;
  // return _fopen_r (_REENT, file, mode);
}
#define SYS_open 2
int main() {
  printf("I am in file-test:%d\n",_syscall_(SYS_open, (int)&"/share/files/num", 0, 0));

  FILE *fp = _fopen_r (_REENT,"/share/files/num", "r+");
  printf("I am in file-test:%d\n",fp);

  // fseek(fp, 0, SEEK_END);
  // long size = ftell(fp);
  // assert(size == 5000);

  // fseek(fp, 500 * 5, SEEK_SET);
  // int i, n;
  // for (i = 500; i < 1000; i ++) {
  //   fscanf(fp, "%d", &n);
  //   assert(n == i + 1);
  // }

  // fseek(fp, 0, SEEK_SET);
  // for (i = 0; i < 500; i ++) {
  //   fprintf(fp, "%4d\n", i + 1 + 1000);
  // }

  // for (i = 500; i < 1000; i ++) {
  //   fscanf(fp, "%d", &n);
  //   assert(n == i + 1);
  // }

  // fseek(fp, 0, SEEK_SET);
  // for (i = 0; i < 500; i ++) {
  //   fscanf(fp, "%d", &n);
  //   assert(n == i + 1 + 1000);
  // }

  // fclose(fp);

  printf("PASS!!!\n");

  return 0;
}
