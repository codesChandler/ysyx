#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s)
{
  size_t len = 0;
  while (*(s + len) != '\0')
  {
    len++;
  }
  return len;
  // panic("Not implemented");
}

char *strcpy(char *dst, const char *src)
{
  size_t len = 0;
  while (*(src + len) != '\0')
  {
    *(dst + len) = *(src + len);
    len++;
  }
  *(dst + len) = '\0';
    // panic("Not implemented");
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n)
{

  size_t i;

  for (i = 0; i < n && src[i] != '\0'; i++)
    dst[i] = src[i];
  for (; i < n; i++)
    dst[i] = '\0';

  return dst;

  // panic("Not implemented");
}

char *strcat(char *dst, const char *src)
{
  size_t dest_len = strlen(dst);
  size_t i;

  for (i = 0; src[i] != '\0'; i++)
    dst[dest_len + i] = src[i];
  dst[dest_len + i] = '\0';
  return dst;
  // panic("Not implemented");
}

int strcmp(const char *s1, const char *s2)
{
  int ret = 0;
  while (!(ret = *s1 - *s2) && *s1)
  {
    s1++;
    s2++;
  }

  if (ret < 0)
  {
    return -1;
  }
  else if (ret > 0)
  {
    return 1;
  }
  return 0;
  // panic("Not implemented");
}

int strncmp(const char *s1, const char *s2, size_t n)
{
  int ret = 0;
  int len = 0;
  while (!(ret = *s1 - *s2) && *s1 && (len < n))
  {
    //printf("s1:%c s2:%c\n",*s1,*s2);
    len++;
    s1++;
    s2++;
    // printf("s1:%c s2:%c",*s1,*s2);
  }
  //printf("len:%d\n",len);
  ret = *(s1-1) - *(s2-1);
  if (ret < 0)
  {
    return -1;
  }
  else if (ret > 0)
  {
    return 1;
  }
  return 0;
  //panic("Not implemented");
}

void *memset(void *s, int c, size_t n)
{
  if (s == NULL || n < 0)
  {
    return NULL;
  }
  char *pdest = (char *)s;
  while (n-- > 0)
  {
    *pdest++ = c;
  }
  return s;
  // panic("Not implemented");
}

void *memmove(void *dst, const void *src, size_t n)
{
  //assert(NULL != src && NULL != dst);
  char *tmpdst = (char *)dst;
  char *tmpsrc = (char *)src;

  if (tmpdst <= tmpsrc || tmpdst >= tmpsrc + n)
  {
    while (n--)
    {
      *tmpdst++ = *tmpsrc++;
    }
  }
  else
  {
    tmpdst = tmpdst + n - 1;
    tmpsrc = tmpsrc + n - 1;
    while (n--)
    {
      *tmpdst-- = *tmpsrc--;
    }
  }

  return dst;
}

void *memcpy(void *out, const void *in, size_t n)
{
  assert(NULL != out && NULL != in);
  if(n<=0) return out;
  char *tmpout = (char *)out;
  char *tmpin = (char *)in;
  // panic("Not implemented");
  if (tmpout < tmpin ||tmpin+n-1 <tmpout){
    // printf("I am here-1\n");
    while (n--)
    {
      *tmpout++ = *tmpin++;
    }}
  else{
    // printf("I am here0\n");
    tmpout=tmpout+n-1;
    tmpin=tmpin+n-1;
    while(n--){
      *tmpout--=*tmpin--;
    }
  }
  return out;
}

int memcmp(const void *s1, const void *s2, size_t n)
{
  if(n==0) return 0;
  char *tmps1=(char *)s1;
  char *tmps2=(char *)s2;
  // panic("Not implemented");
  return strncmp(tmps1, tmps2,n);
}

#endif
