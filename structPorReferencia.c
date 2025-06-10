#include <stdio.h>
typedef struct pessoa{
    float Peso; 
    int Idade; 
    float Altura; 
} Pessoa;

void ImprimePessoa(Pessoa P){
  printf("Idade: %d  Peso: %5.2f Altura: %5.2f\n", P.Idade, P.Peso, P.Altura);
}

void SetPessoa(Pessoa *P, int idade, float peso, float altura){ 
    (*P).Idade = idade;  // o campo pode ser acessado desta forma
    P->Peso = peso;      // ou desta
    P->Altura = altura;
}
   
int main(){
    Pessoa Joao;
    SetPessoa(&Joao, 15, 70.5, 1.75);
    ImprimePessoa(Joao);
    return 0;
}