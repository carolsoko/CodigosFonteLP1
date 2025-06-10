/******************************************************************************
Faça um algoritmo que leia o peso e a altura de uma pessoa, calcule o
seu IMC = peso/(altura ∗ altura) e informe:
• "Obeso", caso IMC >= 24,9
• "Desnutrido", caso IMC <= 18,4
• "Normal", caso 18,4 < IMC < 24,9
*******************************************************************************/

#include <stdio.h>

int main(){
    float peso, altura, IMC;
    printf("Digite o peso da pessoa: ");
    scanf("%f",&peso);
    printf("Digite a altura da pessoa: ");
    scanf("%f",&altura);
   
    IMC = peso/(altura*altura);
   
    if (IMC>=24.9) printf("OBESO");
    else if (IMC <= 18.4) printf("DESNUTRIDO");
    else printf("NORMAL");
   
    return 0;
}