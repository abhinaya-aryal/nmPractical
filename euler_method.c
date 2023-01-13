#include <stdio.h>
#include <math.h>

float fun(float x, float y) {
  float f;

  f = x * y;
  return f;
}

int main() {
  int i, n;
  float x0, y0, xp, h, y;
  printf("\nEnter initial value of x and y : ");
  scanf("%f%f", &x0, &y0);
  printf("\nEnter x at which y is required : ");
  scanf("%f", &xp);
  printf("\nEnter step-size, h : ");
  scanf("%f", &h);
  
  n = (xp - x0) / h;

  for (i = 0; i < n; i++) {
    y = y0 + h * fun(x0, y0);
    x0 = x0 + h;
    y0 = y;
    printf("%f\t%f\n", x0, y);
  }

  printf("\n Value of y at x = %f is %f", x0, y0);
  printf("\n\n\t\t  Abhinaya Aryal\n\n");  
  return 0; 
}
