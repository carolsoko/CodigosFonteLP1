/******************************************************************************
Faça um algoritmo que leia três notas, calcule a média e informe: 
        "APROVADO", caso a média seja maior ou igual a $7,0$
        "REPROVADO", caso a média seja menor ou igual a $2,5$
        "PROVA FINAL", caso a média esteja entre $2,5$ e $7,0$
*******************************************************************************/
#include <stdio.h>

void main(){
float n1,n2,n3,media;
    
    printf("Informe as três notas: \n");
    scanf("%f %f %f",&n1,&n2,&n3);
    
    media = (n1+n2+n3)/3;
    
    if (media >= 7) printf("APROVADO");
    else if (media <= 2.5) printf("REPROVADO");
    else printf("PROVA FINAL");
}