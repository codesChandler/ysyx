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
  // printf("I am using serial_write\n");
  int i=0;
  for(;i<len;i++)
    putch(*((char *)buf+i));
  return i;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  
  AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
  if (ev.keycode == AM_KEY_NONE) return 0;
  // printf("events_read--ev.keycode:%d\n",ev.keycode);

  
  char *down="kd ";
  char *up="ku ";
  if(ev.keydown) //DOWN
  {
    // printf("keyname[ev.keycode]:%s\n",keyname[ev.keycode]);
    strcat(down,keyname[ev.keycode]);
    // printf("down0:%s\n",down);
    memcpy(buf,down,strlen(down));
    memset(buf+strlen(down),'\n',1);
    memset(buf+strlen(down)+1,0,len-strlen(down)-1-3);
    // printf("buf:%s\n",buf);
    memset(down+3,0,strlen(down)-3);
    return len;}
  else           //UP
  { // printf("keyname[ev.keycode]:%s\n",keyname[ev.keycode]);
    strcat(up,keyname[ev.keycode]);
    // printf("up0:%s\n",up);
    memcpy(buf,up,strlen(up));
    
    memset(buf+strlen(up),'\n',1);
    memset(buf+strlen(up)+1,0,len-strlen(up)-1-3);
    // printf("buf:%s\n",buf);
    memset(up+3,0,strlen(up)-3);
    // printf("up1:%s\n",up);
    return len;}
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  return 0;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
