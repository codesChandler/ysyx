// #include <am.h>
// #include <klib.h>
// #include <klib-macros.h>
// #include <stdarg.h>

// #if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

// void itoa(unsigned int n, char * buf)
// { int len,m;
//   for(len=0,m=n;m/10!=0;len++)
//     m/=10;
//   for(int i=0;i<=len;i++){
//     *(buf+len-i)=n%10+'0';
//     n=n/10;
//   }
//   // printf("len:%d\n",len);
//   *(buf+len+1)='\0';
// }

// void input_decoder(va_list ap,char *out, const char *fmt){
//   char *str = out;
//   int d;
//   char *s,buf[100];

//   while (*fmt){
//     if((*fmt)=='%'){
//     switch (*(++fmt))
//     {
//     case 's': /* string */
//       s = va_arg(ap, char *);
//       while(*s) {*str=*s;str++;s++;}
//       break;
//     case 'c': /* string */
//       *str = (char)va_arg(ap, int);
//       str ++;
//       break;    
//     case 'd': /* int */
//       d = va_arg(ap, int);
//       if (d < 0)
//       {
//         *str = '-';
//         str++;
//         d = -d;
//       }
//       // printf("case d n=[%d]\n", d);
//       itoa(d, buf);
//       memcpy(str, buf, strlen(buf));
//       str += strlen(buf);
//       break;}fmt++;}
//     else {*str=*fmt;
//     str++;fmt++;}}
//     *str='\0';
  
//   va_end(ap);
// }

// int printf(const char *fmt, ...) {
//   char out[100];
//   va_list ap;
//   va_start(ap, fmt);
//   input_decoder(ap,out,fmt);
//   va_end(ap);
//   for(int i=0;i<strlen(out);i++)
//     putch(*(out+i));
//   return strlen(out);
// }

// int vsprintf(char *out, const char *fmt, va_list ap) {
//   panic("Not implemented");
// }

// int sprintf(char *out, const char *fmt, ...)
// {
//   va_list ap;
//   va_start(ap, fmt);
//   input_decoder(ap,out,fmt);
//   va_end(ap);
//   return strlen(out);
//   // panic("Not implemented");
// }

// int snprintf(char *out, size_t n, const char *fmt, ...) {
//   panic("Not implemented");
// }

// int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
//   panic("Not implemented");
// }

// #endif

#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

typedef long long ll;

char* num2str(char *str, ll num, ll base) {
  char tmp[32];
  if (num < 0) {
    *str++ = '-';
    num = -num;
  }
  int len = 0;
  if (num == 0) tmp[len++] = 0;
  else while (num) {
    tmp[len++] = num % base;
    num = num / base;
  }
  while (len-- > 0) {
    if (tmp[len] < 10) *str++ = tmp[len] + '0';
    else *str++ = tmp[len] - 10 + 'A';
  }
  return str;
}

int printf(const char *fmt, ...) {
  int n;
  char buf[8192];
  va_list args;
  va_start(args, fmt);
  n = vsprintf(buf, fmt, args);
  va_end(args);
  putstr(buf);
  return n;
}

int sprintf(char *out, const char *fmt, ...) {
  int n;
  va_list args;
  va_start(args, fmt);
  n = vsprintf(out, fmt, args);
  va_end(args);
  return n;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  char *s;
  char *str;
  for (str = out; *fmt; fmt++) {
    if (*fmt != '%') {
      *str++ = *fmt;
      continue;
    }
    fmt++;
    switch (*fmt) {
      case 'c':
        *str++ = va_arg(ap, int);
        break;
      case 'd':
        // cannot handle %02d etc. maybe fix future.
        str = num2str(str, va_arg(ap, ll), 10);
        break;
      case 'p':
        str = num2str(str, va_arg(ap, ll), 16);
        break;
      case 's':
        s = va_arg(ap, char *);
        while (*s) *str++ = *s++;
        break;
      default:
        if (*fmt != '%') *str++ = '%';
        if (*fmt) *str++ = *fmt;
        else fmt--;
        break;
    }
  }
  *str = '\0';
  return str - out;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
