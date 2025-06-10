// Faça uma algoritmo que implemente um sistema de LOGIN e SENHA. LOGIN = ”ifbaBSI” e SENHA = ”alunoIFBA”. O sistema deverá informar ”Acesso Negado”, caso o usuário erre login e/ou senha. E deverá informar ”Acesso Permitido”, caso contrário. O algoritmo deverá permitir que o usuário erre apenas 5 vezes. Após 5 erros, o usuário terá a senha bloqueada e não poderá tentar logar novamente. Informe, a cada erro, quantas tentativas o usuário ainda tem.

// 4. Faça um algoritmo que leia o usuário e a senha e compare com usuário = "IFBA" e senha = "fsa1234", informe:
//  - "Acesso Permitido", caso usuários e senha sejam válidos
//  - "Acesso Negado", caso contrário
#include <stdio.h>
#include <string.h>

void main(){
    char senha[10],usuario[10];
    int tentativas;
    
    for(tentativas = 5; tentativas > 0; --tentativas){
        printf("Informe o usuário:\n");
        scanf("%s",usuario);
        printf("Informe a senha:\n");
        scanf("%s",senha);
   
        if((!strcmp(usuario,"ifbaBSI"))&&(!strcmp(senha,"alunoIFBA"))){
            printf("Acesso Permitido!\n");
            break;
        }else{    
            printf("Acesso Negado!\n");
            if(tentativas > 2)
                printf("Você tem apenas %d tentativas\n", tentativas-1);
            else if (tentativas == 2)
                printf("Você tem apenas 1 tentativa\n");
            else 
                printf("Seu acesso foi bloqueado!\n");
        }        
    }
}