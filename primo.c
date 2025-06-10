// Faça um algoritmo que leia um número inteiro e informe se ele é primo. OBS.: Todo número primo é divisível apenas por 1 e ele mesmo.

#include <stdio.h>

void main(){
    int x, divisor, qtde;
    char resp;
   
    do{
        printf("Informe um número inteiro: ");
        scanf("%d%*c",&x);
       
        qtde=0;
        for(divisor = x; divisor > 0; divisor--){
            if(x%divisor == 0){
                printf("Divisor = %d\n",divisor);
                qtde++;
            }    
        }
        if(qtde==2) printf("Número primo!\n");
        else printf("Número não é primo!\n");
       
        printf("Deseja repetir operação? S-Sim e N-Não\n ");
        scanf("%c",&resp);
    }while(resp=='S');    
}