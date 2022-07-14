#include <stdio.h>

void soma1(int *ptr){
    // assim nao funciona: *ptr++;
    // jeitos que funcionam:
    //(*ptr) ++; ou
    // *ptr = *ptr + 1; ou
    *ptr += 1;
}

void main(){
    
    int x = 0;
    /* pode ser assim:
    int *ptr_x;
    ptr_x = &x;
    ou pode ser assim:*/ 
    int *ptr_x = &x;
    
    //printf("valor de x: %d, local de memoria de x: %p\n", x, &x);
    //printf("valor de ptr_x: %d, local de memoria de ptrx: %p\n", ptr_x, &ptr_x);

    soma1(ptr_x);
    soma1(ptr_x);
    soma1(ptr_x);
    printf("%d\n", x);
}

