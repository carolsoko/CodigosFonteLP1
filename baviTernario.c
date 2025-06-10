//Faça um algoritmo que leia a quantidade de gols de um BA x VI e informe o placar
#include <stdio.h>

void main() {
    int ba,vi;
   
    printf("Informe a quantidade de gols do Bahia:");
    scanf("%d",&ba);
   
    printf("Informe a quantidade de gols do Vitória:");
    scanf("%d",&vi);
   
    printf((ba>vi)?"Bahia Ganhou!":((vi>ba)?"Vitória ganhou!":"Empate!"));
}