// 4. Faça um algoritmo que leia o usuário e a senha e compare com usuário = "IFBA" e senha = "fsa1234", informe:
//  - "Acesso Permitido", caso usuários e senha sejam válidos
//  - "Acesso Negado", caso contrário
#include <stdio.h>
#include <string.h>

void main(){
    char senha[10],usuario[10];
   
    printf("Informe o usuário:\n");
    scanf("%s",usuario);
    printf("Informe a senha:\n");
    scanf("%s",senha);
   
    if ((!strcmp(usuario,"IFBA"))&&(!strcmp(senha,"fsa1234")))
          printf("Acesso Permitido!");
    else
        printf("Acesso Negado!");    
}