/******************************************************************************
Questão 3 - Uma das maneiras de se conseguir a raiz quadrada de um número é 
subtrair do número os ímpares consecutivos a partir de 1, até que o resultado 
da subtração seja menor ou igual a zero. O número de vezes que se consegue 
fazer a subtração é a raiz quadrada exata (resultado 0) ou aproximada 
(resultado negativo). Faça um algoritmo que calcula a raiz quadrada de um 
número por esse método. (valor: 1,5pts)
*******************************************************************************/

#include <stdio.h>

int main(){
    int raiz, x, resultado;
    
    printf("Informe um número inteiro: ");
    scanf("%d",&x);
    resultado = x;
    raiz = 0;
    
    for(int i = 1; i <= x; i+=2){
        resultado -= i;
        raiz++;
        if (resultado <= 0) break;
    }
    
    if(resultado == 0)
        printf("A raiz quadrada exata de %d é %d",x,raiz);
    else
        printf("A raiz quadrada aproximada de %d é %d",x,raiz);    
}