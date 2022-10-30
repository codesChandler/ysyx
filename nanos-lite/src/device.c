#include <common.h>
#include <string.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  int i=0;
  for(;i<len;i++)
    putch(*((char *)buf+i));
  return i;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  
  AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
  if (ev.keycode == AM_KEY_NONE) {
    return 0;}

  if(ev.keydown) //DOWN
  { char down[100]="kd ";
    strcat(down,keyname[ev.keycode]);
    memcpy(buf,down,strlen(down));
    memset(buf+strlen(down),'\n',1);
    memset(buf+strlen(down)+1,0,len-strlen(down)-1-3);

    return len;}
  else           //UP
  { // printf("keyname[ev.keycode]:%s\n",keyname[ev.keycode]);
    char up[100]="ku ";
    strcat(up,keyname[ev.keycode]);
    memcpy(buf,up,strlen(up));    
    memset(buf+strlen(up),'\n',1);
    memset(buf+strlen(up)+1,0,len-strlen(up)-1-3);
    
    return len;}
}

void num2char(unsigned int n, char * buf,int base)
{ int len,m;
  for(len=0,m=n;m/base!=0;len++)
    m/=base;
  for(int i=0;i<=len;i++){
    if(n%base<10){
      *(buf+len-i)=n%base+'0';
      n=n/base;}
    else{
      *(buf+len-i)=n%base+'0'+39;
      n=n/base;
    }

  }
  // printf("len:%d\n",len);
  *(buf+len+1)='\n';
  *(buf+len+2)='\0';
}

static int width=0;
size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  AM_GPU_CONFIG_T cfg=io_read(AM_GPU_CONFIG);
  char w[100]="WIGTH :";
  char h[100]="HEIGHT:";
  width=cfg.width;
  num2char(cfg.width, w+strlen(w),10);
  num2char(cfg.height, h+strlen(h),10);
  char total[100];
  strcpy(total,w);
  strcat(total,h);
  memcpy(buf,total,len);

  return len;
}

// size_t fb_write(const void *buf, size_t offset, size_t len) { 
//   //use len pass width amd height simultaneously
//   int y=offset/width/4;
//   int x=offset%width/4;
//   int w=len/4;
//   int h=1;
//   bool sync=true;
//   void *pixels = (void *)buf;
//   // Log("Initializing devices...fb_write");
//   io_write(AM_GPU_FBDRAW,x,y,pixels,w,h,sync);
//   return w*h*4;
// }


void init_device() {
  Log("Initializing devices...");
  ioe_init();
}

// AM_GPU_CONFIG_T gpu;
// size_t dispinfo_read(void *buf, size_t offset, size_t len)
// {
//   char dispinfo[128] = {}; 
//   sprintf(dispinfo, "WIDTH : %d\nHEIGHT:%d", gpu.width, gpu.height);
//   strncpy(((char *)buf + offset), dispinfo, len);  
//   return len;
// }

size_t fb_write(const void *buf, size_t offset, size_t len)
{
  int x = offset / 4 % width;   // 4 is each of point 
  int y = offset / 4 / width; 

  char *buff = (char *)buf;
  size_t ret = len;

  if(len <= ((width - x) * 4)){
    io_write(AM_GPU_FBDRAW, x, y, buff, len/4, 1, false);
    len -= len;
  } 
  else {
    io_write(AM_GPU_FBDRAW, x, y, buff, (width - x), 1, false);
    len -= ((width - x) * 4);
    buff += ((width - x) * 4);
  }

  int i = 1;
  while(len > (width * 4) ){
    io_write(AM_GPU_FBDRAW, 0, y + i, buff, width, 1, false);
    buff += width * 4;
    len -=  width * 4;
    i++;
  }

  io_write(AM_GPU_FBDRAW, 0, y + i, buff, len, 1, true);
  return ret;

}

// void init_device()
// {
//   Log("Initializing devices...");
//   ioe_init();
//   gpu = io_read(AM_GPU_CONFIG);
// }
