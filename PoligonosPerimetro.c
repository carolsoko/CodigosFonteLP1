/******************************************************************************
Questão 1 - Faça um algoritmo que leia a quantidade de lados de 
um polígono regular, e a medida desses lados e informe 
(usar switch):
a) caso seja um triângulo, quadrado, pentágono, hexágono, 
heptágono ou octógono, informar o tipo do polígono e seu perímetro.
b) Caso contrário, informar polígono inválido. (valor: 1,0pt)
*******************************************************************************/

#include <stdio.h>

int main(){
    int lados;
    float medida;
    
    printf("Informe a quantidade de lados do polígono: ");
    scanf("%d",&lados);
    printf("Informe a medida do lado: ");
    scanf("%f",&medida);
    
    
    switch (lados){
        case 3: 
            printf("Polígono é um triângulo com perímetro = %.1f",medida*3.0);
            break;
        case 4: 
            printf("Polígono é um quadrado com perímetro = %.1f",medida*4.0);
            break;
        case 5: 
            printf("Polígono é um pentágono com perímetro = %.1f",medida*5.0);
            break;
        case 6: 
            printf("Polígono é um hexágono com perímetro = %.1f",medida*6.0);
            break; 
        case 7: 
            printf("Polígono é um heptágono com perímetro = %.1f",medida*7.0);
            break;     
        default:
            printf("Polígono Inválido");
            break; 
    }
}