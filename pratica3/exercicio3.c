#include <stdio.h>

void main(){
    float x, y;
    scanf("%f %f", &x, &y);
    
    // podemos fazer como fizemos no exercicio da pratica1
    // float guarda_valor_x;
    // guarda_valor_x = x;
    // x = y;
    //y = guarda_valor_x;
    
    // podemos usar ponteiros
    float *ptr_x, *ptr_y;
    ptr_x = &x;
    ptr_y = &y;
    
    float guarda_valor_x;
    guarda_valor_x = *ptr_x;
    *ptr_x = *ptr_y;
    *ptr_y = guarda_valor_x;
    
    printf("\nx = %f\ny = %f", x, y);

}

