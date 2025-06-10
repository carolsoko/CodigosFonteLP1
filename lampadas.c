/**Faça um algoritmo para calcular e imprimir o número de lâmpadas necessárias para 
iluminar um determinado cômodo de uma residência. Dados de entrada: a potência da 
lâmpada utilizada (em watts), as dimensões (largura e comprimento, em metros) do cômodo. 
Considere que a potência necessária é de 18 watts por metro quadrado.***/
#include <stdio.h>

void main(){
   
    float potLampada;
    printf("Informe a potência da lâmpada:\n");
    scanf("%f", &potLampada);
   
    float largura, comprimento;
    printf("Informe a largura e o comprimento do cômodo:\n");
    scanf("%f %f", &largura, &comprimento);
   
    float qtdeLampadas = largura*comprimento*18/potLampada;
    
    printf("A quantidade de lâmpadas necessárias = %.2f",qtdeLampadas);
   
}