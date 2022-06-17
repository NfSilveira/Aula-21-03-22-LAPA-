#include <stdio.h>

void At1() {
    printf("1)\n");
      printf("--------------\n");
      printf("Total  = 100%\n");
      printf("IVA  = 17%\n");
      printf("IRS  = 15%\n");
      printf("--------------\n");
      printf("Líquido  = 68%\n\n");
  }

void At2() {
    printf("2)\n");
      printf("|              BINGO              |\n");
      printf("|---------------------------------|\n");
      printf("|  01  |  04  |  07  |  10  |  13 |\n");
      printf("|---------------------------------|\n");
      printf("|  16  |  19  |  22  |  25  |  28 |\n");
      printf("|---------------------------------|\n");
      printf("|  31  |  34  | FREE |  40  |  43 |\n");
      printf("|---------------------------------|\n");
      printf("|  46  |  49  |  52  |  55  |  58 |\n");
      printf("|---------------------------------|\n");
      printf("|  61  |  64  |  67  |  70  |  73 |\n\n");
  }

void At3() {
    printf("3)\n");
      printf("[01] [02] [03] [04] [05] [06] [07] [08] [09] [10]\n");
      printf("[11] [12] [13] [14] [15] [16] [17] [18] [19] [20]\n");
      printf("[21] [22] [23] [24] [25] [26] [27] [28] [29] [30]\n");
      printf("[31] [32] [33] [34] [35] [36] [37] [38] [39] [40]\n");
      printf("[41] [42] [43] [44] [45] [46] [47] [48] [49] [50]\n");
      printf("[51] [52] [53] [54] [55] [56] [57] [58] [59] [60]\n\n");
  }

void At4() {
    printf("4)\n");
      printf("********** ENGENHARIA **********\n");
      printf("*     1. Civil                 *\n");
      printf("*     2. Controle e Automacao  *\n");
      printf("*     3. Producao              *\n");
      printf("*     4. Computacao            *\n");
      printf("********************************\n");
      printf("Selecione uma engenharia: 3\n");
      printf("LEAN.\n\n");
  }

void At5() {
    printf("5)\n");
      printf("a.   *\n");
      printf("    ***\n");
      printf("   *****\n");
      printf("    /|\\  \n\n");
        printf("b.       *\n");
        printf("         **\n");
        printf("         ***\n");
        printf("   **********\n");
        printf("         ***\n");
        printf("         **\n");
        printf("         *\n\n");
          printf("c.  *\n");
          printf("    **\n");
          printf("    ***\n");
          printf("    ****\n");
          printf("    *****\n");
  }

int main(void) {
  At1();
  At2();
  At3();
  At4();
  At5();
}
