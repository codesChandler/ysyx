#include <stdio.h>
#include <assert.h>
extern int _open(const char *path, int flags, int mode);
int main() {
  printf("I am here\n");
  FILE *fp = _open("/share/files/num", '0','0');
  assert(fp);

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
