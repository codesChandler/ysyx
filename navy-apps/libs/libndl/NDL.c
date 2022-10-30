#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>
#include <assert.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

static int evtdev = -1;
static int fbdev = -1;
static int dpdev=-1;
static int screen_w = 0, screen_h = 0;//屏幕的宽度和高度
static int canvas_w = 0, canvas_h = 0;//画布的宽度和高度
uint32_t NDL_GetTicks() {
  struct timeval tv;
  assert(gettimeofday(&tv,NULL)==0);
  uint32_t time=tv.tv_usec/1000+tv.tv_sec*1000;
  return time;
}

int NDL_PollEvent(char *buf, int len) {
  printf("NDL_PollEvent\n");
  return read(evtdev,buf,len);
}

void NDL_OpenCanvas(int *w, int *h) {
  if (getenv("NWM_APP")) {//与我无关
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    assert(write(fbctl, buf, len)!=0);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }

  char buf[100];
  assert(read(dpdev,buf,30)!=0);
  int wp=0;int flag=0;int hp=0;
  for(int i=0;i<30;i++){
    if(*(buf+i)==':') flag++;
    if(('0'<=*(buf+i)) && (*(buf+i)<=('0'+9))){
      if(flag==1)
        wp=wp*10+*(buf+i)-'0';
      else if(flag==2)
        hp=hp*10+*(buf+i)-'0';}
    }
  // printf("wp:%d--hp:%d\n",wp,hp);
  screen_w=wp;
  screen_h=hp;

  if(*w==0 && *h==0){
  *w=wp;
  *h=hp;}

  canvas_w = *w;
  canvas_h = *h;

}


void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {//对于len,前32位为w,后32位为h
  for(int i=0;i<h;i++){
    lseek(fbdev,(screen_w*(y+i)+x)*4,SEEK_SET);
    assert(write(fbdev,pixels+i*w,w*4)!=0);}
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  evtdev=open("/dev/events",0);
  dpdev=open("/proc/dispinfo",0);
  fbdev=open("/dev/fb",0);
  return 0;
}

void NDL_Quit() {

}
