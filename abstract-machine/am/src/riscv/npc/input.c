#include <am.h>
#include "npc.h"
#include <stdio.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {

  int code= inl(KBD_ADDR);
  kbd->keycode=code & (~KEYDOWN_MASK);
  if((code & KEYDOWN_MASK) == KEYDOWN_MASK)
  { //printf("I am down\n");
    kbd->keycode=code & (~KEYDOWN_MASK);
    kbd->keydown = 1;}
  else{
    // printf("I am UP\n");
    kbd->keycode=code;
    kbd->keydown = 0;
    }
}
