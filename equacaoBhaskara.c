/******************************************************************************
Faça um algoritmo que calcula o delta e as duas raízes de uma equação de segundo grau
a partir da leitura dos coeficientes a, b e c da fórmula de Bháskara, 
delta = b ∗ b − 4 ∗ a ∗ c;
x1 = (−b − sqrt(delta))/(2 ∗ a); 
x2 = (−b + sqrt(delta))/(2 ∗ a);
*******************************************************************************/
#include <stdio.h>
#include <math.h>


void main(){
float a,b,c, delta, x1, x2;    
    
    printf("Informe os três coeficientes (a,b e c) da equação: \n");
    scanf("%f %f %f",&a,&b,&c);
    
    delta = pow(b,2) - 4*a*c;
    x1 = (-b - sqrt(delta))/(2*a); 
    x2 = (-b + sqrt(delta))/(2*a);
    
    printf("Delta = %.2f, Raiz 1 = %.2f e Raiz 2 = %.2f",delta,x1,x2);
}