/**Dada a série de Fibonacci:
Fib = 1, 1, 2, 3, 5, 8, 13, 21, 34 ...
    na qual podemos descobrir o valor do elemento seguinte, pois o elemento sempre é a soma dos dois elementos anteriores da série, logo: 
    Fib(n) = Fib(n-1) + Fib(n-2)
    
    Leia um número n, que representa a quantidade de parcelas da série de Fibonacci desejada e informe todas as parcelas da série**/
#include <stdio.h>

void main(){
    int resp,n,fib,fib1,fib2;
    
    do{
        printf("Informe quantas parcelas de Fibonacci deseja mostrar:");
        scanf("%d",&n);
        fib1=fib2=1;
        
        if(n>=1) printf("Fib = 1,");
        if(n>=2) printf("1,");
        
        for(int i=3; i<=n;i++){
            fib=fib1+fib2;
            fib2=fib1;
            fib1=fib;
            if(i==n) printf("%d", fib);
            else printf("%d,", fib);
        }
        printf("\n");
        
        printf("Deseja continuar? 1-Sim, 2-Não\n");
        scanf("%d",&resp);
    }while(resp==1);
}