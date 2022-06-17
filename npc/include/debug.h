#ifndef _DEBUG_H_
#define _DEBUG_H_

#define ASNI_NONE       "\33[0m"
#define ASNI_FG_RED     "\33[1;31m"
#define ASNI_FG_GREEN   "\33[1;32m"
#define ASNI_FG_BLUE    "\33[1;34m"
#define ASNI_FMT(str, fmt) fmt str ASNI_NONE
#define FMT_WORD "0x%08x"

#define Log(format, ...) \
    _Log(ASNI_FMT("[%s:%d %s] " format, ASNI_FG_BLUE) "\n", \
        __FILE__, __LINE__, __func__, ## __VA_ARGS__)

#define _Log(...) \
  do { \
    printf(__VA_ARGS__); \
     } while (0)
    // log_write(__VA_ARGS__); 
 


#endif