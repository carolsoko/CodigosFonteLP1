// Faça um algoritmo em C, que efetue a soma de todos os números ímpares que são múltiplos de três e 
//que se encontram no conjunto dos números de 1 até 500. Fazer com FOR, WHILE e DO-WHILE
#include <stdio.h>

void main(){
    int i=1, soma=0;

    /**while(i<=500){
        if((i%2==1)&&(i%3==0)) soma=soma+i;
        i++;
    }**/    
    
    do{
        if((i%2==1)&&(i%3==0)) soma=soma+i;
        i++;
    }while(i<=500);
    
    printf("O somatório dos números ímpares e múltiplos de 3\n");
    printf("que se encontram no intervalo [1,500] é: %d\n",soma);
}