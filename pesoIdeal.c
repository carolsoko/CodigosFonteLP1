// 3. Faça um algoritmo que calcule o peso ideal de uma pessoa a partir de seus dados de altura e sexo (f - feminino e m - masculino)
// peso ideal dos homens = (72,7*altura) - 58
// peso ideal das mulheres = (62,1*altura) - 44,7
#include <stdio.h>

void main(){
    float altura,pesoIdeal;
    char sexo;
   
    printf("Informe o sexo: 'f'=feminino e 'm'=masculino:\n");
    scanf("%c",&sexo);
    printf("Informe a altura:\n");
    scanf("%f",&altura);
   
    if (sexo = 'f') pesoIdeal = (62.1*altura)-44.7;
    else pesoIdeal = (72.7*altura)-58;
   
    printf("Peso ideal = %.1f",pesoIdeal);
}