/** Faça um programa que leia uma matriz de 3 x 3, usando um comando FOR, multiplique cada elemento por 5 e imprima o resultado.
**/

#include <stdio.h>

void main() {
    int matriz[3][3];
   
    printf("Informe os valores da matriz:\n");
    for(int i=0;i<=2;i++)
        for(int j=0;j<=2;j++){
            printf("Matriz[%d][%d] = ",i,j);
            scanf("%d",&matriz[i][j]);
        }    
   
    for(int i=0;i<=2;i++)
        for(int j=0;j<=2;j++)
            matriz[i][j] = matriz[i][j]*5;
       
    printf("\nElementos da matriz resultante = \n");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }    
}