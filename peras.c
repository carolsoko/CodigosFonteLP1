/***Faça um algoritmo que leia a quantidade de pêras compradas em
uma mercearia e o valor da unidade. O algoritmo deve informar o total
a ser pago pelo cliente.***/
#include <stdio.h>

void main(){
    int qtde;
    float valor, total;

    printf("Digite a quantidade de pêras compradas: ");
    scanf("%d",&qtde);
    printf("Digite o valor da unidade da pêra (R$): ");
    scanf("%f",&valor);
   
    printf("\e[H\e[2J"); //esse comando limpa a tela
   
    total = valor*qtde;
    printf("Você deve pagar R$ %2.2f pelas %d unidades de pêra.",total,qtde);
}