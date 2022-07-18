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
  char buf[64];
  NDL_PollEvent(buf, sizeof(buf));

  if(*buf==0){return 0;}

  if(*(buf+1)=='d')
    ev->type=SDL_KEYDOWN;
  else if(*(buf+1)=='u')
    ev->type=SDL_KEYUP;
  else ev->type=SDL_USEREVENT;
  *(buf+strlen(buf)-1)=0;

  // printf("SDL_PollEvent:%s\n",buf);

  for(int i=0;i<sizeof(keyname)/sizeof(keyname[0]);i++){

    if(strcmp(keyname[i],buf+3)==0){

      ev->key.keysym.sym=i;}
      }
  
  return 1;
}

int SDL_WaitEvent(SDL_Event *event) {
  char buf[64];

  memset(buf,0,sizeof(buf));
  // printf("SDL_WaitEvent:beforebefore%s\n",buf);
  NDL_PollEvent(buf, sizeof(buf));
  // printf("SDL_WaitEvent:before%s\n",buf);

  while(!(*buf)){
    NDL_PollEvent(buf, sizeof(buf));
  }

  // printf("SDL_WaitEvent:after%s\n",buf);

  if(*(buf+1)=='d')
    event->type=SDL_KEYDOWN;
  else if(*(buf+1)=='u')
    event->type=SDL_KEYUP;
  else event->type=SDL_USEREVENT;
  *(buf+strlen(buf)-1)=0;

  for(int i=0;i<sizeof(keyname)/sizeof(keyname[0]);i++){

    if(strcmp(keyname[i],buf+3)==0){
      event->key.keysym.sym=i;}
      }
  
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  assert(0);
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  char buf[64];
  NDL_PollEvent(buf, sizeof(buf));
  static uint8_t state[sizeof(keyname)/sizeof(keyname[0])];
  //init state array
  for(int i=0;i<sizeof(state);i++)
    state[i]=0;

  if(*buf==0 || *(buf+1)=='d'){
    return state;
  } else if(*(buf+1)=='u'){
      for(int i=0;i<sizeof(keyname)/sizeof(keyname[0]);i++){

        if(strcmp(keyname[i],buf+3)==0){
            state[i]=1;
            return state;
           }}
  }
  assert(0);
}
