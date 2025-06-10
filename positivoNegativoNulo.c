/******************************************************************************
Faça um algoritmo que leia um número e informe se ele é positivo, negativo ou nulo
*******************************************************************************/
#include <stdio.h>
#include <math.h>

void main(){
float x;
   
    printf("Informe um número qualquer: \n");
    scanf("%f",&x);
   
    if (x > 0){
        printf("Positivo");
    }else if (x < 0){
        printf("Negativo");
    }else{
        printf("Nulo");
    }
}