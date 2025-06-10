/**2.Uma grande firma deseja ler os dados de seus funcionários (Matrícula(inteiro), Nome, Data de Nascimento (struct com dia, mês e ano), Data de Admissão (struct com dia, mês e ano), Função), máximo de 100 funcionários, e criar um algoritmo, em Linguagem C, que implemente o menu abaixo e suas funcionalidades (valor: 2,0pts, divididos da forma abaixo): (0,1pt para a estrutura do programa)

a.	Inserir novo funcionário (0,6pts)
b.	Mostrar o funcionário mais recente na empresa (0,3pts)
c.	Mostrar o funcionário mais antigo na empresa (0,3pts)
d.	Remover funcionário pela matrícula (0,6pts)
e.	Sair (0,1pt)
**/
#include <stdio.h>
#include <string.h>

typedef struct Data{
    int dia;
    int mes;
    int ano;
}data;

typedef struct pessoa{
    int matricula;
    char nome[30];
    data nascimento;
    data admissao;
    char funcao[30];
}funcionario;

void main() {
    funcionario lista[100];
    int resp, tamanho=0;
    
    do{
        printf("_______________________________\n");
        printf("Escolha uma das opções do Menu abaixo:\n");
        printf("1- Inserir novo funcionário\n");
        printf("2- Mostrar o funcionário mais recente\n");
        printf("3- Mostrar o funcionário mais antigo\n");
        printf("4- Remover funcionário pela matrícula\n");
        printf("5- Listar todos os funcionários\n");
        printf("6- Sair\n");
        scanf("%d", &resp);
        printf("_______________________________\n");
        
        switch(resp){
            case 1:
                if (tamanho >= 100){
                    printf("Quantidade máxima de funcionários atingida!\n");
                    break;
                }
                printf("Informe os dados do funcionário:\n");
                printf("Matrícula = ");
                scanf("%d%*c", &lista[tamanho].matricula);
                printf("Nome = ");
                scanf("%s%*c", lista[tamanho].nome);
                printf("Data de Nascimento (DD MM AAAA) = ");
                scanf("%d %d %d", &lista[tamanho].nascimento.dia, &lista[tamanho].nascimento.mes, &lista[tamanho].nascimento.ano);
                printf("Data de Admissão (DD MM AAAA) = ");
                scanf("%d %d %d%*c", &lista[tamanho].admissao.dia, &lista[tamanho].admissao.mes, &lista[tamanho].admissao.ano);
                printf("Função = ");
                scanf("%s%*c", lista[tamanho].funcao);
                tamanho++;
                break;
            case 2:
                char nome1[30];
                strcpy(nome1,lista[0].nome);
                data recente;
                recente.dia = lista[0].admissao.dia;
                recente.mes = lista[0].admissao.mes;
                recente.ano = lista[0].admissao.ano;
                
                for(int i=0; i<tamanho; i++){
                    if((lista[i].admissao.ano > recente.ano) || ((lista[i].admissao.ano == recente.ano)&&(lista[i].admissao.mes > recente.mes)) || ((lista[i].admissao.ano == recente.ano)&&(lista[i].admissao.mes == recente.mes)&&(lista[i].admissao.dia > recente.dia))){
                        strcpy(nome1,lista[i].nome);
                        recente.dia = lista[i].admissao.dia;
                        recente.mes = lista[i].admissao.mes;
                        recente.ano = lista[i].admissao.ano;
                    }
                }
                printf("O funcionário mais recente na empresa é %s\n",nome1);
                break;
            case 3:
                char nome2[30];
                strcpy(nome2,lista[0].nome);
                data antigo;
                antigo.dia = lista[0].admissao.dia;
                antigo.mes = lista[0].admissao.mes;
                antigo.ano = lista[0].admissao.ano;
                
                for(int i=0; i<tamanho; i++){
                    if((lista[i].admissao.ano < antigo.ano) || ((lista[i].admissao.ano == antigo.ano)&&(lista[i].admissao.mes < antigo.mes)) || ((lista[i].admissao.ano == antigo.ano)&&(lista[i].admissao.mes == antigo.mes)&&(lista[i].admissao.dia < antigo.dia))){
                        strcpy(nome2,lista[i].nome);
                        antigo.dia = lista[i].admissao.dia;
                        antigo.mes = lista[i].admissao.mes;
                        antigo.ano = lista[i].admissao.ano;
                    }
                }
                printf("O funcionário mais antigo na empresa é %s\n",nome2);
                break;
            case 4:
                int matricula;
                
                printf("Digite a matrícula do funcionário: ");
                scanf("%d",&matricula);
                printf("Deletando...");
                for(int i=0; i<tamanho;i++){
                    if(lista[i].matricula == matricula){
                        for(int j=i;j<(tamanho+1);j++){
                          lista[j].matricula = lista[j+1].matricula;
                          strcpy(lista[j].nome,lista[j+1].nome);
                        lista[j].nascimento.dia = lista[j+1].nascimento.dia;
                        lista[j].nascimento.mes=lista[j+1].nascimento.mes;
                        lista[j].nascimento.ano=lista[j+1].nascimento.ano;
                        lista[j].admissao.dia=lista[j+1].admissao.dia;
                        lista[j].admissao.mes=lista[j+1].admissao.mes;
                        lista[j].admissao.ano=lista[j+1].admissao.ano;
                        strcpy(lista[j].funcao,lista[j+1].funcao);
                        } 
                    }
                }
                tamanho--;
                break;
            case 5:
                printf("Listagem de funcionários:\n");
                for(int i=0; i<tamanho; i++){
                    printf("Nome = %s\n", lista[i].nome);
                }
                break;
            case 6:
                printf("Terminando o programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente!\n");
                break;
        }    
    }while(resp!=6);    
}