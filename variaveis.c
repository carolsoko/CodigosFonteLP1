#include <stdio.h>

void main(){
    
    int quantidade=10;
    double pi=3.14159265;
    float valor=1.25;
    char letra = 'A';
    
    printf("Foram compradas %d maçãs a R$ %5.2f cada", quantidade,valor);
    printf("%c constante pi = %5.4lf",letra,pi);
    
}