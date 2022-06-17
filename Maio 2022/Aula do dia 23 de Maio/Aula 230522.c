#include <stdio.h>

void ex1() {
  int board[8][8] = {0,1,0,1,0,1,0,1,
                      1,0,1,0,1,0,1,0,
                      0,1,0,1,0,1,0,1,
                      1,0,1,0,1,0,1,0,
                      0,1,0,1,0,1,0,1,
                      1,0,1,0,1,0,1,0,
                      0,1,0,1,0,1,0,1,
                      1,0,1,0,1,0,1,0};

  for (int row = 0; row < 8; row++) {
    printf("\n");
    for (int col = 0; col < 8; col++) {
      printf(" %d ", board[row][col]);
    }
  }
}

void ex2() {
  char board[8][8] = {'T','C','B','R','D','B','C','T',
                      'P','P','P','P','P','P','P','P',
                      ' ',' ',' ',' ',' ',' ',' ',' ',
                      ' ',' ',' ',' ',' ',' ',' ',' ',
                      ' ',' ',' ',' ',' ',' ',' ',' ',
                      ' ',' ',' ',' ',' ',' ',' ',' ',
                      'p','p','p','p','p','p','p','p',
                      't','c','b','d','r','b','c','t'};

  for (int row = 0; row < 8; row++) {
    printf("\n");
    for (int col = 0; col < 8; col++) {
      printf(" %d ", board[row][col]);
    }
  }
}

int main(void) {
  ex2();
}
