#include <stdio.h>

int main() {
  float x[10], f[10], y, l, sum = 0.0;
  int n, i, j;

  printf("\nInput number of data : \n");
  scanf("%d", &n);
  printf("\nInput data points x(i), & f(i) : \n");

  for (i = 0; i < n; i++) {
    printf("\nx[%d] = ", i);
    scanf("%f", &x[i]);
    printf("\nf[%d] = ", i);
    scanf("%f", &f[i]);
  }
  
  printf("\n Functional Value: ");
  scanf("%f", &y);

  for (i = 0; i < n; i++) {
    l = 1;
    
    for (j = 0; j < n; j++) {
      if (j != i) {
        l = l * (y - x[j]) / (x[i] - x[j]);
      }
    }

    sum = sum + l * f[i];
  }
  
  printf("\n Value at %f = %f\n", y, sum);
  printf("\n\n\t\t  Abhinaya Aryal\n\n\n");

  return 0;
}
