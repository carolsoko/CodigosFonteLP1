//Faça um algoritmo que leia um número inteiro e informe todos os seus divisores, por fim, informe se ele é primo ou não.

#include <stdio.h>

void main(){
    int num, divisor, qtde;
    char resp = 'S';
    
    while(resp!='N'){
        printf("Informe um número inteiro: ");
        scanf("%d",&num);
        
        divisor = 1;
        qtde=0;
        while(divisor<=num){
            if(num%divisor == 0){
                printf("%d é divisor de %d\n", divisor, num);
                qtde++;
            }    
            divisor++;
        }
        if (qtde==2) printf("O número é primo\n");
        else printf("O número NÃO é primo\n");
        
        getchar();
        
        printf("Deseja verificar outro número? S-SIM / N-NÃO: ");
        scanf("%c",&resp);
    }    
}