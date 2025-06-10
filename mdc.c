// Faça um algoritmo que leia dois números inteiros e informe o MDC desses números. OBS.: O Máximo Divisor Comum (MDC) corresponde ao maior número inteiro capaz de dividir dois ou mais números inteiros simultaneamente.

#include <stdio.h>

void main(){
    int x,y;
    char resp;
   
    do{
        printf("Informe dois números inteiros: ");
        scanf("%d %d%*c",&x,&y);
       
        for(int aux = x; aux > 0; aux--)
            if((x % aux==0) && (y % aux==0)){
                printf("MDC(%d,%d) = %d\n",x,y,aux);
                break;
            }
       
        printf("Deseja repetir operação? S-Sim e N-Não\n ");
        scanf("%c",&resp);
    }while(resp=='S');    
}