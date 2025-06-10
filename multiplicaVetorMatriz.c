/** Faça um programa que lê um vetor de 3 elementos e uma matriz de 3 x 3 elementos. Em seguida, o programa deve fazer a multiplicação do vetor pelas colunas da matriz.**/

#include <stdio.h>

void main() {
    int vetor[3];
    int matriz[3][3];
   
    printf("Informe os valores do vetor:\n");
    for(int i=0;i<=2;i++){
        printf("Vetor[%d] = ",i);
        scanf("%d",&vetor[i]);
    }
   
    printf("Informe os valores da matriz:\n");
    for(int i=0;i<=2;i++)
        for(int j=0;j<=2;j++){
            printf("Matriz[%d][%d] = ",i,j);
            scanf("%d",&matriz[i][j]);
        }    
   
    for(int i=0;i<=2;i++)
        for(int j=0;j<=2;j++)
            matriz[i][j] = matriz[i][j]*vetor[j];
       
    printf("\nElementos da matriz resultante = \n");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }    
}