#include <stdio.h>

int multiplica(int N1, int N2); //protótipo da função multiplica
/******************* função principal (main) *********************/
void main(void){
  int V1, V2, resultado;
  printf("Digite o primeiro valor:");
  scanf("%d", &V1);
  printf("Digite o segundo valor:");
  scanf("%d", &V2);
  resultado = multiplica(V1,V2);
  
  printf("Resultado = %d\n", resultado);
}

int multiplica(int N1, int N2) //multiplica recebe N1,N2 e retorna um int
{
  int resultado;
  resultado = N1 * N2;
  return(resultado); //retornando o valor para main
}