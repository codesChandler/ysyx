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
    if((*fmt)=='%'){
    switch (*(fmt+1))
    {
    case 's': /* string */
      s = va_arg(ap, char *);
      memcpy(str, s, strlen(s));
      str += strlen(s);
      break;
    case 'c': /* string */
      *str = (char)va_arg(ap, int);
      str ++;
      str='\0';
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
      break;}}
    else *str=*fmt;
    str++;fmt++;}
    *str='\0';
  
  va_end(ap);
}

int printf(const char *format, ...) {
  // char out[1000];
  // va_list ap;
  // va_start(ap, fmt);
  // input_decoder(ap,out,fmt);
  // va_end(ap);
  // for(int i=0;i<strlen(out);i++)
  //   putch(*(out+i));
  // return strlen(out);
  //panic("Not implemented");
  va_list arg;
	va_start(arg, format);
 
	while (*format)
	{
		char ret = *format;
		if (ret == '%')
		{
			switch (*++format)
			{
			case 'c':
			{
						char ch = (char) va_arg(arg, int);
						putch(ch);
						break;
			}
			case 's':
			{
						char *pc = va_arg(arg, char *);
						while (*pc)
						{
							putch(*pc);
							pc++;
						}
						break;
			}
			default:
				break;
			}
		}
		else
		{
			putch(*format);
		}
		format++;
	}
	va_end(arg);

  return 0;
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
  // panic("Not implemented");
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
