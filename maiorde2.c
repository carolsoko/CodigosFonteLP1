/******************************************************************************
Faça um algoritmo que leia dois números inteiros e informe qual é o maior
*******************************************************************************/
#include <stdio.h>

void main(){
int x,y;
    
    printf("Informe dois números inteiros quaisquer: \n");
    scanf("%d %d",&x,&y);
    
    if (x > y){
        printf("%d é maior que %d",x,y);
    }
    
    if (y > x){
        printf("%d é maior que %d",y,x);
    }
    
    if (x == y){
        printf("%d é igual a %d",x,y);
    }
}