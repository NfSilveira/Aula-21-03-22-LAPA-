#include <stdio.h>

int findIfExists(int vet[], int num, int max){
  int equal = 0;
  for(int i = 0; i <= max; i++){
    if(num == vet[i]){
      equal = 1;
    }
  }
  return equal;
}

void ex1() {
  int vet[10];
  int i = 0, num = 0;
  
  do {
    printf("Digite um número para a posição %d: ", i);
    scanf("%d", &num);

    if(i == 0){
      vet[i] = num;
    }
    else{
      while(findIfExists(vet,num,i) == 1){
        printf("Esse número já foi digitado.\n");
        printf("Por favor digite outro número para a posição %d: ", i);
        scanf("%d", &num);
      }
      vet[i] = num;
    }
    i++;
  }
    while (i < 10);

  for(int i = 0; i < 10; i++) {
    printf("%d\n", vet[i]);
  }
}

void ex2() {
  int vet[4][4];
  int maior = vet[0][0], posI = 1, posJ = 1;

  for (int i = 0; i < 4; i++) {
    printf("\n");
    for (int j = 0; j < 4; j++) {
      printf("Valor da linha %d, coluna %d: ", (i+1), (j+1));
      scanf("%d", &vet[i][j]);
      if (vet[i][j] > maior) {
                        maior = vet[i][j];
                        posI = i+1;
                        posJ = j+1;
				} 
    }
  }
  for (int i = 0; i < 4; i++) {
    printf("\n");
    for (int j = 0; j < 4; j++) {
      printf(" %d ", vet[i][j]);
    }
  }
  printf("\nO maior número da matriz é %d [linha %d][coluna %d].\n", maior, posI, posJ);
}

void ex3() {
  int matriz[5][5];
  int r, i, j, count;

    for (i = 0; i < 5; i++) {
    printf("\n");
    for (j = 0; j < 5; j++) {
      printf("Valor da linha %d, coluna %d: ", (i+1), (j+1));
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("\nDigite um número a ser buscado dentro da matriz: ");
  scanf("%d", &r);

  for(i = 0; i < 5; i++){
    for(j = 0; j < 5; j++){
      if(matriz[i][j] == r){
        printf("o número %d foi encontrado na posição (%d, %d).\n", r, i, j);
      }
    }
  }
  if (matriz[i][j] != r) {
    printf("\nO número não foi encontrado.\n");
  }
}

int main(void) {
  /*Digite a função equivalente ao número da questão(ex.: ex1() para o exercício 1,)
  ex2() para o segundo, ou ex3() para o terceiro!*/
  ex1();
}
