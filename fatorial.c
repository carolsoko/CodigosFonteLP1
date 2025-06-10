/**Faça um algoritmo que leia um número inteiro e informe o seu fatorial, da seguinte forma:
    8! = 8*7*6*5*4*3*2*1 = 40320 **/
#include <stdio.h>

void main(){
    int n,i,fat,resp;
    
    do{
        printf("Informe um número inteiro: ");
        scanf("%d",&n);
        fat=1;
        printf("%d!= ",n);
        for(i=n;i>=1;i--){
            fat=fat*i;
            if(i==1) printf("%d",i);
            else printf("%d*",i);
        }
        printf("= %d\n",fat);
        
        printf("Deseja informar novo número? 1-Sim 2-Não\n");
        scanf("%d",&resp);
    }while(resp==1);
}