//Faça um algoritmo que leia os limites de um intervalo de inteiros [x,y] e informe todos os números primos contidos no intervalo

#include <stdio.h>

void main(){
    int num, divisor, qtde, x, y;
    char resp = 'S';
    
    while(resp!='N'){
        printf("Informe o intervalo [x,y]: ");
        scanf("%d %d",&x,&y);
        
        for(num = x; num<=y; num++){
            for(divisor=1, qtde=0; divisor<=num; divisor++)
                if(num%divisor == 0) qtde++;
            
            if (qtde==2) printf("Primo = %d\n", num);
        }
        
        getchar();
        printf("Deseja verificar outro intervalo? S-SIM / N-NÃO: ");
        scanf("%c",&resp);
    }    
}