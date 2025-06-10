/** 2.	O Fatorial de um número, N!, é igual ao resultado da multiplicação de todos os 
números inteiros positivos menores ou iguais ao número, ou seja, por exemplo: 
4! = 4*3*2*1 = 24. 
Faça um algoritmo que leia um número inteiro qualquer e informe o seu fatorial. 
O algoritmo deve exibir na tela o fatorial no seguinte formato: (valor: 2,0pt)

    8! = 8*7*6*5*4*3*2*1 = 40320, ou seja:
	N! = N*(N-1)*(N-2)*...*2*1 = VALOR DO FATORIAL
**/
#include <stdio.h>

void main(){
    int n,i,fat,resp;
    
    do{
        printf("Informe um número inteiro: ");
        scanf("%d",&n);
        fat=1;
        printf("%d!= ",n);
        for(i=n;i>=1;i--){
            fat=fat*i;
            if(i==1) printf("%d=%d\n",i,fat);
            else printf("%d*",i);
        }
        
        printf("Deseja informar novo número? 1-Sim 2-Não\n");
        scanf("%d",&resp);
    }while(resp==1);
}