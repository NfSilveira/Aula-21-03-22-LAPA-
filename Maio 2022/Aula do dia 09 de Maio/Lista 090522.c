#include <stdio.h>
#include <math.h>

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

  return conceito;
}

int fatorial(int n) {
  int i, fatorial = 1;
  
  for (i = 2; i <= n; ++i) {
    fatorial *= i;
    }

  return fatorial;
}

double ideal(double altura, char sexo) { 
  double ideal;

  if(sexo == 'M')
  {
  ideal = (72.7 * altura ) - 58;
  }
  else

  if(sexo == 'F')
  {
  ideal=(62.1 * altura) - 44.7;
  }

  return ideal;
}

double dist(double x, double y) {
  double dist;

  x = (x * x);
  y = (y * y);
  dist = sqrt(x + y);

  return dist;
}

int main(void) {
  conceito(2.5);
  
  return 0;
}
