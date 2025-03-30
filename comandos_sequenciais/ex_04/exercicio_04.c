/* [Algoritmos - A. I. Orth] Escrever um algoritmo que lê o código da peça 1, o
número de peças 1, o valor unitário da peça 1, o código da peça 2, o número de
peças 2, o valor unitário da peça 2 e a percentagem de IPI a ser acrescentado e
calcula o valor total a ser pago.*/

#include <stdio.h>

int main() {

  float code_p1, code_p2;
  float value_p1, value_p2;
  float quant_p1, quant_p2;
  float ipi;

  float total, total_ipi;

  printf("Insira o código da peca 1: ");
  scanf("%f", &code_p1);

  printf("Insira o numero de pecas 1: ");
  scanf("%f", &quant_p1);

  printf("Insira o valor unitario da peca 1: ");
  scanf("%f", &value_p1);

  printf("Insira o código da peca 2: ");
  scanf("%f", &code_p2);

  printf("Insira o numero de pecas 2: ");
  scanf("%f", &quant_p2);

  printf("Insira o valor unitario da peca 2: ");
  scanf("%f", &value_p2);

  printf("Insira a percentagem do IPI: ");
  scanf("%f", &ipi);

  total = (quant_p1 * value_p1) + (quant_p2 * value_p2);

  total_ipi = total + (total * (ipi / 100));

  printf("O total é %.2f. Sendo %.2f pecas do tipo 1 com valor de %.2f e %.2f "
         "pecas do "
         "tipo 2 com valor de %.2f \n",
         total_ipi, quant_p1, value_p1, quant_p2, value_p2);
  return 0;
}
