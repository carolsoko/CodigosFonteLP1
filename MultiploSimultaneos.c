/**3.	Fazer um algoritmo, em Linguagem C, que mostre os N primeiros múltiplos simultâneos 
de dois números dados (X e Y). Os valores de N, X e Y serão fornecidos pelo usuário. 
Permita que o usuário repita o algoritmo quantas vezes ele quiser. (valor: 1,0pt).
**/
#include <stdio.h>

void main() {
    int n,x,y,i,resp,qtde;
    
    do{
        printf("Digite dois números inteiros: ");
        scanf("%d %d",&x,&y);
        
        printf("Informe quantos múltiplos você deseja mostrar: ");
        scanf("%d",&n);
        
        for(i=1,qtde=0;qtde<n;i++){
            if((i%x==0)&&(i%y==0)){
                printf("Múltiplo de %d e %d = %d\n",x,y,i); 
                qtde++;
            }
        }
        printf("Deseja repetir o programa? 1-Sim 2-Não: ");
        scanf("%d",&resp);
    }while(resp == 1);
}