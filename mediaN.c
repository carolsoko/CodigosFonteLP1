// Faça um algoritmo que leia N números e calcule a média aritmética dos valores lidos, a quantidade de valores positivos, a quantidade de valores negativos e o percentual de valores negativos e positivos. A cada número lido, deve-se perguntar se deseja continuar a digitar ou se deseja parar. Quando o usuário optar por parar, informar o que foi pedido.

#include <stdio.h>

void main(){
    int qtde=0, qtdePos=0,qtdeNeg=0;
    float media, soma=0, num, percNeg, percPos;
    char resp;
   
    do{
        printf("Informe um número qualquer: ");
        scanf("%f%*c",&num);
        qtde++;
        soma = soma+num;
        if(num >= 0) qtdePos++;
        else qtdeNeg++;
       
        printf("Deseja repetir operação? S-Sim e N-Não\n ");
        scanf("%c",&resp);
    }while(resp=='S');
   
    media = soma/(float)qtde;
    percNeg = ((float)qtdeNeg*100)/(float)qtde;
    percPos = ((float)qtdePos*100)/(float)qtde;
   
    printf("A qtde total de números = %d\n",qtde);
    printf("A média desses números = %.1f\n",media);
    printf("A qtde total de números positivos = %d\n",qtdePos);
    printf("O percentual de números positivos = %.1f\n",percPos);
    printf("A qtde total de números negativos = %d\n",qtdeNeg);
    printf("O percentual de números negativos = %.1f\n",percNeg);
}