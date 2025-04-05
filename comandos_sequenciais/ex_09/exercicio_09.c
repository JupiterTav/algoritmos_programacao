/*Dado um número inteiro que representa um número binário
de cinco dígitos, determinar seu equivalente decimal.*/

#include <math.h>
#include <stdio.h>

int main() {

  int binary_number;
  int decimal_number = 0;

  printf("Entre com o numero binario (5 digitos): ");
  scanf("%d", &binary_number);

  for (int i = 0; i < 5; i++) {
    decimal_number += (binary_number % 10) * pow(2, i);
    binary_number /= 10;
  }

  printf("O numero escrito em decimal eh %d\n", decimal_number);

  return 0;
}
