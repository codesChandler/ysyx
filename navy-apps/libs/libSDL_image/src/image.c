#define SDL_malloc  malloc
#define SDL_free    free
#define SDL_realloc realloc

#define SDL_STBIMAGE_IMPLEMENTATION
#include "SDL_stbimage.h"
#include "stdio.h"
#include <assert.h>

SDL_Surface* IMG_Load_RW(SDL_RWops *src, int freesrc) {
  assert(src->type == RW_TYPE_MEM);
  assert(freesrc == 0);
  return NULL;
}

SDL_Surface* IMG_Load(const char *filename) {
  printf("IMG_Load:%s\n",filename);
  FILE *fp = fopen(filename, "r+");
  assert(fp!=NULL);

  fseek(fp,0,SEEK_END);
  int size=ftell(fp);
  printf("SDL_Surface* IMG_Load:%d\n",size);
  uint8_t *buf=(uint8_t *)malloc(size);
  fseek(fp,0,SEEK_SET);
  assert(fread(buf,size,1,fp)==1);
  SDL_Surface* screen=STBIMG_LoadFromMemory(buf, size);
  assert(screen!=NULL);
  free(buf);
  printf("=====================SDL_Surface* IMG_Load\n");
  return screen;
}

int IMG_isPNG(SDL_RWops *src) {
  return 0;
}

SDL_Surface* IMG_LoadJPG_RW(SDL_RWops *src) {
  return IMG_Load_RW(src, 0);
}

char *IMG_GetError() {
  return "Navy does not support IMG_GetError()";
}
