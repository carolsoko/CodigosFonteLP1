/** Fazer um programa para simular uma agenda de telefones. Para cada pessoa devem-se ter os seguintes dados:
• Nome
• E-mail
• Endereço (estrutura que contém os campos Logradouro, número, complemento, Bairro, CEP, Cidade, Estado, País)
• Telefone (Com DDD e Número)
• Data de Nascimento DDMMAAAA
• Observações (String com 100 caracteres)
Defina a Struct, declare a variável AGENDA com capacidade para 100 elementos, e desenvolva um MENU com as seguintes ações:
(a) Buscar pelo primeiro nome: Imprime os dados da pessoa com esse nome (se tiver mais de uma pessoa, imprime para todas).
(b) Buscar pela data de nascimento: Imprime os dados de todas as pessoas que nasceram naquele dia, mês e ano.
(c) Inserir dados de uma pessoa: Insere dados da pessoa em ordem alfabética
(d) Deletar dados de uma pessoa: Apaga dados da pessoa mantendo a ordem alfabética
(e) Imprime agenda: Imprime todos os dados salvos no vetor AGENDA**/

#include <stdio.h>
#include <string.h>

typedef struct tipoEndereco{
    char logradouro[30];
    int numero;
    char complemento[40];
    char bairro[10];
    char cep[8];
    char cidade[20];
    char estado[2];
    char pais[20];
} endereco;

typedef struct formatoData{
    int dia;
    int mes;
    int ano;
} data;

typedef struct contatoAgenda{
    char nome[30];
    char email[30];
    endereco enderecoResidencial;
    char telefone[15];
    data dataNascimento;
    char observacao[100];
} pessoa;

void main(){
    pessoa agenda[100];
    pessoa pessoaAuxiliar;
    int tamanho=0, resp, i, j;
    int dia, mes, ano;
    char nome[30];
    
    do{
        printf("------------------------------\n");
        printf("-----AGENDA DE CONTATOS-------\n");
        printf("------------------------------\n");
        printf("Escolha uma das opções abaixo:\n");
        printf("1 - Inserir dados na agenda\n");
        printf("2 - Buscar pelo nome\n");
        printf("3 - Buscar pela data de nascimento\n");
        printf("4 - Deletar dados de uma pessoa\n");
        printf("5 - Imprimir agenda\n");
        printf("6 - Sair\n");
        scanf("%d%*c",&resp);
    
        switch (resp){
            case 1:
                if(tamanho < 100){
                    printf("Informe os dados da %dª pessoa:\n",tamanho+1);
                    printf("Nome: ");
                    scanf("%s%*c",agenda[tamanho].nome);
                    printf("E-mail: ");
                    scanf("%s%*c",agenda[tamanho].email);
                    printf("Logradouro: ");
                    scanf("%s%*c",agenda[tamanho].enderecoResidencial.logradouro);
                    printf("Numero: ");
                    scanf("%d%*c",&agenda[tamanho].enderecoResidencial.numero);
                    printf("Complemento: ");
                    scanf("%s%*c",agenda[tamanho].enderecoResidencial.complemento);
                    printf("CEP: ");
                    scanf("%s%*c",agenda[tamanho].enderecoResidencial.cep);
                    printf("Bairro: ");
                    scanf("%s%*c",agenda[tamanho].enderecoResidencial.bairro);
                    printf("Cidade: ");
                    scanf("%s%*c",agenda[tamanho].enderecoResidencial.cidade);
                    printf("Estado: ");
                    scanf("%s%*c",agenda[tamanho].enderecoResidencial.estado);
                    printf("País: ");
                    scanf("%s%*c",agenda[tamanho].enderecoResidencial.pais);
                    printf("Data de Nascimento (DD/MM/AAAA): ");
                    scanf("%d%*c%d%*c%d%*c",&agenda[tamanho].dataNascimento.dia, &agenda[tamanho].dataNascimento.mes, &agenda[tamanho].dataNascimento.ano);
                    printf("Observação: ");
                    scanf("%s%*c",agenda[tamanho].observacao);
                    tamanho++;    
                    
                    for(j=0;j<tamanho-1;j++){
                        for(i=0;i<tamanho-1;i++){
                            if (strcmp(agenda[i].nome,agenda[i+1].nome)>0){
                                strcpy(pessoaAuxiliar.nome,agenda[i].nome);
                                strcpy(pessoaAuxiliar.email,agenda[i].email);
                                strcpy(pessoaAuxiliar.telefone,agenda[i].telefone);
                                strcpy(pessoaAuxiliar.observacao,agenda[i].observacao);
                                pessoaAuxiliar.dataNascimento.dia = agenda[i].dataNascimento.dia;
                                pessoaAuxiliar.dataNascimento.mes = agenda[i].dataNascimento.mes;
                                pessoaAuxiliar.dataNascimento.ano = agenda[i].dataNascimento.ano;
                                
                                strcpy(agenda[i].nome,agenda[i+1].nome);
                                strcpy(agenda[i].email,agenda[i+1].email);
                                strcpy(agenda[i].telefone,agenda[i+1].telefone);
                                strcpy(agenda[i].observacao,agenda[i+1].observacao);
                                agenda[i].dataNascimento.dia = agenda[i+1].dataNascimento.dia;
                                agenda[i].dataNascimento.mes = agenda[i+1].dataNascimento.mes;
                                agenda[i].dataNascimento.ano = agenda[i+1].dataNascimento.ano;
                                
                                strcpy(agenda[i+1].nome,pessoaAuxiliar.nome);
                                strcpy(agenda[i+1].email,pessoaAuxiliar.email);
                                strcpy(agenda[i+1].telefone,pessoaAuxiliar.telefone);
                                strcpy(agenda[i+1].observacao,pessoaAuxiliar.observacao);
                                agenda[i+1].dataNascimento.dia = pessoaAuxiliar.dataNascimento.dia;
                                agenda[i+1].dataNascimento.mes = pessoaAuxiliar.dataNascimento.mes;
                                agenda[i+1].dataNascimento.ano = pessoaAuxiliar.dataNascimento.ano;
                            }
                        }
                    }
                }else{
                    printf("Agenda Cheia!");
                }
                break;
            case 2:
                printf("Informe o nome da pessoa que você deseja buscar: ");
                scanf("%s%*c",nome);
                for(i=0; i<tamanho; i++){
                    if(strcmp(agenda[i].nome,nome)==0){
                        printf("Nome = %s\n",agenda[i].nome);
                        printf("E-mail = %s\n",agenda[i].email);
                        printf("Data de Nascimento = %d/%d/%d\n",agenda[i].dataNascimento.dia, agenda[i].dataNascimento.mes, agenda[i].dataNascimento.ano);
                        }
                    }
                break;
            case 3:
                printf("Informe a data de nascimento da pessoa que você deseja buscar (DD/MM/AAAA): ");
                scanf("%d%*c%d%*c%d%*c",&dia, &mes, &ano);
                for(i=0; i<tamanho; i++){
                    if((agenda[i].dataNascimento.dia == dia) && (agenda[i].dataNascimento.mes == mes) && (agenda[i].dataNascimento.ano == ano)){
                        printf("Nome = %s\n",agenda[i].nome);
                        printf("E-mail = %s\n",agenda[i].email);
                        printf("Data de Nascimento = %d/%d/%d\n",agenda[i].dataNascimento.dia, agenda[i].dataNascimento.mes, agenda[i].dataNascimento.ano);
                        }
                    }
                break;
            case 4:
                printf("Informe o nome da pessoa que deseja deletar: ");
                scanf("%s%*c",nome);
                for(i=0; i<tamanho; i++){
                    if(strcmp(agenda[i].nome,nome)==0){
                        for(j=i; j<tamanho-1; j++){
                            strcpy(agenda[j].nome,agenda[j+1].nome);
                            strcpy(agenda[j].email,agenda[j+1].email);
                            strcpy(agenda[j].telefone,agenda[j+1].telefone);
                            strcpy(agenda[j].observacao,agenda[j+1].observacao);
                            agenda[j].dataNascimento.dia = agenda[j+1].dataNascimento.dia;
                            agenda[j].dataNascimento.mes = agenda[j+1].dataNascimento.mes;
                            agenda[j].dataNascimento.ano = agenda[j+1].dataNascimento.ano;
                        }  
                        tamanho--;
                        break;
                    }
                }
                break;   
            case 5:
                printf("Dados da Agenda:");
                for(i=0; i<tamanho; i++){
                    printf("Nome = %s\n",agenda[i].nome);
                    printf("E-mail = %s\n",agenda[i].email);
                    printf("Data de Nascimento = %d/%d/%d\n",agenda[i].dataNascimento.dia, agenda[i].dataNascimento.mes, agenda[i].dataNascimento.ano);
                    printf("\n");
                }
                break;    
            case 6:
                printf("Saindo do programa...");
                break;
            default:
                printf("Opção inválida! Tente de novo!");
                break;
        }
    }while(resp!=6);    
}