/******************************************************************************
Faça um algoritmo recursivo que encontre qual o maior valor de um vetor
*******************************************************************************/

#include <stdio.h>
#define tam 100

void insercaoVetor(int x, int qtde, int vetor[]) {
    vetor[qtde - 1] = x;
}

int buscaVetor(int x, int qtde, int vetor[]) {
    if(qtde==0) return -1;
    if(vetor[qtde-1]==x) return (qtde-1);
    return buscaVetor(x,qtde-1,vetor);
   
    /**for(int i = qtde-1; i>=0; i--)
        if(vetor[i] == x)
            return i;
    return -1;**/
}

void imprimirVetor(int qtde, int vetor[]) {
    printf("Vetor: ");
    for(int i=0; i<qtde; i++)
        printf("%d, ",vetor[i]);
    printf("\n");
}


int excluirElemento(int x, int qtde, int vetor[]){
    int i=0;
   
    while(i<qtde){
        if(vetor[i]==x){
            for(int j=i; j<(qtde-1); j++)
                vetor[j]=vetor[j+1];
            printf("Exclusão realizada com sucesso!\n");    
            return qtde-1;    
        }
        i++;
    }
    printf("Elemento não encontrado!\n");
    return qtde;
}


int encontrarMaior(int qtde, int maior, int vetor[]){
    if(qtde==0) return maior;
    if(vetor[qtde-1]>vetor[maior]) return encontrarMaior(qtde-1, qtde-1,vetor);
    else return encontrarMaior(qtde-1, maior,vetor);
}

int main() {
    int vetor[tam];
    int cont = 0, resp, x, achou;

    do {
        printf("Digite a opção desejada:\n");
        printf("1 - Inserir elemento no vetor\n");
        printf("2 - Buscar elemento no vetor\n");
        printf("3 - Excluir elemento no vetor\n");
        printf("4 - Mostrar o vetor\n");
        printf("5 - Encontrar Maior\n");
        printf("6 - Sair\n");
        scanf("%d",&resp);

        switch(resp) {
        case 1:
            printf("Informe o elemento a ser inserido: ");
            scanf("%d",&x);
            cont++;
            insercaoVetor(x,cont,vetor);
            imprimirVetor(cont,vetor);
            break;
        case 2:
            printf("Informe o elemento a ser buscado: ");
            scanf("%d",&x);
            achou = buscaVetor(x,cont,vetor);
            if(achou >= 0) printf("A posição do elemento %d é %d.\n",x,achou);
            else printf("Elemento não encontrado!\n");
            break;
        case 3:
            printf("Informe o elemento a ser excluído: ");
            scanf("%d",&x);
            cont = excluirElemento(x,cont,vetor);
            imprimirVetor(cont,vetor);
            break;
        case 4:
            imprimirVetor(cont,vetor);
            break;
        case 5:
            achou = encontrarMaior(cont, cont-1, vetor);
            printf("A posição do maior elemento %d é %d.\n",vetor[achou],achou);
            break;
        case 6:
            printf("Saindo do programa...");
            break;
        default:
            printf("Opção inválida!");
            break;
        }
    } while(resp != 6);
}