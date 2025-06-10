//Matriz de notas com cálculo de média, leia 4 notas de 20 alunos, calcule a média e salve tudo numa matriz 20X5
#include <stdio.h>
void main() {
    float notas[5][5], media;
    int i,j;
    for(i=0; i<=4; i++){
        media = 0;
        for(j=0; j<=3; j++){
            printf("Digite a %dª nota do %dº aluno: ",j+1,i+1);
            scanf("%f", &notas[i][j]);
            media = media + notas[i][j];
        }
        notas[i][4] = media/4;
    }
    printf("Tabela de Notas\n");
    for(i=0; i<=4; i++){
        printf("Notas do %dº aluno: ", i+1);
        for(j=0; j<=3;j++)printf("%.1f, ", notas[i][j]);
        printf("\nMédia = %.1f\n",notas[i][4]);
    }
}