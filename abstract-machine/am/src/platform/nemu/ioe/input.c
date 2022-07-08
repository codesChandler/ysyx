#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {

  int code= inb(KBD_ADDR);
  kbd->keycode=code; //& (~KEYDOWN_MASK);
  if((code & KEYDOWN_MASK) == KEYDOWN_MASK)
    kbd->keydown = 1;
  else
    kbd->keydown = 0;
}
