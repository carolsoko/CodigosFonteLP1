#include <stdio.h>

void main(){
   
    int x,y;
   
    printf("Digite o valor de x:\n");
    scanf("%d \n %d", &x, &y);
   
    printf(" ++x = %d e y++ = %d \n", ++x, y++ );
   
    printf("y = %d \n", y );
}