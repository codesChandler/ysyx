#include <NDL.h>
#include <SDL.h>
#include <string.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  assert(0);
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  assert(0);
  return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
  char buf[64];
  NDL_PollEvent(buf, sizeof(buf));
  if(*(buf+1)=='d')
    event->type=SDL_KEYDOWN;
  else if(*(buf+1)=='u')
    event->type=SDL_KEYUP;
  else event->type=SDL_USEREVENT;
  *(buf+strlen(buf)-1)=0;
  // while(*(keyname[73]+i)){
  //   printf("*keyname[73]%c-buf+3%c=%d--len:%d\n",*(keyname[73]+i),*(buf+cnt),*(keyname[73]+i)-*(buf+cnt),strlen(buf+3));
  //   i++;cnt++;}
  // printf("%s\n",buf+3);
  for(int i=0;i<sizeof(keyname)/sizeof(keyname[0]);i++){
      // int cnt=0;
      // while(keyname[i]+cnt && buf+cnt)
    if(strcmp(keyname[i],buf+3)==0){
      // printf("keyname[i]:%s--buf+3:%s--result:%d==i:%d\n",keyname[i],buf+3,strcmp(keyname[i],buf+3),i);
      event->key.keysym.sym=i;}
      }
  
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  assert(0);
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  assert(0);
  return NULL;
}
