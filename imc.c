/******************************************************************************
Faça um algoritmo que leia o peso e a altura de uma pessoa, calcule o seu IMC
e informe:    IMC = peso / pow(altura,2)
        "OBESO", caso IMC seja maior ou igual a 24,9
        "DESNUTRIDO", caso IMC seja menor ou igual a 18,4
        "NORMAL", caso IMC esteja entre 18,4 e 24,9
*******************************************************************************/
#include <stdio.h>
#include <math.h>

void main(){
float peso,alt,IMC;
    
    printf("Informe o peso e a altura: \n");
    scanf("%f %f",&peso,&alt);
    
    IMC = peso/pow(alt,2);
    
    if (IMC >= 24.9) printf("OBESO");
    else if (IMC <= 18.4) printf("DESNUTRIDO");
    else printf("NORMAL");
}
