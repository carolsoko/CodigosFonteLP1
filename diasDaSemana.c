/******************************************************************************
Faça um algoritmo que leia um número inteiro que indica um
dia da semana e informe o nome desse dia, de acordo com o número
*******************************************************************************/

#include <stdio.h>

void main(){
    int dia;
    printf("Digite o número do dia: ");
    scanf("%d",&dia);
   
    switch (dia){
        case 1: printf("Domingo");
                break;
        case 2: printf("Segunda");
                break;      
        case 3: printf("Terça");
                break;
        case 4: printf("Quarta");
                break;
        case 5: printf("Quinta");
                break;
        case 6: printf("Sexta");
                break;
        case 7: printf("Sábado");
                break;        
        default: printf("Número Inválido!");        
    }
   
}