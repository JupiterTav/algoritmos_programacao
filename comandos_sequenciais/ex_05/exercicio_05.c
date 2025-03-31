/* [Algoritmos - A. I. Orth] O custo ao consumidor, de um carro novo, é a soma
do custo de fábrica com a percentagem do distribuidor e dos impostos (aplicados
ao custo de fábrica). Supondo que a percentagem do distribuidor seja de 28% e os
impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro e
escrever o custo ao consumidor.*/

#include <stdio.h>

#define DEALER_TRIBUTE 0.28
#define TRIBUTES 0.45

int main() {

  float production_cost;
  float final_cost;

  printf("Insira o custo de fabrica: ");
  scanf("%f", &production_cost);

  final_cost = production_cost + (production_cost * DEALER_TRIBUTE) +
               (production_cost * TRIBUTES);

  printf("O preço final ao consumidor eh: %f \n", final_cost);

  return 0;
}
