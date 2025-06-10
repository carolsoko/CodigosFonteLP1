#include <stdio.h>

void main(){
    
    char nome[30], endereco[50];
    int idade;
    
    printf("Informe o seu nome: ");
    scanf("%s",nome);
    printf("Informe a sua idade: ");
    scanf("%d",&idade);
    printf("Informe o seu endereço: ");
    scanf("%s",endereco);
    
    printf("%s tem %d anos e mora em %s",nome,idade,endereço);
}