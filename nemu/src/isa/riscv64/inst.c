#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

extern word_t csr_r(word_t index);
extern void csr_w(word_t index,word_t data);
extern word_t isa_raise_intr(word_t NO, vaddr_t epc);

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write
#define Cr(i) csr_r(i)
#define Cw(i,data) csr_w(i,data)

enum {
  TYPE_I, TYPE_U, TYPE_S,
  TYPE_N, TYPE_J,TYPE_R,TYPE_B// none
};

#define src1R(n) do { *src1 = R(n); } while (0)
#define src2R(n) do { *src2 = R(n); } while (0)
#define destR(n) do { *dest = n; } while (0)
#define src1I(i) do { *src1 = i; } while (0)
#define src2I(i) do { *src2 = i; } while (0)
#define destI(i) do { *dest = i; } while (0)

static word_t immI(uint32_t i) { return SEXT(BITS(i, 31, 20), 12); }
static word_t immU(uint32_t i) { return SEXT(BITS(i, 31, 12), 20) << 12; }
static word_t immS(uint32_t i) { return (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); }
static word_t immJ(uint32_t i) { uint64_t _1st=BITS(i, 30, 21)<<1;
                                 uint64_t _2st=BITS(i,20,20)<<11;
                                 uint64_t _3st=BITS(i,19,12)<<12;
                                 return (SEXT(BITS(i, 31, 31), 1) << 20) | _1st | _2st | _3st; }
static word_t immB(uint32_t i) { uint64_t _1st=BITS(i,11,8)<<1;
                                 uint64_t _2st=BITS(i,30,25)<<5;
                                 uint64_t _3st=BITS(i,7,7)<<11;
                                 return (SEXT(BITS(i, 31, 31), 1) << 12) | _1st | _2st | _3st; }


static void decode_operand(Decode *s, word_t *dest, word_t *src1, word_t *src2, int type) {
  uint32_t i = s->isa.inst.val;
  int rd  = BITS(i, 11, 7);
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  destR(rd);
  switch (type) {
    case TYPE_I: src1R(rs1);  src2I(immI(i)); break;
    case TYPE_U: src1I(immU(i)); break;
    case TYPE_S: destI(immS(i)); src1R(rs1); src2R(rs2); break;
    case TYPE_J: src1I(immJ(i)); destR(rd);break;
    case TYPE_R: destR(rd);src1R(rs1); src2R(rs2);break;
    case TYPE_B: src1R(rs1); src2R(rs2);destI(immB(i));break;
  }
}

static int decode_exec(Decode *s) {
  word_t dest = 0, src1 = 0, src2 = 0;
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* body */ ) { \
  decode_operand(s, &dest, &src1, &src2, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

  INSTPAT_START();
  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal  , J, R(dest)=s->dnpc;s->dnpc=src1+s->pc);

  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(dest) = src1 + s->pc);
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(dest) =src1);

  INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest) = Mr(src1 + src2, 8));
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(dest) = src1 + src2);
  INSTPAT("??????? ????? ????? 110 ????? 00100 11", ori   , I, R(dest) = src1 | src2);  
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, //if(dest !=0) {printf("***%ld****/n",dest); 
                                                                R(dest) = s->dnpc;//}
                                                                s->dnpc=(src1+src2) & (~((uint64_t) 1)));
                                                                //printf("***%ld****/n",s->dnpc));

  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I,R(dest) =(int64_t) (signed)  Mr(src1 + src2, 4));
  INSTPAT("??????? ????? ????? 110 ????? 00000 11", lwu     , I,R(dest) =(uint64_t)Mr(src1 + src2, 4));
  //printf("dest:%lx\n",(int64_t) (unsigned)Mr(src1 + src2, 4)); R(dest) =(int64_t) (signed)  Mr(src1 + src2, 4));
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I,R(dest) =SEXT(BITS(Mr(src1 + src2, 2), 15,0), 16));
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu     , I,R(dest) =SEXTU(BITS(Mr(src1 + src2, 2), 15,0), 16));
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(dest) =(uint64_t) Mr(src1 + src2, 1));
  INSTPAT("??????? ????? ????? 000 ????? 00000 11", lb     , I, R(dest) =SEXT(BITS(Mr(src1 + src2, 1), 7,0), 8));  
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, if(src1<src2) R(dest) =1;else R(dest) =0);
  INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw  , I, R(dest) = (int64_t)(signed)((uint32_t)src1 + (uint32_t)src2));//printf("addiw src1:%d\n",(uint32_t)src1);printf("addiw src2:%d\n",(uint32_t)src2);printf("addiw src1+src2:%d\n",((uint32_t)src1 + (uint32_t)src2));printf("addiw src1+src2:%ld\n",(int64_t)(signed)((uint32_t)src1 + (uint32_t)src2));R(dest) = (int64_t)(signed)((uint32_t)src1 + (uint32_t)src2));
  INSTPAT("010000? ????? ????? 101 ????? 00100 11", srai   , I, R(dest) =((signed) src1) >> SEXTU(BITS(src2, 5, 0), 6));//printf("src1:%ld srai\n",(src1));printf("src2:%ld srai\n",SEXTU(BITS(src2, 5, 0), 6));printf("src1:%d srai after shift\n",((signed) src1) >> SEXTU(BITS(src2, 5, 0), 6));R(dest) =((signed) src1) >> SEXTU(BITS(src2, 5, 0), 6);printf("R(dest):%ld srai after shift\n",R(dest)););
   INSTPAT("010000? ????? ????? 101 ????? 00110 11", sraiw   , I, R(dest) =(int64_t)((int32_t)src1) >> SEXTU(BITS(src2, 5, 0), 6));
  INSTPAT("000000? ????? ????? 001 ????? 00100 11", slli   , I, R(dest) =((uint64_t) src1) << SEXTU(BITS(src2, 5, 0), 6) ); 
  INSTPAT("000000? ????? ????? 101 ????? 00100 11", srli   , I, R(dest) =((uint64_t) src1) >> SEXTU(BITS(src2, 5, 0), 6) ); 
  INSTPAT("0000000 ????? ????? 101 ????? 00110 11", srliw   , I, R(dest) =(int64_t)(signed)(((uint32_t) src1) >> SEXTU(BITS(src2, 4, 0), 5)) ); 
  INSTPAT("0000000 ????? ????? 001 ????? 00110 11", slliw   , I, R(dest) =(int64_t)(signed)(((uint32_t) src1) << SEXTU(BITS(src2, 4, 0), 5))); 

  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(dest) =src1 ^ src2);    
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(dest) =src1 & src2);  

  INSTPAT("??????? ????? ????? 001 ????? 11100 11", csrrw   , I,if(dest!=0) {R(dest) =Cr(src2);Cw(src2,src1);});  

  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, if(src1==src2) s->dnpc=dest+s->pc);
  //      110 0011 0000 0100 0000 0101 0000 0000
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, if(src1!=src2) s->dnpc=dest+s->pc);
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B,if((signed)src1<(signed)src2) s->dnpc=dest+s->pc;);//printf("src1:%d\n",(signed)src1); printf("src2:%d\n",(signed)src2);if((signed)src1<(signed)src2) {printf("src1:%d<src2:%d\n",(signed)src1,(signed)src2);s->dnpc=dest+s->pc;}else printf("src1:%d>src2:%d\n",(signed)src1,(signed)src2););
  //      001 01111 10010 100 00000 1100011
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B,if((signed)src1>=(signed)src2) s->dnpc=dest+s->pc);//printf("src1:%d bge\n",(signed)src1); printf("src2:%d bge\n",(signed)src2); if((signed)src1>=(signed)src2) s->dnpc=dest+s->pc);
  INSTPAT("??????? ????? ????? 111 ????? 11000 11", bgeu    , B, if(src1>=src2) s->dnpc=dest+s->pc);  
  INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu    , B, if(src1<src2)s->dnpc=dest+s->pc);
  //if(src1<src2){printf("src1:%d<src2:%d\n",(signed)src1,(signed)src2);s->dnpc=dest+s->pc;}else printf("src1:%d>src2:%d\n",(signed)src1,(signed)src2));
  INSTPAT("0000000 ????? ????? 000 ????? 0111011", addw    , R, R(dest) = (int64_t)(signed)((uint32_t)src1 + (uint32_t)src2));
  INSTPAT("0100000 ????? ????? 000 ????? 0111011", subw    , R, R(dest) = (int64_t)(signed)((uint32_t)src1 - (uint32_t)src2));  
  INSTPAT("0100000 ????? ????? 101 ????? 0111011", sraw    , R, R(dest) = (int64_t)((int32_t)src1) >> SEXTU(BITS(src2, 5, 0), 6));  
  INSTPAT("0000000 ????? ????? 101 ????? 0111011", srlw    , R, R(dest) = (int64_t)(signed)(((uint32_t) src1) >> SEXTU(BITS(src2, 4, 0), 5)));  
  INSTPAT("0100000 ????? ????? 000 ????? 0110011", sub     , R, R(dest) = src1 - src2);
  INSTPAT("0000000 ????? ????? 000 ????? 0110011", add     , R, R(dest) = src1 + src2);
  INSTPAT("0000000 ????? ????? 111 ????? 0110011", and     , R, R(dest) = src1 & src2);
  INSTPAT("0000000 ????? ????? 110 ????? 0110011", or      , R, R(dest) = src1 | src2);
  INSTPAT("0000000 ????? ????? 100 ????? 0110011", xor     , R, R(dest) = src1 ^ src2);
  INSTPAT("0000000 ????? ????? 010 ????? 0110011", slt     , R, if(((signed)src1) < ((signed)src2)) R(dest) = 1;else R(dest) = 0);  
  INSTPAT("0000000 ????? ????? 011 ????? 0110011", sltu    , R, if(src1 < src2) R(dest) = 1;else R(dest) = 0);  
  INSTPAT("0000000 ????? ????? 001 ????? 0111011", sllw    , R, R(dest) = (int64_t)((((int32_t)src1)) << SEXTU(BITS(src2, 4, 0), 5)));
  INSTPAT("0000000 ????? ????? 001 ????? 0110011", sll    , R, R(dest) =((uint64_t) src1) << SEXTU(BITS(src2, 5, 0), 6));  
  INSTPAT("0000001 ????? ????? 000 ????? 0111011", mulw    , R, R(dest) = (int64_t)((int32_t)src1*(int32_t)src2));  
  INSTPAT("0000001 ????? ????? 000 ????? 0110011", mul     , R, R(dest) =(src1*src2));
  INSTPAT("0000001 ????? ????? 100 ????? 0110011", div     , R, R(dest) =((int64_t)src1/(int64_t)src2));  
  INSTPAT("0000001 ????? ????? 101 ????? 0110011", divu    , R,R(dest) = (uint64_t)((unsigned)src1/(unsigned)src2));
  INSTPAT("0000001 ????? ????? 100 ????? 0111011", divw    , R,R(dest) = (int64_t)((int32_t)src1/(int32_t)src2));//printf("divw-src1:%ld\n",(src1));printf("divw-src2:%ld\n",(src2));printf("divw-src1/src2(32):%d\n",((int32_t)src1/(int32_t)src2));printf("divw-src1/src2(64):%ld\n",(int64_t)((int32_t)src1/(int32_t)src2)); R(dest) = (int64_t)((int32_t)src1/(int32_t)src2));   
  INSTPAT("0000001 ????? ????? 101 ????? 0111011", divuw    , R, R(dest) = (int64_t)(signed)((uint32_t)src1/(uint32_t)src2));  
  INSTPAT("0000001 ????? ????? 111 ????? 0111011", remuw    , R, R(dest) = (int64_t)(signed)((uint32_t)src1%(uint32_t)src2));  
  INSTPAT("0000001 ????? ????? 110 ????? 0111011", remw    , R, R(dest) = (int64_t)((int32_t)src1%(int32_t)src2));
  INSTPAT("0000001 ????? ????? 111 ????? 0110011", remu    , R, R(dest) = src1%src2);  
  INSTPAT("0000001 ????? ????? 110 ????? 0110011", rem    , R, R(dest) = ((signed)src1)%((signed)src2));

  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + dest, 8, src2));
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + dest, 1, src2));
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + dest, 4, src2));
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + dest, 2, src2));
  //INSTPAT("0011111 01010 01111 000 11000 01000 11", sd     , S, Mw(src1 + dest, 8,src2)); //              10   15         24
  INSTPAT("0000000 00000 00000 000 00000 11100 11", ecall , N, s->dnpc=isa_raise_intr(1, s->dnpc)); // R(10) is $a0
  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));

  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}
