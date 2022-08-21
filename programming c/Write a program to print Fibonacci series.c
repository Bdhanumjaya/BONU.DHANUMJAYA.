#include <stdio.h>
int main() {

  int i, n,a=0,b=1;
  int nt= a + b;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d, %d, ", a, b);
  for (i = 3; i <= n; ++i) {
    printf("%d, ", nt);
    a= b;
    b= nt;
    nt= a + b;
  }

  return 0;
}
