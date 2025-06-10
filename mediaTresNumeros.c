/******************************************************************************
Faça um algoritmo que leia três números quaisquer e informe a média deles
*******************************************************************************/
#include <stdio.h>

void main()
{
    float n1,n2,n3;
    printf("Digite três números quaisquer: ");
    scanf("%f %f %f",&n1, &n2, &n3);
   
    float media = (n1+n2+n3)/3;
    printf("Média dos números = %.2f", media);
}