/*Este desafio foi feito por Luis de Moura e Nicolas Freitas Silveira.
Esperamos que gostem!*/

#include <stdio.h>
#define TAM 100

int dist[5][5] = {0, 106, 79, 90, 98,
                  106, 0, 187, 79, 98,
                  79, 187, 0, 153, 171,
                  90, 79, 153, 0, 147,
                  98, 98, 171, 147, 0};


int CalcDist(int itinerario[], int dist[5][5]) {
  int distTotal = 0;
  int i, j;
  
    for (i = 0, j = 0; itinerario[j + 1] > (-1); i++) {
      distTotal += dist[itinerario[j]][itinerario[j + 1]];
      j++;
      i = 0;
  }
  return distTotal;
}

double CalcCost(double usage, double fuel, int distTotal) {
  double cost = 0;

  cost = (distTotal / usage) * fuel;
  
  return cost;
}

void CalcCities() {
  int itinerario[TAM];
  int breakpoint = 0, i = 0, distTotal;
  double usage = 0, fuel = 0;
  float price = 0;

  printf("Informe o itinerário desejado:\n");
  printf("\nDigite 0 para São Paulo\n");
  printf("Digite 1 para Campinas\n");
  printf("Digite 2 para Santos\n");
  printf("Digite 3 para Bragança Paulista\n");
  printf("Digite 4 para Sorocaba\n");
  printf("Digite -1 para encerrar\n");

  while (breakpoint == 0) {
    scanf("%d", &itinerario[i]);
    if (itinerario[i] < 0) {
      breakpoint = 1;
    }
    i++;
  }

  printf("Consumo de Litros por Km: ");
  scanf("%lf", &usage);
  
  printf("Valor do combustível: ");
  scanf("%lf", &fuel);

  distTotal = CalcDist(itinerario, dist);

  price = CalcCost(usage, fuel, distTotal);

  printf("Distância: %d Km\n", distTotal);
  printf("Custo Combustível: R$ %.2f\n", price);
}

int main(void) { 
  CalcCities();
}
