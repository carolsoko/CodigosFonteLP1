/**Escreva um programa para ler o raio de um cı́rculo, calcular e
escrever a sua área.***/
#include <stdio.h>

void main(){
   
    float raio, perimetro, area;
   
    printf("Digite o valor do raio:\n");
    scanf("%f", &raio);
   
    area = 3.1415 * raio * raio;
    perimetro = 2 * 3.1415 * raio;
   
    printf("O círculo de raio = %2.2f possui área = %2.2f e perímetro = %2.2f",raio,area,perimetro);
   
}