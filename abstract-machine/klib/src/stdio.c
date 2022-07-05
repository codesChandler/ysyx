#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

void itoa(unsigned int n, char * buf)
{ int len,m;
  for(len=0,m=n;m/10!=0;len++)
    m/=10;
  for(int i=0;i<=len;i++){
    *(buf+len-i)=n%10+'0';
    n=n/10;
  }
  // printf("len:%d\n",len);
  *(buf+len+1)='\0';
}

void input_decoder(va_list ap,char *out, const char *fmt){
  char *str = out;
  int d;
  char *s,buf[100];

  while (*fmt){
    // printf("fmt:%c\n",*fmt);
    switch (*fmt++)
    {
    case 's': /* string */
      s = va_arg(ap, char *);
      memcpy(str, s, strlen(s));
      str += strlen(s);
      break;
    case 'd': /* int */
      d = va_arg(ap, int);
      if (d < 0)
      {
        *str = '-';
        str++;
        d = -d;
      }
      // printf("case d n=[%d]\n", d);
      itoa(d, buf);
      memcpy(str, buf, strlen(buf));
      str += strlen(buf);
      break;
    case '%':break;
    default:*str=*(fmt-1);str++;break;}
    *str='\0';
  }
  va_end(ap);
}

int printf(const char *fmt, ...) {
  char out[100];
  va_list ap;
  va_start(ap, fmt);
  input_decoder(ap,out,fmt);
  va_end(ap);
  for(int i=0;i<strlen(out);i++)
    putch(*(out+i));
  return strlen(out);
  //panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...)
{
  va_list ap;
  va_start(ap, fmt);
  input_decoder(ap,out,fmt);
  va_end(ap);
  return strlen(out);
  return strlen(out);
  // panic("Not implemented");
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
