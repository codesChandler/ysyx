#include <stdio.h>
#include <getopt.h>
#include "memory.h"
#include <stdint.h>
#include "vrltr.h"

extern uint8_t *guest_to_host(paddr_t paddr);
static char *img_file = NULL;
static long load_img() {
  if(img_file == NULL){
    printf("no input\n");
    return 0;
  }
  else{
    printf("img:%s\n",img_file);
  }
  FILE *fp = fopen(img_file, "rb");
  // Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  // Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  // assert(ret == 1);

  fclose(fp);
  return size;
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"binary"    , required_argument      , NULL, 'b'},
    // {"log"      , required_argument, NULL, 'l'},
    // {"diff"     , required_argument, NULL, 'd'},
    // {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    // {"ftrace"   , required_argument, NULL, 'f'},
    {0          , 0                , NULL,  0 },
  };

  int o;
  while ( (o = getopt_long(argc, argv, "b:hl:d:p:f:", table, NULL)) != -1) {
    switch (o) {
      case 'b': img_file=optarg; printf("img_o:%s\n",optarg);break;
      // case 'p': sscanf(optarg, "%d", &difftest_port); break;
      // case 'l': log_file = optarg; break;
      // case 'd': diff_so_file = optarg; break;
      // case 'f':printf("elf:%s\n",optarg); load_elf_tables(optarg);break;
      case 1: printf("img_o:%d\n",o);printf("0000000000last:%s\n",optarg);return 0; //img_file = optarg; 
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\n");
        // exit(0);
    }
  }
  return 0;
}
// void inti_vei(int argc, char *argv[]){

//     top=new Vysyx_22040632_top;
// }

void init_monitor(int argc, char *argv[]){
    parse_args(argc,argv);
    load_img();
    // inti_vei(argc,argv);
}