//Faça um algoritmo que leia um número inteiro qualquer e informe sua tabuada da multiplicação, soma, divisão e subtração

#include <stdio.h>

void main(){
    int i,num;
    
    printf("Informe um número qualquer: ");
    scanf("%d",&num);
    
    printf("TABUADA DA MULTIPLICAÇÃO\n");
    for(i=0;i<10;i++) printf("%d X %d = %d\n", i,num, i*num);
    
    printf("TABUADA DA SOMA\n");
    for(i=0;i<10;i++) printf("%d + %d = %d\n", i,num, i+num);
    
    printf("TABUADA DA SUBTRAÇÃO\n");
    for(i=0;i<10;i++) printf("%d - %d = %d\n", i,num, i-num);
    
    printf("TABUADA DA DIVISÃO\n");
    for(i=1;i<10;i++) printf("%d / %d = %.3f\n", num, i, (float)num/i);   
        
}