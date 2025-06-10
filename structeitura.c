//Faça um algoritmo em C que leia os dados de nome, endereço, altura, peso e idade de 10 alunos de uma academia, calcule o IMC = peso/(altura*altura) e salve tudo num vetor de structs, por fim, mostre todo o cadastramento em tela.
#include <stdio.h>

typedef struct alunoAcademia{
    char nome[30];
    char ende[60];
    float altura;
    float peso;
    float imc;
    int idade;
}aluno;

void main() {
    aluno turma[10];
    
    for(int i=0; i<=9; i++){
        printf("Digite o nome do %dº aluno: ",i+1);
        scanf("%s",&turma[i].nome); getchar();
        printf("Digite o endereço do %dº aluno: ",i+1);
        scanf("%s",&turma[i].ende); getchar();
        printf("Digite a altura do %dº aluno: ",i+1);
        scanf("%f",&turma[i].altura); 
        printf("Digite o peso do %dº aluno: ",i+1);
        scanf("%f",&turma[i].peso);
        turma[i].imc = turma[i].peso/(turma[i].altura * turma[i].altura);
        printf("Digite a idade do %dº aluno: ",i+1);
        scanf("%d",&turma[i].idade);
    }
    
    printf("DADOS CADASTRADOS\n");
    for(int i=0;i<=9;i++){
        printf("Aluno %d:\n",i+1);
        printf("Nome = %s\n",turma[i].nome);
        printf("Endereço = %s\n",turma[i].ende);
        printf("Idade = %d\n",turma[i].idade);
        printf("Peso = %.1f\n",turma[i].peso);
        printf("Altura = %.1f\n",turma[i].altura);
        printf("IMC = %.1f\n",turma[i].imc);
        printf("\n");
    }
}