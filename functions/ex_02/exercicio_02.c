/*Escreva uma função que calcule o n-ésimo termo da série de Fibonacci. A série de Fibonacci é
a seguinte:
0 1 1 2 3 5 8 13 21 34 ...
ou seja: - o primeiro termo vale zero;
- o segundo termo vale 1;
- ti vale (ti-1 + ti-2), para i ≥ 3.
Escreva um programa que utilize esta função para calcular o termo solicitado por um usuário.*/
#include <stdio.h>
unsigned long fibonacci(int);
int main(){
   int termo;
   unsigned long result = 0;
   printf("Informe o termo: ");
   scanf("%d", &termo);
   result += fibonacci(termo);
   printf("%ld", result);
};

unsigned long fibonacci(int i){
   if(i == 1)
      return 0;
   if (i == 2) 
      return 1;
   else
      return fibonacci(i-1) + fibonacci(i-2);
};
