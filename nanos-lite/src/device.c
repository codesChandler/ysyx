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
  // printf("events_read\n");
  AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
  if (ev.keycode == AM_KEY_NONE) return 0;
  char *down="kd ";
  char *up="ku ";
  if(ev.keydown) //DOWN
  {
    strcat(down,keyname[ev.keycode]);
    memcpy(buf+offset,down,strlen(down));
    memset(buf+offset+strlen(down),'\n',1);
    memset(buf+offset+strlen(down)+1,0,len-strlen(up)-1-3);
    return len;}
  else           //UP
  {
    strcat(up,keyname[ev.keycode]);
    memcpy(buf+offset,up,strlen(up));
    memset(buf+offset+strlen(up),'\n',1);
    memset(buf+offset+strlen(up)+1,0,len-strlen(up)-1-3);
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
