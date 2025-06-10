/** 4.	Sabendo-se que um número perfeito é aquele cuja multiplicação de seus divisores, 
exceto ele mesmo, é igual ao próprio número (ex: 6 = 3*2*1), faça um algoritmo que 
leia um número inteiro qualquer e informe se ele é perfeito. (valor: 2,0pts)
**/
#include <stdio.h>

void main(){
    int n, divisor, resp, x=1;
    
    do{
        printf("Informe um número inteiro: ");
        scanf("%d",&n);
        
        for(divisor=1;divisor<n;divisor++)
            if(n%divisor==0) x=x*divisor;
        
        if(x == n) printf("%d é perfeito!\n",n);
        else printf("%d não é perfeito!\n",n);
        
        printf("Deseja informar novo número? 1-Sim 2-Não\n");
        scanf("%d",&resp);
    }while(resp==1);
}