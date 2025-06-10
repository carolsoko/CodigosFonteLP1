/******************************************************************************
O coração humano bate em média uma vez por segundo. Desenvolver um algoritmo
para calcular e escrever quantas vezes o coração de uma pessoa baterá se viver
ela viver X anos.
*******************************************************************************/
#include <stdio.h>
#include <math.h>


void main(){
int x, batidas;   
    
    printf("Informe a quantidade de anos que a pessoa viveu: \n");
    scanf("%d",&x);
    
    batidas = 60*60*24*(x*365 + (x/4));
    
    printf("Quantidade de batidas do coração em %d anos = %d",x,batidas);
}
