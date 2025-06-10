//Faça um algoritmo em C que lê uma matriz 4X4, imprime a matriz e informa a posição (linha e coluna) do maior elemento da matriz
#include <stdio.h>
void main() {
    int matriz[4][4], i, j, maiori, maiorj, maior;
    
    for(i=0;i<=3;i++)
        for(j=0;j<=3;j++){
            printf("Digite o elemento [%d][%d] da matriz:", i, j);
            scanf("%d",&matriz[i][j]);
        }
    
    maior = matriz[0][0];
    maiori = maiorj = 0;
    
    for(i=0;i<=3;i++)
        for(j=0;j<=3;j++)
            if(matriz[i][j]>maior){
                maior=matriz[i][j];
                maiori = i;
                maiorj = j;
            }
            
        
    for(i=0;i<=3;i++){
        for(j=0;j<=3;j++)
            printf("%d ",matriz[i][j]);
        printf("\n");    
    }
    
    printf("O maior elemento  é %d e está na posição [%d][%d]\n",maior, maiori,maiorj);
}