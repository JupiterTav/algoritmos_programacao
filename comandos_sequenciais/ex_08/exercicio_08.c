/*Dado um número inteiro de 3 algarismos, inverter a ordem
de seus algarismos. Os 3 algarismos do número dado são diferentes de zero*/
#include <stdio.h>

int main() {

  int number;
  int inversed_number = 0;
  printf("Entre com um numero de 3 algarismos: ");
  scanf("%d", &number);

  if (number != 0) {
    inversed_number = (number % 10) * 100;
    inversed_number += ((number / 10) % 10) * 10;
    inversed_number += (number / 100) % 10;

    printf("%d\n", inversed_number);
  }

  else {
    printf("O numero nao pode ser nulo");
  }

  return 0;
}
