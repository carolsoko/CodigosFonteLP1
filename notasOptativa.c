/******************************************************************************
Faça um algoritmo que leia duas notas regulares e uma nota optativa
(caso o aluno não tenha nota optativa, digitar -1) e informe a média
das duas maiores notas, de acordo com as notas fornecidas.
*******************************************************************************/

#include <stdio.h>

void main(){
    float n1,n2,op,media;
    printf("Digite as duas notas do aluno: \n");
    scanf("%f %f",&n1,&n2);
    printf("Digite a notas optativa (-1 caso não tenha): \n");
    scanf("%f",&op);
   
    if(op!=-1){
        if((n1>n2) && (op>n2)) media = (n1+op)/2;
        else if ((n2>n1) && (op>n1)) media = (n2+op)/2;
        else if ((n2>op) && (n1>op)) media = (n2+n1)/2;
    }else media = (n2+n1)/2;
   
    printf("A média das duas maiores notas = %.2f",media);
}