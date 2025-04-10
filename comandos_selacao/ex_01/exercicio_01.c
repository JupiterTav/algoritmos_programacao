/*Escreva um programa que informe se existe estoque para atender um pedido feito
a uma fábrica. O programa deverá receber como entradas o número de itens em
estoque e o número de itens a serem fornecidos, informando como saída o estoque
atualizado ou uma mensagem indicando não haver itens suficientes em estoque para
atender ao pedido*/

#include <stdio.h>
int main() {
  int estoque, pedido;

  printf("Entre com o numero de itens em estoque: ");
  scanf("%d", &estoque);
  printf("Entre com o numero de itens pedidos: ");
  scanf("%d", &pedido);

  if (estoque >= pedido)
    printf("O pedido foi bem realizado e o estoque ficou em %d\n",
           estoque - pedido);
  else
    printf("Nao ha itens em estoque o suficiente\n");

  return 0;
}
