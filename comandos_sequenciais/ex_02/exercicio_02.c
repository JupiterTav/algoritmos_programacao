/*Dado o preço de um produto em reais, converter este valor para o equivalente
em dólares. O programa deverá ler o preço e a taxa de conversão para o dólar.*/

/*
    ler (valorReal)
    ler (taxaConversãoDolar)

    valorConvertido <- conversão(valorReal, taxa)

    imprimir valorConvertido
*/

#include <stdio.h>
int main() {

  float valor;
  float taxaConversaoDolar;
  float valorConvertido;

  printf("Insira o valor (em real): ");
  scanf("%f", &valor);

  printf("Por favor, informe a cotação do dolar: ");
  scanf("%f", &taxaConversaoDolar);

  valorConvertido = (valor * taxaConversaoDolar);

  printf("Valor em real: %.2f; Valor da cotação: %.2f; Valor em dolar: %.2f\n",
         valor, taxaConversaoDolar, valorConvertido);

  return 0;
}
