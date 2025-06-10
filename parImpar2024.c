/******************************************************************************
Faça um algoritmo que leia um número inteiro e informe se ele é par
ou ímpar.
*******************************************************************************/

#include <stdio.h>

int main(){
    int x;
    printf("Digite um número qualquer: ");
    scanf("%d",&x);
   
    if((x%2)==0)
        printf("PAR\n");
    else
        printf("ÍMPAR\n");
   
   
    ((x%2)==0)? printf("PAR\n"):printf("ÍMPAR\n");
   
    return 0;
}