#include <stdio.h>?

int ex1() {
  int numbers[15], i, even = 0;

  for (i = 0; i < 15; i++) {
    printf("Digite um valor: ");
    scanf("%d", &numbers[i]);

    if (numbers[i] % 2 == 0) {
      even++;
    }
  }
  printf("Foram digitados %d valores pares.", even);
  
  return 0;
}

int ex2() {
  int numbers[12];
  int x, y, val1, val2, i, sum;

  for (i = 0; i < 12; i++) {
    printf("Digite um valor para o vetor: ");
    scanf("%d", &numbers[i]);
  }

  printf("\nDigite uma posição de 0 a 11: ");
  scanf("%d", &x);
  val1 = numbers[x];
  
  printf("\nDigite mais uma posição de 0 a 11: ");
  scanf("%d", &y);
  val2 = numbers[y];

  sum = val1 + val2;

  printf("A soma dos valores encontrados nas posições digitadas é %d", sum);

  return 0;
}

int ex3() {
  int num[10];
  int i = 0, pos = 0;

  do{
      if(i % 2 != 0){
        num[pos] = i;
        pos++;
      }
      i++;
    }while(pos < 10);

  i = 0;

  for (i = 0; i < 10; i++) {
    printf("%d ", num[i]);
  }
  
  return 0;
}

int ex4() {
  int A[15];
  int i, maior, menor;

  for (i = 0; i < 15; i++) {
    printf("Digite um número: ");
    scanf("%d", &A[i]);
  }

  maior = A[0];
  menor = A[0];

  for (i = 0; i < 15; i++) {
    if (A[i] > maior) {
      maior = A[i];
    }
    if (A[i] < menor) {
      menor = A[i];
    }
  }
  printf("Maior: %d\n", maior);

  printf("Maior: %d\n", menor);
  
  return 0;
}

void ex5() {
  char str[] = "a vingança nunca e plena, mata a alma e envenena.";
  int i, vog = 0, vogA = 0, vogE = 0, vogI = 0, vogO = 0, vogU = 0;

  for (i = 0; str[i]; i++) {
    switch (str[i]) {
      case 'a': {
        vogA++;
        vog++;
        break;
      }
      case 'e': {
        vogE++;
        vog++;
        break;
      }
      case 'i': {
        vogI++;
        vog++;
        break;
      }
      case 'o': {
        vogO++;
        vog++;
        break;
      }
      case 'u': {
        vogU++;
        vog++;
        break;
      }
    }
  }
  printf("Quantidade de vogais A: %d\n", vogA);
  printf("Quantidade de vogais E: %d\n", vogE);
  printf("Quantidade de vogais I: %d\n", vogI);
  printf("Quantidade de vogais O: %d\n", vogO);
  printf("Quantidade de vogais U: %d\n", vogU);
  printf("Total de vogais: %d", vog);
}

int main(void) {
  ex2();
}
