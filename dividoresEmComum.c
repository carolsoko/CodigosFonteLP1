// Fazer um algoritmo em C que leia dois números inteiros e informe todos os
//divisores em comum
#include <stdio.h>

void main(){

    int num1, num2, i;
    
    printf("Informe dois números inteiros: \n");
    scanf("%d %d",&num1,&num2);
    
    for(i=1; (i<=num1)&&(i<=num2); i++)
        if((num1%i==0) && (num2%i==0))
            printf("%d é divisor de %d e %d\n",i,num1,num2);
    
}