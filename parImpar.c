/******************************************************************************
Faça um algoritmo que leia um número inteiro e informe se ele é par ou ímpar
*******************************************************************************/
#include <stdio.h>

void main(){
int x;
    
    printf("Informe um número inteiro qualquer: \n");
    scanf("%d",&x);
    
    if ((x % 2)==0) printf("Número par");
    else printf("Número ímpar");
}