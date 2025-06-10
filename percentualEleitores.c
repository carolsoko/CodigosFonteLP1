/*********************
Escreva um algoritmo para ler o número total de eleitores de um município,
o número de votos brancos, nulos e válidos. Calcular e escrever o percentual
que cada um representa em relação ao total de eleitores.
**********************/
#include <stdio.h>

void main(){
    int total;
    printf("Informe a quantidade total de eleitores: ");
    scanf("%d",&total);
   
    int brancos;
    printf("Informe a quantidade de votos brancos: ");
    scanf("%d",&brancos);
   
    int validos;
    printf("Informe a quantidade de votos válidos: ");
    scanf("%d",&validos);
   
    int nulos = total - brancos - validos;
   
    float p_brancos = brancos*100/total;
    float p_nulos = nulos*100/total;
    float p_validos = validos*100/total;
   
    printf("Percentual de votos Válidos = %.1f%%, Percentual de votos Brancos = %.1f%%, Percentual de votos Nulos = %.1f%%", p_validos,p_brancos,p_nulos);
}