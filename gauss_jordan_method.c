#include <stdio.h>

int main() {
  int i, j, k, n;
  float A[20][20], r, x[10];
  printf("\nEnter the size of matrix : ");
  scanf("%d", &n);
  printf("\nEnter the elements of augmented matrix row-wise : \n");

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n+1; j++) {
      printf("A[%d][%d] : ", i, j);
      scanf("%f", &A[i][j]);
    }
  }

  // finding diaognal matrix
  for (j = 1; j <= n; j++) {
    for (i = 1; i <= n; i++) {
      if(i != j) {
        r = A[i][j] / A[j][j];
        for (k = 1; k <= n + 1; k++) {
          A[i][k] = A[i][k] - r * A[j][k];
        }
      }
    }
  }

  printf("\nThe solution is: \n");
  for (i = 1; i <= n; i++) {
    x[i] = A[i][n+1] / A[i][i];
    printf("\nx%d = %f", i, x[i]);
  }
  printf("\n\n\t\t  Abhinaya Aryal\n\n");
  return 0;
}
