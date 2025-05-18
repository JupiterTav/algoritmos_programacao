/*Fazer um programa em C que determine se as coordenadas de um ponto (x,y), lidas via
teclado, pertencem à área hachuriada delimitada pelas funções f1(x) e f2(x), fornecidas na
figura abaixo. O programa principal deverá ler estes dois valores e chamar uma função
denominada verifica, até a ocorrência de um par de coordenadas lidas (x,y) que sejam maiores
que 100. A função verifica deverá retornar o valor 1 ou 0, indicando se as coordenadas
fornecidas pertencem à área hachuriada (valor de retorno 1) ou se não pertencem a esta área
(valor 0). No programa principal, baseado nestes valores de retorno, deverá ser impressa a
mensagem "interior" - quando o ponto estiver dentro, ou "exterior" - quando estiver fora. A
função verifica deverá, ainda, no seu interior, imprimir os valores calculados para as funções
f1 e f2.*/
#include <stdio.h>

int verifica(float, float);
float f1(float);
float f2(float);

int main(){
   float x = 0, y =0 ;
   while(x < 100 && y < 100){
      printf("insira o valor do par ordenado (x,y): ");
      scanf("%f %f", &x, &y);
      if(verifica(x, y))
         printf("interior\n");
      else 
         printf("exterior\n");
   }; 
   return 0;
};
int verifica(float par_x, float par_y){
   float valor_f1 = f1(par_x);
   float valor_f2 = f2(par_x);
 
   printf("O valor de f1: %f", valor_f1);
   printf(" O valor de f2: %f ", valor_f2);
   if(par_y >= valor_f2 && par_y <= valor_f1 || par_y <=valor_f2 && par_y >= valor_f1)
      return 1;
   else 
      return 0;
};

float f1(float x){
   return 3*x;
}
float f2(float x){
   return x/3;
}
