// Faça um algoritmo que leia os limites de um intervalo de números inteiros [x,y] e informe todos os múltiplos de 3 contidos no intervalo

#include <stdio.h>

void main(){
    int x,y,aux;
    char resp;
   
    do{
        printf("Informe dois números inteiros: ");
        scanf("%d %d%*c",&x,&y);
       
        if(y<x){
            aux = x;
            x = y;
            y = aux;
        }
       
        for(aux=x; aux<=y; aux++)
            if(aux%3 == 0)
                printf("Múltiplo de 3 = %d\n",aux);
       
        printf("Deseja repetir operação? S-Sim e N-Não\n ");
        scanf("%c",&resp);
    }while(resp=='S');    
}