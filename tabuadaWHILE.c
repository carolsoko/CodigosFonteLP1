//Faça um algoritmo que leia um número inteiro qualquer e informe sua tabuada da multiplicação, soma, divisão e subtração USANDO WHILE

#include <stdio.h>

void main(){
    int i,num;
    
    printf("Informe um número qualquer: ");
    scanf("%d",&num);
    
    printf("TABUADA DA MULTIPLICAÇÃO\n");
    i=0;
    while(i<10){ 
        printf("%d X %d = %d\n", i,num, i*num);
        i++;
    }
    
    printf("TABUADA DA SOMA\n");
    i=0;
    while(i<10){ 
        printf("%d + %d = %d\n", i,num, i+num);
        i++;
    }
    
    printf("TABUADA DA SUBTRAÇÃO\n");
    i=0;
    while(i<10){ 
        printf("%d - %d = %d\n", i,num, i-num);
        i++;
    }
    
    printf("TABUADA DA DIVISÃO\n");
    i=0;
    while(i<10){ 
        printf("%d / %d = %.3f\n", num, i, (float)num/i);   
        i++;
    }
}