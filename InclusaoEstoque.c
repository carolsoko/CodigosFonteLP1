/**Faça um programa que simule um controle de estoque de uma loja, onde cada produto, 
representado por meio de um registro, possui um identificador inteiro, nome, quantidade 
e custo unitário. Faça um programa que realize a inclusão de novos produtos no estoque 
e mostre todos os produtos incluídos.**/
#include <stdio.h>

typedef struct Produto{
    int id;
    char nome[30];
    int qtde;
    float custo;
}produto;

void main(){
    produto estoque[100];
    int resp,qtde=0;
    
    do{
        printf("Inclusão de novo produto:\n");
        printf("Informe o id do produto: ");
        scanf("%d%*c",&estoque[qtde].id);
        printf("Informe o nome do produto: ");
        scanf("%s%*c",estoque[qtde].nome);
        printf("Informe a quantidade do produto: ");
        scanf("%d%*c",&estoque[qtde].qtde);
        printf("Informe o custo do produto: ");
        scanf("%f%*c",&estoque[qtde].custo);
        qtde++;
        
        printf("Deseja mostrar a listagem? 1-Sim, 2-Não\n");
        scanf("%d",&resp);
        if(resp==1)
            for(int i=0;i<qtde;i++){
                printf("Id = %d, ",estoque[i].id);
                printf("Nome = %s\n",estoque[i].nome);
            }
        
        printf("Deseja continuar? 1-Sim, 2-Não\n");
        scanf("%d",&resp);
    }while(resp==1);
}