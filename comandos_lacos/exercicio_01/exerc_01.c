#include <stdio.h>

int main() {
  int n_terms;
  int count = 0;
  int is_prime = 0;

  printf("Enter n terms you want:");
  scanf("%d", &n_terms);

  for (int i = 1; count < n_terms; i++) {
    is_prime = 0;
    for (int j = 1; j <= i; j++)
      is_prime += (i % j == 0) ? 1 : 0;
    if (is_prime == 2) {
      count++;
      printf("%d\n", i);
    }
  }

  return 0;
}
