#include <stdio.h>

void at1() {
  double salario, prestacao, porcSal;
  
  printf("Digite o seu salario: R$");
  scanf("%lf", &salario);

  printf("Digite o valor da prestacao: R$");
  scanf("%lf", &prestacao);

  porcSal = (salario * 0.3);
  
  if (prestacao > porcSal) {
    printf("Emprestimo nao concedido.");
  }

  else {
    printf("Emprestimo concedido.");
  }
}

void at2() {
  double N;

  printf("Digite um numero: ");
  scanf("%lf", &N);

  if (N <= 10) {
    printf("F1");
  }

  else if(N <= 100) {
    printf("F2");
  }

  else {
    printf("F3");
  }
}

void at3() {
  double N1, N2;

  printf("Digite um numero qualquer: ");
  scanf("%lf", &N1);

  printf("Digite outro numero qualquer: ");
  scanf("%lf", &N2);

  if (N1 == N2) {
    printf("Numeros iguais");
  }

  else if (N1 > N2) {
    printf("Primeiro e maior");
  }

  else {
    printf("Segundo e maior");
  }
}

void at4() {
  int TipoComb;
  double litros, PrecAl = 2.90, PrecGas = 3.30, FormAl, FormGas, Desc3, Desc5, Desc4, Desc6, Preco1, Preco2, Preco3, Preco4;

  printf("Informe o tipo de combustivel(1 para alcool, 2 para gasolina): ");
  scanf("%d", &TipoComb );

  printf("Informe a quantidade de litros vendidos: ");
  scanf("%lf", &litros);

  FormAl = litros * 2.90;
  Desc3 = FormAl * 0.03;
  Preco1 = FormAl - Desc3;
  Desc5 = FormAl * 0.05;
  Preco2 = FormAl - Desc5;
  FormGas = litros * 3.30;
  Desc4 = FormGas * 0.04;
  Preco3 = FormGas - Desc4;
  Desc6 = FormGas * 0.06;
  Preco4 = FormGas - Desc6;

  if (TipoComb == 1) {
    if (litros <= 20) {
      printf("O valor a ser pago pelo cliente e: R$%g", Preco1);
    }
    else {
      printf("O valor a ser pago pelo cliente e: R$%g", Preco2);
    }
  }

  if (TipoComb == 2) {
    if (litros <= 20) {
      printf("O valor a ser pago pelo cliente e: R$%g", Preco3);
    }
    else {
      printf("O valor a ser pago pelo cliente e: R$%g", Preco4);
    }
  }
}

void at5() {
  double numconta, saldo, debito, credito, total;

  printf("Digite o numero da conta: ");
  scanf("%lf", &numconta);
  
  printf("Digite o saldo atual: ");
  scanf("%lf", &saldo);
  
  printf("Digite o debito e o credito, respectivamente(debito, credito): ");
  scanf("%lf, %lf", &debito, &credito);
  
  total = saldo - debito + credito;

  if (total >= 0) {
    printf("Saldo Positivo");
  }

  else {
    printf("Saldo Negativo");
  }
}

void at6() {
  int ladoa, ladob, ladoc;

  printf("Digite 3 valores para o triangulo(Ex.: 12, 10, 20): ");
  scanf("%d, %d, %d", &ladoa, &ladob, &ladoc);

  if (ladoa + ladob > ladoc && ladoa + ladoc > ladob && ladob + ladoc > ladoa) {
    printf("Os 3 lados formam um triangulo: ");
  if (ladoa == ladob && ladoa == ladoc)
    printf("Equilatero!\n");
      else if (ladoa == ladob || ladoa == ladoc || ladob == ladoc)
        printf("Isosceles!\n");
    else
        printf("Escaleno!\n");
  }
  else {
    printf("Os 3 lados NAO formam um triangulo!\n");
  }

}

int main(void) {
at6();
}
