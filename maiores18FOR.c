// Faça um algoritmo em C, que permita ao usuário informar a idade de quantas pessoas ele desejar. Após isso, o algoritmo deverá informar a quantidade de pessoa maiores de 18 anos e a média da idade delas. Usar FOR, depois WHILE e depois DO-WHILE, fazer 3 versões do algoritmo.
#include <stdio.h>

void main() {
    int qtdeP=0, mediaIdade=0, qtde18=0, idade=0;
    float media;
   
    for(;;){
        qtdeP++;
        printf("Informe a idade da %dª pessoa, digite uma idade negativa para sair: ", qtdeP);
        scanf("%d",&idade);
       
        if(idade>=18){
            mediaIdade = mediaIdade + idade;
            qtde18++;
        }else if(idade<0) break;
    }
   
    media = (float)mediaIdade/qtde18;
   
    printf("A quantidade de pessoas maiores de 18 é %d ",qtde18);
    printf("A média das suas idades é %.1f anos",media);
}