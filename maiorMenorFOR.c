//Faça um algoritmo que leia 50 valores, encontre e mostre o maior e o menor deles.

#include <stdio.h>

void main(){
    int i,num, maior, menor;
    
    for(i=1;i<=10;i++){
        printf("Digite o %dº número: ",i);
        scanf("%d",&num);
        
        if(i==0){
            maior = num;
            menor = num;
        }
        
        if (maior < num) maior = num;
        if (menor > num) menor = num;
    }
    printf("Menor = %d e Maior = %d",menor,maior);
}