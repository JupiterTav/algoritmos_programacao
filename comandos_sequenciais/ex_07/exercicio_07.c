/*Dado um número inteiro, obter seu último algarismo*/

#include <stdio.h>

int main() {

  int number;
  int digit;

  printf("Entre com o numero: ");
  scanf("%d", &number);

  digit = number % 10;

  printf("O ultimo digito do numero eh: %d\n", digit);

  return 0;
}
