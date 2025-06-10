/** Faça um programa para armazenar um livro de receitas e:
    
    (a) Crie um vetor de 5 receitas, que deve ter nome (máximo 25 letras), quantidade de ingredientes e os ingredientes, que podem ser no máximo 10.
    (b) Para cada receita, leia seu nome e a quantidade de ingredientes. Então crie e leia o vetor de ingredientes, sendo que cada ingrediente contém nome e quantidade (em gramas).
    (c) Permita que o usuário procure a receita por nome, mostrando seus ingredientes e quantidade, caso a encontre. Se não encontrar, informe ao usuário que não encontrou **/

#include <stdio.h>
#include <string.h>

typedef struct tipoIngrediente{
    char nome[25];
    float qtde;
} ingrediente;

typedef struct livroReceitas{
    char nome[25];
    int qtdeIngredientes;
    ingrediente lista[10];
} receita;

void main(){
    receita Vreceitas[5];
    int resp, i, j;
    char nome[25];
    
    do{
        printf("------------------------------------\n");
        printf("---------LIVRO DE RECEITAS----------\n");
        printf("------------------------------------\n");
        printf("Escolha uma das opções abaixo:\n");
        printf("1 - Preencher o livro de receitas\n");
        printf("2 - Buscar uma receita pelo nome\n");
        printf("3 - Mostrar conteúdo do livro\n");
        printf("4 - Sair\n");
        scanf("%d",&resp);
        getchar();
    
        switch (resp){
            case 1:
                for(i=0; i<5; i++){
                    printf("Informe o nome da %dª receita: ",i+1);
                    scanf("%s",Vreceitas[i].nome);
                    getchar();
                    printf("Informe a quantidade de ingredientes da %dª receita: ",i+1);
                    scanf("%d",&Vreceitas[i].qtdeIngredientes);
                    while(Vreceitas[i].qtdeIngredientes > 10){
                        printf("Informe uma quantidade menor que 10!:\n");
                        scanf("%d",&Vreceitas[i].qtdeIngredientes);
                    }
                    getchar();
                    for(j = 0; j<Vreceitas[i].qtdeIngredientes;j++){
                        printf("Informe o nome do %dº ingrediente da %dª receita: ",j+1,i+1);
                        scanf("%s",Vreceitas[i].lista[j].nome);
                        getchar();
                        printf("Informe a quantidade do %dº ingrediente da %dª receita: ",j+1,i+1);
                        scanf("%f",&Vreceitas[i].lista[j].qtde);
                    }
                }
                break;
            case 2:
                printf("Informe o nome da receita: que você deseja buscar: ");
                scanf("%s",nome);
                getchar();
                for(i=0; i<5; i++)
                    if(strcmp(Vreceitas[i].nome,nome)==0){
                        printf("Quantidade de ingredientes = %d\n Lista:\n",Vreceitas[i].qtdeIngredientes);
                        for(j=0;j<Vreceitas[i].qtdeIngredientes; j++){
                            printf("%s, %.1fg\n",Vreceitas[i].lista[j].nome,Vreceitas[i].lista[j].qtde);
                        }
                    }
                break;
            case 3:
                for(i=0; i<5; i++){
                    printf("Nome da receita = %s\n",Vreceitas[i].nome);
                    printf("Quantidade de ingredientes = %d\n Lista:\n",Vreceitas[i].qtdeIngredientes);
                        for(j=0;j<Vreceitas[i].qtdeIngredientes; j++){
                            printf("%s, %.1fg\n",Vreceitas[i].lista[j].nome,Vreceitas[i].lista[j].qtde);
                        }
                    }
                break;
            case 4:
                printf("Saindo do programa...");
                break;
            default:
                printf("Opção inválida! Tente de novo!");
                break;
        }
    }while(resp!=4);    
}