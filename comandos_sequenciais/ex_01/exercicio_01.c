/*1.Ler as coordenadas de dois pontos no plano cartesiano e imprimir a distância
entre estes dois pontos.*/
/*Wesley Tavares*/

#include <math.h>
#include <stdio.h>

int main() {

  int x1, y1;
  int x2, y2;

  int distancia;

  printf("Digite x1: ");
  scanf("%d", &x1);
  printf("Digite y1: ");
  scanf("%d", &y1);

  printf("Digite x2: ");
  scanf("%d", &x2);
  printf("Digite y2: ");
  scanf("%d", &y2);

  distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

  printf("A distância é: %d\n", distancia);

  return 0;
}
