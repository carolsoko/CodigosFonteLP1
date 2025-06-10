// Faça um algoritmo que leia 20 valores e calcule a média deles.
#include <stdio.h>

void main(){
    float num, media = 0;
    int qtde;
   
    for(qtde=1; qtde<=20; qtde++){
        printf("Digite o %dº valor: ", qtde);
        scanf("%f",&num);
       
        media = media + num;
    }
   
    media = media/(qtde-1);
   
    printf("Média = %.1f",media);
}