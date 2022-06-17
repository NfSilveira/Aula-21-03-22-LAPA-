#include <stdio.h>

void ex1() {
  int num1, num2;
  
  printf("Digite N1: ");
  scanf("%d", &num1);
  printf("Digite N2: ");
  scanf("%d", &num2);
  printf("Soma=%d sub=%d mult=%d div=%d", (num1 + num2), (num1 - num2), (num1 * num2), (num1 / num2));

}

void ex2() {
  int num1, num2, num3, maior, menor, meio;

  printf("a: ");
  scanf("%d", &num1);
  printf("b: ");
  scanf("%d", &num2);
  printf("c: ");
  scanf("%d", &num3);

  maior = num1;
  if (num2 > maior) {
    maior = num2;
  }
  if (num3 > maior) {
    maior = num3;
  }

  menor = num1;
  if (num2 < menor) {
    menor = num2;
  }
  if (num3 < menor) {
    menor = num3;
  }

  meio = num1;
  if (num2 != maior && num2 != menor) {
    meio = num2;
  }
  if (num3 != maior && num3 != menor) {
    meio = num3;
  }

  printf("%d %d %d\n", menor, meio, maior);
}

void ex3() {
  int i = 0, numero = 0, maior = 0, menor = 1000;

  while (i < 5) {
  printf("Digite um numero:\n");
  scanf("%d", &numero);
    if (numero > maior) {
      maior = numero;
    }
    if (numero < menor) {
      menor = numero;
    }
    i++;
  }

  printf("%d %d\n", maior, menor);
}

void ex4() {
  int N, i = 3, num1 = 0, num2 = 1, num3;

  num3 = num1 + num2;

  printf("Digite N: ");
  scanf("%d", &N);

  printf("0 1 ");

  
  while (i <= N) {
    num3 = num1 + num2;
    printf("%d ", num3);
    num1 = num2;
    num2 = num3;
    i++;
  }
}

void ex5() {
  double lim = 0, soma = 0, termo = 1, i = 1;

  printf("Digite um limite pequeno, menor do que 1: ");
  scanf("%lf", &lim);

  while (termo >= lim) {
    termo = 1.0 / (i * i);
    soma = soma + termo;
    i++;
  }
  
  printf("Foram somados %g termos\n", i-1);
  printf("Soma = %g\n", soma);
}

int main(void) {
  ex4();
}
