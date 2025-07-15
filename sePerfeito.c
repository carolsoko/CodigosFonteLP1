/******************************************************************************
Faça um algoritmo que leia um número inteiro e informe se ele é
perfeito. Um número perfeito é um número inteiro que é igual à soma 
de todos os seus divisores excluindo o próprio número. 
Ex: 6 é perfeito, pois 6 = 1 + 2 + 3. obs.: fazer com decrementação
*******************************************************************************/

#include <stdio.h>

void main(){
    int num, soma;
    char resp;
    
    do{
        printf("Informe um número inteiro: ");
        scanf("%d%*c",&num);
        soma = 0;
        for(int i=(num-1); i>=1; i--)
            if(num%i == 0) soma+=i;
        
        if(soma == num) printf("%d é perfeito!\n",num);
        else printf("%d NÃO é perfeito!\n",num);
        
        printf("Deseja informar novo número? S-Sim, N-Não: ");
        scanf("%c",&resp);
    }while(resp!='N');    
}