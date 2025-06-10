// Faça um algoritmo que implemente a calculadora com as 4 operações básicas da matemática
#include <stdio.h>

void main(){
    int x,y;
    float resultado;
    char op,resp;
   
    do{
        printf("Informe a operação desejada no formato num op num: ");
        scanf("%d%*c%c%*c%d%*c",&x,&op,&y);
     
        switch(op){
            case '+':
                resultado = (float)(x+y);
                printf("%d %c %d = %.1f\n",x,op,y,resultado);
                break;
            case '-':
                resultado = (float)(x-y);
                printf("%d %c %d = %.1f\n",x,op,y,resultado);
                break;
            case '*':
                resultado = (float)(x*y);
                printf("%d %c %d = %.1f\n",x,op,y,resultado);
                break;
            case '/':
                if(y==0) printf("Divisão por zero não é permitida!\n");
                else{
                    resultado = (float)((float)x/(float)y);
                    printf("%d %c %d = %.1f\n",x,op,y,resultado);
                }
                break;
            default: printf("Opção Inválida!");
        }
           
       
       
        printf("Deseja repetir operação? S-Sim e N-Não\n ");
        scanf("%c",&resp);
    }while(resp=='S');    
}