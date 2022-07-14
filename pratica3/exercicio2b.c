#include <stdio.h>

void main(){
    
    int x = 0;
    /* pode ser assim:
    int *ptr_x;
    ptr_x = &x;
    ou pode ser assim:*/ 
    int *ptr_x = &x;
    
    //printf("valor de x: %d, local de memoria de x: %p\n", x, &x);
    //printf("valor de ptr_x: %d, local de memoria de ptrx: %p\n", ptr_x, &ptr_x);

    *ptr_x = 3;
    printf("%d\n", x);
}

