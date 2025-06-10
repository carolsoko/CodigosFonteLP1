/******************************************************************************
Faça um algoritmo que leia as dimensões de uma sala retangular, largura e comprimento.
Leia as dimensões do azulejo quadrado que será utilizado na reforma desta sala.
Por fim, informe quantos azulejos serão necessários para cobrir todo o chão da sala.
*******************************************************************************/
#include <stdio.h>

int main()
{
    float largura, comprimento;
    printf("Digite a largura e o comprimento da sala (em metros): ");
    scanf("%f %f",&largura, &comprimento);
   
    float ladoAzulejo;
    printf("Digite a medida do lado do azulejo (em metros): ");
    scanf("%f",&ladoAzulejo);
   
    float qtde = (largura*comprimento)/(ladoAzulejo*ladoAzulejo);
   
    printf("Qtde de azulejos = %.0f", qtde+1);
    return 0;
}