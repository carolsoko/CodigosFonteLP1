/******************************************************************************
Questão 2 - Faça um algoritmo que leia os limites de um intervalo fechado [x,y] 
de números inteiros e mostre todos os números perfeitos contidos no intervalo. 
Um número perfeito é um número inteiro que é igual à soma de todos os seus 
divisores excluindo o próprio número. Ex: 6 é perfeito, pois 6 = 1 + 2 + 3. 
(valor: 1,5pt)
*******************************************************************************/

#include <stdio.h>

int main(){
    int perfeito, x, y;
    
    printf("Informe as medidas do intervalo [x,y]: ");
    scanf("%d %d",&x, &y);
    
    for(int i = x; i<=y; i++){
       perfeito = 0; 
       for(int j = 1; j < i; j++)
            if(i%j == 0)
                perfeito += j;
       if (perfeito == i) printf("%d é perfeito!\n",i);            
    }
}