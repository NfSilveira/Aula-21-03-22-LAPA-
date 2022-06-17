#include <stdio.h>

void ex1() {
int idade, preco0 = 0, preco10 = 10, preco15 = 15, total;
double ing0 = 0, ing10 = 0, ing15 = 0;

  do {
    printf("Idade: ");
    scanf("%d", &idade);
    if (idade >= 0 && idade < 3) {
    printf("Preco=%d\n", preco0);
    ing0++;
    }

    else if (idade >= 3 && idade <= 12) {
    printf("Preco=%d\n", preco10);
    ing10++;
    }

    else if (idade >= 13) {
    printf("Preco=%d\n", preco15);
    ing15++;
    }

      total = 0 + (ing10 * 10) + (ing15 * 15);

      if (idade < 0) {
    printf("Total arrecadado = %d\n", total);
    printf("N 0 a 2 = %g\n", ing0);
    printf("N 3 a 12 = %g\n", ing10);
    printf("N 13 ou mais = %g\n", ing15);
    }
  }
  while (idade >= 0);
}

void ex2() {
  int idade = 0, qtd = 0, soma = 0;
  double media = 0;

  do {
    printf("Idade: ");
    scanf("%d", &idade);

    if (idade >= 0) {
    soma = soma + idade;
    qtd++;
    }
  }
    while (idade >= 0);
    
    media = soma / qtd;

    printf("\nA média de idade é %g", media);
}

void ex3() {
  int n = 0, n170= 0, somamenos = 0, n20 = 0, idade = 0;
  double soma_alt = 0, idademedia = 0.0, alturamedia = 0.0, altura;

  do {
    printf("Idade: ");
    scanf("%d", &idade);

    if (idade > 0) {
    printf("Altura: ");
    scanf("%lf", &altura);
    n++;
    
  if (altura < 1.70) {
    n170++;
    somamenos = somamenos + idade;
    idademedia = somamenos / n170;
    }

  if (idade > 20) {
    n20++;
    soma_alt = soma_alt + altura;
    alturamedia = soma_alt / n20;
    }
  }
}
    while (idade > 0);
  
  printf("A classe tem %d alunos\n", n);

  if (n170 > 0) {
    printf("A idade media dos alunos com menos de 1,70m de altura e' %g\n", idademedia);
  }
  else {
    printf("Nao ha' alunos com menos de 1,70m de altura\n");
  }

  if (n20 > 0) {
    printf("A altura media dos alunos com mais de 20 anos e' %g\n", alturamedia);
  }
  else {
    printf("Nao ha' alunos com mais de 20 anos\n");
  }
}

int main(void) {
  ex3();
}
