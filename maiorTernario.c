// Faça um algoritmo que leia dois números quaisquer e informe qual é o maior usando operador ternário
#include <stdio.h>

void main() {
    float maior, n1,n2;
    
    printf("Informe dois números quaisquer:");
    scanf("%f %f",&n1,&n2);
    
    maior = (n1>n2)?n1:n2;
    
    printf("Maior = %.1f",maior);
}