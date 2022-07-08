#include <am.h>
#include <nemu.h>
#include <string.h>
#include <stdio.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)
static int w;
static int h;

void __am_gpu_init() {
  int i;
  w = inw(VGACTL_ADDR+2);  // TODO: get the correct width
  h = inw(VGACTL_ADDR);  // TODO: get the correct height
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < w * h; i ++) fb[i] = i;
  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {//显示控制器信息
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = inw(VGACTL_ADDR+2), .height =inw(VGACTL_ADDR),
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {//帧缓冲控制器信息frame buffer draw
  //int x, y; void *pixels; int w, h; bool sync
  // outl(FB_ADDR, *(uint32_t *)ctl->pixels);
  if (!ctl->sync){
  outl(SYNC_ADDR, 0);
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  int cnt=0;
  static int cnt_p=0;
  for(int y_=ctl->y;y_<=ctl->y+ctl->h;y_++)
    for(int x_=ctl->x;x_<=ctl->x+ctl->w;x_++)
    {
      *(fb+w*y_+x_)=*(((uint32_t *)ctl->pixels)+cnt);cnt++;cnt_p++;}
  printf("***************cnt_p:%d\n",cnt_p);}
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {//同步寄存器
  status->ready = true;
}

//屏幕大小寄存器