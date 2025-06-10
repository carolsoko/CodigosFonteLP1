// Fazer um algoritmo em C para exibir os X primeiros múltiplos simultâneos de dois números dados.
#include <stdio.h>

void main(){
    int num1, num2, qtde=0, X, i;
    
    printf("Informe os dois números inteiros desejados: ");
    scanf("%d %d",&num1,&num2);
    
    printf("Informe quantos múltiplos você deseja mostrar: ");
    scanf("%d",&X);
    
    for(i=1;;i++){
        
        if((i%num1==0)&&(i%num2==0)){
            qtde++;
            printf("Múltiplo de %d e %d = %d\n",num1,num2,i);
        }    
        if(qtde == X) break;
    }
}