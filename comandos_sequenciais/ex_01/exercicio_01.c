/*1.Ler as coordenadas de dois pontos no plano cartesiano e imprimir a distância
entre estes dois pontos.*/
/*Wesley Tavares*/

#include <math.h>
#include <stdio.h>

int main() {

  float x1, y1;
  float x2, y2;

  float distancia;

  printf("Digite x1: ");
  scanf("%f", &x1);
  printf("Digite y1: ");
  scanf("%f", &y1);

  printf("Digite x2: ");
  scanf("%f", &x2);
  printf("Digite y2: ");
  scanf("%f", &y2);

  distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

  printf("A distância é: %f\n", distancia);

  return 0;
}
