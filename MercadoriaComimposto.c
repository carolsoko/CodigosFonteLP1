/******************************************************************************
Faça um algoritmo que leia o valor de uma mercadoria e informe o
valor total gasto na compra, adicionando o imposto de acordo com a
região da compra. A região e o valor da mercadoria serão informados
pelo usuário. A seguinte tabela deverá ser considerada para cálculo do
imposto:
Código
1 NORTE 15%
2 NORDESTE 20%
3 SUL 13%
4 SUDESTE 17%
5 CENTRO-OESTE 18%
O valor total será o valor da mercadoria mais X% de imposto sobre o
valor de acordo com a região que ela é comercializada.
*******************************************************************************/

#include <stdio.h>

void main(){
    int codigo;
    float valor, total;
    printf("Informe o valor da mercadoria: \n");
    scanf("%f",&valor);
    printf("Informe o código da região: \n");
    scanf("%d",&codigo);
   
    switch (codigo){
        case 1: total = valor*1.15;
                printf("Região Norte - 15%% de imposto\n");break;
        case 2: total = valor*1.2;
                printf("Região Nordeste - 20%% de imposto\n");break;
        case 3: total = valor*1.13;
                printf("Região Sul - 13%% de imposto\n");break;
        case 4: total = valor*1.17;
                printf("Região Sudeste - 17%% de imposto\n");break;
        case 5: total = valor*1.18;
                printf("Região Centro-Oeste - 18%% de imposto\n");break;
        default:printf("Código Inválido!\n");
                total = valor;        
    }
   
    printf("O valor total da mercadoria com imposto = R$%.2f",total);
}