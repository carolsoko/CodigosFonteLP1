/******************************************************************************
Muitos países estão passando a utilizar o sistema métrico. Fazer um algoritmo 
para executar as seguintes conversões: 
Ler uma temperatura em Fahrenheit e imprimir o equivalente em Celsius C=(5F-160)/9. 
Ler uma quantidade de chuva dada em polegadas e imprimir o equivalente em 
milímetros (1” = 25,4 mm).
*******************************************************************************/
#include <stdio.h>


void main(){
float F,C,pol,mil;   
    
    printf("Informe a temperatura (em Fahrenheit): \n");
    scanf("%f",&F);
    C=(5*F-160)/9;
    
    printf("Informe o volume de chuva (em polegadas): \n");
    scanf("%f",&pol);
    mil = pol*25.4;
    
    printf("Temperatura = %.1fºC \nVolume de Chuva = %.1fmm",C,mil);
}
