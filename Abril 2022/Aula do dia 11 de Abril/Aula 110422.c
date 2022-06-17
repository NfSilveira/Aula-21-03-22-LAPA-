#include <stdio.h>

void ex1() {
  double num = 0;
  int count;

  printf("Digite um numero inteiro: ");
  scanf("%lf", &num);

  do {
    num = num / 2;
    count++;
  }
    while (num >= 1);

  printf("O resultado da ultima divisao foi %g e foi(foram) realizada(s) %d divisao(oes).", num, count);
}

void ex2() {
  double vel, velconv;
  int option;

  do {
    printf("==== Conversor de Velocidades ====\n");
    printf("= 1 - Converter de Km/h para m/s =\n");
    printf("= 2 - Converter de m/s para Km/h =\n");
    printf("= 0 - Sair                       =\n");
    printf("==================================\n");
    printf("Digite uma opcao valida: ");
    scanf("%d", &option);

    if (option == 1) {
      printf("Digite a velocidade em Km/h: ");
      scanf("%lf", &vel);
      velconv = vel / 3.6;
      printf("A velocidade digitada, convertida em m/s é igual a %gm/s.", velconv);
      }

    else if (option == 2) {
      printf("Digite a velocidade em m/s: ");
      scanf("%lf", &vel);
      velconv = vel * 3.6;
      printf("A velocidade digitada, convertida em Km/h é igual a %gKm/h.", velconv);
    }
    
    else if (option == 0) {
      printf("Conversoes finalizadas.");
    }

    else {
      printf("Opcao invalida, tente novamente!\n");
    }
  }
  while (option != 0);
}

void ex3() {
  int num = 0, sum = 0, amo = 0, max = 0, min = 0;
  int ev_sum = 0, ev_amo = 0, odd_sum = 0, odd_amo = 0;
  double avg = 0, ev_avg = 0, odd_avg = 0;

  do {
    printf("\nDigite um numero ou 0 para sair: ");
    scanf("%d", &num);

    if (num != 0) {
      sum = sum + num;
      
      //verifica maior e menor
      if(amo == 0) {
        max = min = num;
      }
      
      if (num > max) {
        max = num;
      }
      
      if(num < min) {
        min = num;
      }
    }

    amo = amo + 1;

    //verifica se o número é par
    if (num % 2 == 0) {
      ev_sum = ev_sum + num;
      ev_amo = ev_amo + 1;
    }
    //se não for par...
    else {
      odd_sum = odd_sum + num;
      odd_amo = odd_amo + 1;
    }  
  }while(num != 0);

  avg = sum / amo;
  ev_avg = ev_sum / ev_amo;
  odd_avg = odd_sum / odd_amo;

  printf("\na) Soma = %d", sum);
  printf("\nb) Qtd = %d", amo);
  printf("\nc) Media = %g", avg);
  printf("\nd) Maior = %d", max);
  printf("\ne) Menor = %d", min);
  printf("\na) Media dos pares = %g", ev_avg);
  printf("\na) Media dos impares = %g", odd_avg);
}

int main(void) {
  ex3();
}
