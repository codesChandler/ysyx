#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  // kbd->keycode = inb(KBD_ADDR);
  // if((kbd->keycode & KEYDOWN_MASK) == KEYDOWN_MASK)
  //   kbd->keydown = 1;
  // else
  //   kbd->keydown = 0;
  uint32_t code = inl(KBD_ADDR);
  kbd->keydown = ((code & KEYDOWN_MASK) != 0);
  kbd->keycode = ((code | KEYDOWN_MASK) ^ KEYDOWN_MASK);
}
