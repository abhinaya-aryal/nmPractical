#include <stdio.h>
#include <math.h>

float g(float x) {
  float y;

  y = 2.0 - x * x;
  return y;
}

int main() {
  float x0, x, error, E = 0.0001;

  printf("\nInput initial guess:\n");
  scanf("%f", &x0);

  while (1) {
    x = g(x0);
    error = (x - x0) / x; 

    if (fabs(error) < E) {
      printf("\nRoot =  %f", x0);
      printf("\n\n\t\t  Abhinaya Aryal\n\n\n");
      break;
    }

    x0 = x;
  }

  return 0;
}
