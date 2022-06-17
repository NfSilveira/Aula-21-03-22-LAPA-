#include <stdio.h>

void ex1() {
  int idade = 0, pessoas = 0, id0 = 0, id19 = 0, id41 = 0, id65 = 0, somaId = 0,
      imcAP = 0, imcPN = 0, imcSP = 0, imcOb1 = 0, imcOb2 = 0, imcOb3 = 0;
  double altura, peso, somaAlt = 0, somaPes = 0;

  do {
    // Coleta dos dados
    printf("Idade: ");
    scanf("%d", &idade);

  if (idade > 0) {
    printf("Altura: ");
    scanf("%lf", &altura);
    printf("Peso: ");
    scanf("%lf", &peso);
    pessoas++;

    somaId = somaId + idade;
    somaAlt = somaAlt + altura;
    somaPes = somaPes + peso;
    // Exibição de Faixa Etária

    if (idade < 19) {
      id0++;
    } else if (idade >= 19 && idade < 41) {
      id19++;
    } else if (idade >= 41 && idade < 66) {
      id41++;
    } else {
      id65++;
    }
    // Cálculo e Separação do IMC
    double IMC = peso / (altura * altura);

    if (IMC < 18.5) {
      imcAP++;
    } else if (IMC >= 18.5 && IMC < 25) {
      imcPN++;
    } else if (IMC >= 25 && IMC < 30) {
      imcSP++;
    } else if (IMC >= 30 && IMC < 35) {
      imcOb1++;
    } else if (IMC >= 35 && IMC < 40) {
      imcOb2++;
    } else {
      imcOb3++;
    }
  }
}
    while (idade > 0);

  // Cálculo e exibição das médias
  double medId = somaId / pessoas;
  double medAlt = somaAlt / pessoas;
  double medPes = somaPes / pessoas;

  if (idade < 0) {
    printf("a) Quantidade de pessoas lidas: %d\n", pessoas);
    printf("b) Media de idade: %g anos\n", medId);
    printf("c) Media de altura: %gm\n", medAlt);
    printf("d) Media de peso: %gkg\n\n", medPes);
    printf("e) Faixa Etaria:\n");
    printf("0 a 18 anos: %d\n", id0);
      printf("19 a 40 anos: %d\n", id19);
      printf("41 a 65 anos: %d\n", id41);
      printf("Acima de 65 anos: %d\n\n", id65);
    printf("f) IMC:\n");
      printf("Abaixo do Peso(IMC menor que 18,5): %d\n", imcAP);
      printf("Peso Normal(IMC de 18,5 a 24,9): %d\n", imcPN);
      printf("Sobrepeso(IMC de 25 a 29,9): %d\n", imcSP);
      printf("Obesidade Grau I(IMC de 30 a 34,9): %d\n", imcOb1);
      printf("Obesidade Grau II(IMC de 35 a 39,9): %d\n", imcOb2);
      printf("Obesidade Grau III(IMC maior ou igual a 40): %d\n", imcOb3);
  }
}

void ex2() {
  int casoChefe = 0, casoEddie = 0, casoLou = 0, casoHomer = 0, ocor = 0, grau = 0, DP = 0, grau1 = 0, grau2 = 0, grau3 = 0;
  double total = 0, porDP = (DP / total) * 100, por1 = (grau1 / total) * 100, por2 = (grau2 / total) * 100, por3 = (grau3 / total) * 100;

  do {
  printf("Digite o número da ocorrência(1 para Direção Perigosa, 2 para Barulho, 3 para Bebedeira, 4 para Homer, 0 para finalizar): ");
  scanf("%d", &ocor);

  if (ocor == 0) {
  printf("Registro Finalizado.\n");

  printf("Ocorrências do Chefe Clancy: %d\n", casoChefe);
  printf("Ocorrências do Policial Eddie: %d\n", casoEddie);
  printf("Ocorrências do Policial Lou: %d\n", casoLou);
  printf("Ocorrências sobre o Homer: %d\n\n", casoHomer);
    
  printf("Percentual de ocorrências de Direção Perigosa sobre o total de ocorrências: %g%\n", (DP / total) * 100);
  printf("Percentual de ocorrências de gravidade nível 1: %g%\n", (grau1 / total) * 100);
  printf("Percentual de ocorrências de gravidade nível 2: %g%\n", (grau2 / total) * 100);
  printf("Percentual de ocorrências de gravidade nível 3: %g%\n\n", (grau3 / total) * 100);
  break;
  }

  if (ocor > 0 && ocor < 4) {
    printf("Digite a gravidade da ocorrência(1 para Baixo, 2 para Médio, 3 para Alto): ");
    scanf("%d", &grau);
    total++;
  }
    else if (ocor == 4) {
  printf("Tinha que ser o Homer...\n");
    casoHomer++;
    total++;
    grau3++;
  }
    
    if (ocor == 1) {
      DP++;
    }

  if (grau == 1) {
    casoChefe++;
    grau1++;
  }
  else if (grau == 2) {
    casoEddie++;
    grau2++;
  }
  else if (grau == 3) {
    casoLou++;
    grau3++;
  }

  printf("Ocorrências do Chefe Clancy: %d\n", casoChefe);
  printf("Ocorrências do Policial Eddie: %d\n", casoEddie);
  printf("Ocorrências do Policial Lou: %d\n", casoLou);
  printf("Ocorrências sobre o Homer: %d\n\n", casoHomer);

  printf("Percentual de ocorrências de Direção Perigosa sobre o total de ocorrências: %g%\n", (DP / total) * 100);
  printf("Percentual de ocorrências de gravidade nível 1: %g%\n", (grau1 / total) * 100);
  printf("Percentual de ocorrências de gravidade nível 2: %g%\n", (grau2 / total) * 100);
  printf("Percentual de ocorrências de gravidade nível 3: %g%\n\n", (grau3 / total) * 100);
  }
  while (ocor > 0);  
}

int main(void) {
  ex2();
}
