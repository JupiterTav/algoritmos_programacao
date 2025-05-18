/*Fazer um programa em C para calcular o cosseno de x, para x variando de 0 até 6.3
(inclusive), de 0.1 em 0.1. O programa deverá imprimir x e o valor correspondente do cosseno.
O cálculo do cosseno deverá ser implementado via função, utilizando a série:
cosseno(x) = − + − + −1 2 4 6 8
2 4 6 8
x x x x
! ! ! !
...
Considerar 30 parcelas para a obtenção de cosseno de x.*/

#include <stdio.h>
#include <math.h>
float calculate_series(float);
unsigned long factorial(int);

int main(){
   for(float x = 0; x <=6.3; x += 0.1){
       printf("O valor da serie para %.2f eh %.2f\n", x, calculate_series(x));
   };
   return 0;
};

float calculate_series(float x){
   int exponent = 2;
   int signal = -1;
   double series = 1;
   for(int i = 0; i < 30; i++){
      series += (pow(x, exponent))/factorial(exponent) * signal;
      exponent += 2;
      signal *= -1;
   };
   return series;
};
unsigned long factorial(int number){
   if(number <= 1)
      return 1;
   else
    return number * factorial(number-1);
};
