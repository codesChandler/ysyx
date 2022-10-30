#include <NDL.h>
#include <SDL.h>
#include <string.h>

#define keyname(k) #k,

static const char *keyname[] = {
    "NONE",
    _KEYS(keyname)};

static uint8_t state[sizeof(keyname) / sizeof(keyname[0])]={0};

int SDL_PushEvent(SDL_Event *ev)
{
  assert(0);
  return 0;
}

int SDL_PollEvent(SDL_Event *ev)
{ printf("SDL_PollEvent\n");
  assert(ev);
  char buf[64];
  memset(buf,0,64);
  NDL_PollEvent(buf, sizeof(buf));

  if (*buf == 0)
  {
    return 0;
  }

  if (*(buf + 1) == 'd')
    ev->type = SDL_KEYDOWN;
  else if (*(buf + 1) == 'u')
    ev->type = SDL_KEYUP;
  else
    ev->type = SDL_USEREVENT;

  *(buf + strlen(buf) - 1) = 0;


  for (int i = 0; i < sizeof(keyname) / sizeof(keyname[0]); i++)
  {

    if (strcmp(keyname[i], buf + 3) == 0)
    { state[i]=(ev->type == SDL_KEYDOWN);
      ev->key.keysym.sym = i;
    }
  }

  return 1;
}

int SDL_WaitEvent(SDL_Event *event)
{ assert(event);
  printf("SDL_WaitEvent\n");
  while(!SDL_PollEvent(event));
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask)
{
  assert(0);
  return 0;
}

uint8_t *SDL_GetKeyState(int *numkeys)
{
  printf("SDL_GetKeyState\n");
  return state;
}
