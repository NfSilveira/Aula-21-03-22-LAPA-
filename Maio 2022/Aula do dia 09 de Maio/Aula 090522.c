#include <stdio.h>
#include <math.h>


void ifs() {
  int y = 10;
  int x = y < 5 ? 3 : 4;

  printf("X = %d", x);
}

void incrementing() {
  int num = 10, valor = 0;
  valor = 15 + ++num;

  printf("Valor: %d", valor);
}

void tabuada(int num) {
  int result = 0, count;

  for(count = 0; count <= 10; count++) {
    result = count * num;
    printf("\n%d x %d = %d", num, count, result);
  }
}

void draw(int n) {
  int row, col;

  for(row = 0; row < n; row++) {
    printf("\n");
    for(col = 0; col < n; col++) {
      printf("#");
    }
  }
}

char conceito(double nota) {
  char conceito;

  if (nota <= 4.9) {
    conceito = 'D';
  }

  if (nota >= 5.0 && nota <= 6.9) {
    conceito = 'C';
  }

  if (nota >= 7 && nota <= 8.9) {
    conceito = 'B';
  }

  if (nota >= 9 && nota <= 10.0) {
    conceito = 'A';
  }

  printf("%c", conceito);

  return 0;
}

int fatorial(int n) {
  int i, fatorial = 1;
  
  for (i = 1; i <= n; ++i) {
    fatorial *= i;
    }
  printf("%d\n", fatorial);

  return 0;
}

double ideal(double altura, char sexo) { 
  double ideal;

  if(sexo == 'M')
  {
  ideal = (72.7 * altura ) - 58;
  printf("%g",ideal);
  }
  else

  if(sexo == 'F')
  {
  ideal=(62.1 * altura) - 44.7;
  printf("%g",ideal);
  }

  return 0;
}

double dist(double x, double y) {
  double dist;

  x = (x * x);
  y = (y * y);
  dist = sqrt(x + y);

  printf("%g", dist);

  return 0;
}

int main(void) {
  dist(1,1);
  
  return 0;
}
