#include <stdio.h>

int main(){
    int x,y,maior;
    printf("Digite dois números quaisquer: ");
    scanf("%d %d",&x,&y);
   
    maior = (x>y)? x:y;

    printf("O maior número é %d",maior);
    return 0;
}