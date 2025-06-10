/**1.Escreva um algoritmo, em Linguagem C, que leia X e Y, que são os limites de um intervalo 
fechado [x,y], e mostre todos os números primos contidos neste intervalo. Após a execução, 
permita que o usuário repita o algoritmo quantas vezes ele quiser. (valor: 1,0pt)**/
#include <stdio.h>

void main() {
    int x,y,i,j,divisores,resp;
    
    do{
        printf("Informe os limites do intervalo [x,y]: ");
        scanf("%d %d", &x,&y);
        for(i=x;i<=y;i++){
            divisores = 0;
            for(j=1;j<=i;j++)
                if(i%j==0) divisores++;
            if(divisores == 2) printf("Primo = %d\n", i);    
        }
        printf("Deseja informar novo intervalo? Digite: 1-Sim e 2-Não");
        scanf("%d",&resp);
    }while(resp == 1);
}