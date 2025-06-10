/***Um motorista de táxi deseja calcular o rendimento de seu carro na
praça. Sabendo-se que o preço do combustível é de R$ 1,90, escreva
um programa para ler: a marcação do odômetro (Km) no início do dia,
a marcação (Km) no final do dia, o número de litros de combustível gasto
e o valor total (R$) recebido dos passageiros. Faça um algoritmo que
calcule e mostre a média do consumo em Km/L e o lucro líquido do dia.***/
#include <stdio.h>

#define preco 1.9

void main(){
    float inicio,fim,litrosGasto,total;

    printf("Digite a marcação do odômetro (Km) no início do dia: ");
    scanf("%f",&inicio);
    printf("Digite a marcação do odômetro (Km) no fim do dia: ");
    scanf("%f",&fim);
    printf("Digite a qtde de combustível gasta (lts): ");
    scanf("%f",&litrosGasto);
    printf("Digite o valor total recebido pelo taxista (R$): ");
    scanf("%f",&total);
   
    printf("O consumo do carro foi = %2.2f Km/l \n",((fim-inicio)/litrosGasto));
    printf("O lucro do dia foi = R$ %2.2f\n",(total-litrosGasto*preco));
}