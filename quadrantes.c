/******************************************************************************
Faça um algoritmo que leia as coordenadas de um ponto cartesiano
(x, y) e informe em qual quadrante o ponto está, ou se ele está na
origem (0, 0), ou em um dos eixos (eixo x ou eixo y).
*******************************************************************************/

#include <stdio.h>

void main(){
    float x,y;
    printf("Digite as coordenadas do ponto (x,y): \n");
    scanf("%f %f",&x,&y);
   
    if((x>0) && (y>0)) printf("1º Quadrante");
    else if((x<0) && (y>0)) printf("2º Quadrante");
    else if((x<0) && (y<0)) printf("3º Quadrante");
    else if((x>0) && (y<0)) printf("4º Quadrante");
    else if((x==0) && (y!=0)) printf("Eixo Y");
    else if((x!=0) && (y==0)) printf("Eixo X");
    else printf("Origem");
   
}