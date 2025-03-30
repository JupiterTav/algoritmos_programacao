#include <stdio.h>
/*Dados três valores, calcular e imprimir as médias aritmética e harmônica
 * destes valores*/
int main() {
  float nota1, nota2, nota3;

  float media_harm, media_arit;

  printf("Insira a nota 1: ");
  scanf("%f", &nota1);

  printf("Insira a nota 2: ");
  scanf("%f", &nota2);

  printf("Insira a nota 3: ");
  scanf("%f", &nota3);

  media_arit = (nota1 + nota2 + nota3) / 3;
  media_harm = 3 / ((1 / nota1) + (1 / nota2) + (1 / nota3));

  printf("A média aritmética é %.2f e a média harmônica é %.2f.\n", media_arit,
         media_harm);

  return 0;
}
