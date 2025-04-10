#include <stdio.h>

int naturalnumbers(int n);
int main() {

  int n = 0;
  printf("Insira o numero de elementos: ");
  scanf("%d", &n);

  naturalnumbers(n);
  return 0;
}

int naturalnumbers(int n) {
  if (n <= 0)
    return 0;
  else {
    printf("%d ", n);
    naturalnumbers(n - 1);
  }
  return 0;
}
