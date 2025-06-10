//Faça um algoritmo que leia uma quantidade desconhecida de números e conte quantos deles estão nos seguintes intervalos: [0,25], [26,50], [51,75] e [76,100]. A entrada de dados deve terminar quando for lido um número negativo.

#include <stdio.h>

void main(){
    int num=0, qtde0=0, qtde26=0, qtde51=0, qtde76=0;
    
    while(num>=0){
        printf("Informe um número qualquer: ");
        scanf("%d",&num);
    
        if ((num>=0) && (num<=25)) qtde0++;
        else if ((num>=26) && (num<=50)) qtde26++;
        else if ((num>=51) && (num<=75)) qtde51++;
        else if ((num>=76) && (num<=100)) qtde76++;
    }
    
    printf("Foram digitados: \n");
    printf("%d números do intervalo [0,25]\n",qtde0);
    printf("%d números do intervalo [26,50]\n",qtde26);
    printf("%d números do intervalo [51,75]\n",qtde51);
    printf("%d números do intervalo [76,100]\n",qtde76);
}