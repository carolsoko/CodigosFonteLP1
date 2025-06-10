// Faça um algoritmo que implemente uma calculadora matemática com as 4 operações básicas (+, -, *, /): 
//O algoritmo deverá ler: (número real) (operador) (número real) e deverá exibir o resultado. ex: o algoritmo vai ler: 5 + 7
//Deverá mostrar como resultado: 5 + 7 = 12

#include <stdio.h>

void main(){
    float n1, n2;
    char op;
    
    printf("Digite a operação desejada:\n");
    scanf("%f\n%c\n%f",&n1,&op,&n2);
    
    switch (op){
        case '+': printf("%.2f + %.2f = %.2f",n1,n2,n1+n2); break;
        case '*': printf("%.2f X %.2f = %.2f",n1,n2,n1*n2); break;
        case '-': printf("%.2f - %.2f = %.2f",n1,n2,n1-n2); break;
        case '/': if(n2!=0) printf("%.2f / %.2f = %.2f",n1,n2,n1/n2); 
                  else printf("Não é permitido divisão por zero!"); break;
        default: printf("Operação Inválida!");          
    }
}