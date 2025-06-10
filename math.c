/******************************************************************************

Uso do math.h
*******************************************************************************/
#include <stdio.h>
#include <math.h>


void main(){
float x = 8.65;
int y=3, z=5;    
    
    printf("Valor arredondado de %.2f para cima = %.0f\n", x, ceil(x));
    printf("Valor arredondado de %.2f para baixo = %.0f\n", x, floor(x));
    printf("Valor arredondado de %.2f = %.0f\n", x, round(x));
    
    printf("Raiz quadrada de 144 = %.0f\n", sqrt(144));
    printf("%d elevado a %d = %.0f", y, z, pow(y,z));
    
    
}