/**A distância entre várias cidades é dada pela tabela abaixo (em km):

      1    2     3     4     5
1    00    15    30    05    12
2    15    00    10    17    28
3    30    10    00    03    11
4    05    17    03    00    80
5    12    28    11    80    00

Construa um programa que leia a tabela acima e informe ao usuário a distância entre duas cidades por ele requisitadas, até que ele entre com o código 0 para ambas as cidades;**/
#include <stdio.h>

void main(){
    int distancias[5][5] = {{00,15,30,05,12},
    						{15,00,10,17,28},
    						{30,10,00,03,11},
    						{05,17,03,00,80},
    						{12,28,11,80,00}};
    int c1,c2,i,j;
    
    do{
      printf("Informe as cidades que deseja buscar:");
      scanf("%d %d",&c1,&c2);
      
      if((c1!=0)&&(c2!=0))
          printf("A distância entre as cidades é %d\n",distancias[c1-1][c2-1]);
      
    }while((c1!=0)&&(c2!=0));
}