/*Uma loja mantém o controle de estoques de suas mercadorias, armazenando os seguintes
dados:
• um vetor com o número de itens em estoque de cada mercadoria, correspondendo o índice
do vetor ao código da mercadoria;
• uma matriz com a previsão de venda de suas mercadorias por mês, correspondendo cada
linha da matriz a uma mercadoria (código = índice da linha + 1) e cada coluna associada
ao número correspondente ao mês (12 colunas).
Supondo que a loja apresente 5 diferentes mercadorias, faça um programa que atende a
consultas sobre até que mês determinadas mercadorias apresentam estoque suficiente. O
programa deverá utilizar uma função tipada mes(...), que recebe como parâmetros a matriz, o
vetor e o código da mercadoria a ser pesquisada e devolve ao programa que a acionou o
número do último mês com estoque suficiente. O número de mercadorias pesquisado pelo
programa deverá ficar a critério do usuário do programa.*/

#include <stdio.h>
int mes(int[][12], int[], int);

int main(){
   int codigo;
   char stop_flag = ' ';
   int estoque_mercadorias[5];
   printf("Entre com o estoque das mercadorias:\n");
   for(int i = 0; i < 5; i++){
      printf("%dº: ", i);
      scanf(" %d", &estoque_mercadorias[i]);
   };
   
   int prev_vendas[5][12];
   printf("Entre com a previsão de vendas (produto x mes):\n");
   for(int i = 0; i < 5; i++){
      printf("%dº: ", i);
      for(int j = 0; j < 12; j++)
         scanf(" %d", &prev_vendas[i][j]);
   };
   
   while(stop_flag != 'q'){
      printf("Escolha o produto(a partir do codigo) para verificar a duracao do estoque:\n");
      scanf("%d", &codigo);
      printf("o estoque durara ateh %d\n", mes(prev_vendas, estoque_mercadorias, codigo));
      printf("Deseja continuar? [q para sair]\n");
      scanf(" %c", &stop_flag);
   };
   return 0;
}

int mes(int prev_vendas[][12], int estoq_mercadoria[], int codigo){
   int estoque_produto = estoq_mercadoria[codigo]; 
   int m = 0;
   while(estoque_produto > 0 && m < 12){
      estoque_produto -= prev_vendas[codigo][m];
      m++;
   };
   return m;
};
