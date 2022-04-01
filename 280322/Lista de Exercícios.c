#include <stdio.h>
#include <stdlib.h>


void ex1() {
  int Valor, ValorAnt;
  
  printf("1) Digite um valor: ");
  scanf("%d", &Valor);

  ValorAnt = Valor - 1;

  printf("O antecessor do valor digitado é: %d\n\n", ValorAnt);
}

void ex2() {
  int base, altura, area;

printf("2) Digite o valor da base: ");
scanf("%d",&base);
  
printf("Digite o valor da altura: ");
scanf("%d",&altura);

area = base * altura;

printf("Área do retângulo: %d\n\n", area);
}

void ex3() {
  double cotdolar, real, convert;

  printf("3) Digite a cotação atual do dólar: ");
  scanf("%lf", &cotdolar);

  printf("Digite o valor em reais a ser convertido: ");
  scanf("%lf", &real);

  convert = real / cotdolar;

  printf("O valor convertido em dólares é : %g\n\n", convert);
}

void ex4() {
  int anos, meses, dias, idade;

  printf("4) Digite sua idade no formato Anos, Meses e Dias(Ex: 30 11 25): ");
  scanf("%d %d %d", &anos, &meses, &dias);

  idade = (anos * 365) + (meses * 30) + dias;

  printf("Sua idade em dias é igual a: %d\n\n", idade);
}

void ex5() {
  double Celsius, Fahren;

  printf("5) Digite a temperatura em Graus Celsius: ");
  scanf("%lf", &Celsius);

  Fahren = ((9 * Celsius + 160) / 5);
  
  printf("A temperatura inserida, convertida para Graus Fahrenheit, é igual a: %g\n\n", Fahren);
}

void ex6() {
  int DysWrkd;
  float HrWage, Slry, Taxes, LiqSal;

  printf("6) Digite a quantidade de dias trabalhados: ");
  scanf("%d", &DysWrkd);
  printf("Digite o valor da hora de trabalho: ");
  scanf("%f", &HrWage);

  Slry = ((HrWage * 6) * DysWrkd);

  Taxes = (Slry * 0.08);

  LiqSal = Slry - Taxes;

  printf("Seu salário líquido é igual a R$%.2f, com o imposto de renda igual a R$%.2f\n\n", LiqSal, Taxes);
    
}

void ex7() {
  int CustoFab;
  float CustoFinal;

  printf("7) Digite o custo de fábrica do carro: ");
  scanf("%d", &CustoFab);

  CustoFinal = CustoFab +(CustoFab * 0.28) + (CustoFab * 0.45);

  printf("O custo final do carro é igual a R$%.2f\n\n", CustoFinal);
}

void ex8() {
  double Valor, ValDesc, Parcela, ComiVista, ComiParc;

  printf("8) Digite o valor da sua compra: ");
  scanf("%lf", &Valor);

  ValDesc = Valor - (Valor * 0.10);
  Parcela = Valor / 3;
  ComiVista = ValDesc * 0.05;
  ComiParc = Valor * 0.05;

  printf("O valor total da sua compra é R$%g\n", ValDesc);
  printf("Ao parcelar em 3 vezes sem juros, o valor de cada parcela é R$%g\n", Parcela);

  printf("A comissão do vendedor na venda a vista é R$%g\n", ComiVista);
  printf("A comissão do vendedor na venda parcelada é R$%g\n\n", ComiParc);
}

void ex9() {
  float bet1, bet2, bet3, Totalbet, prize, p1, p2, p3, award1, award2, award3;
  
  printf("9) Prêmio do sorteio: ");
  scanf("%f", &prize);
  printf("Investimento do primeiro apostador: ");
  scanf("%f", &bet1);
  printf("Investimento do segundo apostador: ");
  scanf("%f", &bet2);
  printf("Investimento do terceiro apostador: ");
  scanf("%f", &bet3);

  Totalbet = bet1 + bet2 + bet3;
  award1 = (prize * bet1) / Totalbet;
  award2 = (prize * bet2) / Totalbet;
  award3 = (prize * bet3) / Totalbet;

  printf("O primeiro apostador recebe R$%.2f\n\n", award1);
  printf("O segundo apostador recebe R$%.2f\n\n", award2);
  printf("O terceiro apostador recebe R$%.2f\n\n", award3);
}

void ex10() {
  int h, m, s, dur, secdur, secdurT, resto, hrsF, minsF, secsF;

  printf("10) Digite a hora inicial do experimento, no formato Horas, Minutos e Segundos(Ex.: 10:00:00): ");
  scanf("%d:%d:%d", &h, &m, &s);
  
dur = (h * 3600) + (m * 60) + s;

  printf("Digite a duração do experimento, em segundos: ");
  scanf("%d", &secdur);

  secdurT = dur + secdur;

  hrsF = secdurT / 3600;
  resto = secdurT % 3600;
  minsF = resto / 60;
  secsF = resto % 60;

  printf("O experimento terminará às: %d:%d:%d", hrsF, minsF, secsF);
}

void main() {
  ex1();
  ex2();
  ex3();
  ex4();
  ex5();
  ex6();
  ex7();
  ex9();
  ex10();
}
