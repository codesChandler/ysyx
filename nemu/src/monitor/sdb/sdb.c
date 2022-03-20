#include <isa.h>
#include <cpu/cpu.h>
#include <string.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <memory/paddr.h>

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

int c2i(char ch)
{
        // 如果是数字，则用数字的ASCII码减去48, 如果ch = '2' ,则 '2' - 48 = 2
        if(isdigit(ch))
                return ch - 48;
 
        // 如果是字母，但不是A~F,a~f则返回
        if( ch < 'A' || (ch > 'F' && ch < 'a') || ch > 'z' )
                return -1;
 
        // 如果是大写字母，则用数字的ASCII码减去55, 如果ch = 'A' ,则 'A' - 55 = 10
        // 如果是小写字母，则用数字的ASCII码减去87, 如果ch = 'a' ,则 'a' - 87 = 10
        if(isalpha(ch))
                return isupper(ch) ? ch - 55 : ch - 87;
 
        return -1;
}

int hex2dec(char *hex)
{
        int len;
        int num = 0;
        int temp;
        int bits;
        int i;
        


        // 此例中 hex = "1de" 长度为3, hex是main函数传递的
        len = strlen(hex);
 
        for (i=0, temp=0; i<len; i++, temp=0)
        {
                // 第一次：i=0, *(hex + i) = *(hex + 0) = '1', 即temp = 1
                // 第二次：i=1, *(hex + i) = *(hex + 1) = 'd', 即temp = 13
                // 第三次：i=2, *(hex + i) = *(hex + 2) = 'd', 即temp = 14
                temp = c2i( *(hex + i) );
                // 总共3位，一个16进制位用 4 bit保存
                // 第一次：'1'为最高位，所以temp左移 (len - i -1) * 4 = 2 * 4 = 8 位
                // 第二次：'d'为次高位，所以temp左移 (len - i -1) * 4 = 1 * 4 = 4 位
                // 第三次：'e'为最低位，所以temp左移 (len - i -1) * 4 = 0 * 4 = 0 位
                bits = (len - i - 1) * 4;
                temp = temp << bits;
 
                // 此处也可以用 num += temp;进行累加
                num = num | temp;
        }
 
        // 返回结果
        return num;
}


/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  return -1;
}

static int cmd_si(char *args)  {
  if(args==NULL) *args=1;
  int n=1;
  sscanf(args,"%d",&n);
  //printf("the number of instruction:%d \n",n);
  cpu_exec(n);
  return 0;
}

static int cmd_info(char *args)  {
  //printf("%s\n",args);
  if(strcmp(args, "r") == 0) isa_reg_display();
  return 0;
}

static int cmd_x(char *args)  {
  char *arg = strtok(NULL, " ");
  int n=0;
  sscanf(arg,"%d",&n);
  //printf("%d\n",n);
  char *arg1 = strtok(NULL, " ");
  int exp = hex2dec(arg1);
  //printf("%x\n",exp);
  for(int i=0;i<n;i++){
    printf("%ld\n",paddr_read(exp+i*32, 4));
  }
  return 0;
}

static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },

  /* TODO: Add more commands */
  { "si", "Execute a given number of instructions",cmd_si },
  { "info","Print register status or monitoring point information",cmd_info},
  {"x","Output N consecutive 4 bytes in hexadecimal format",cmd_x}
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
