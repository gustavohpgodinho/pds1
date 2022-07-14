#include <stdio.h>

float parteInteira(float x){
    
    /* pode ser assim:
    float y = (int) x;
    return y;
    
    ou pode ser assim:*/
    int y = x;
    return y;
}

float parteFracionaria(float x){
    
    /* pode ser assim:
    float y = (int) x;
    return x-y;
    
    ou pode ser assim:*/
    return x - (int) x;
    
}

float divInts(int x, int y){
    
    /* pode ser assim:
    return (float) x/y;
    
    ou pode ser assim:*/
    return (float) x/ (float) y;
}

void main(){
    
    printf("\nEXTRAINDO PARTE INTEIRA\n");
    printf("entrada: 3.1415; parte inteira: %f\n", parteInteira(3.1415));
    printf("entrada: 2.7182; parte inteira: %f\n", parteInteira(2.7182));
    printf("entrada: -5; parte inteira: %f\n", parteInteira(-5));
    
    printf("\nEXTRAINDO PARTE FRACIONARIA\n");
    printf("entrada: 3.1415; parte inteira: %f\n", parteFracionaria(3.1415));
    printf("entrada: 2.7182; parte inteira: %f\n", parteFracionaria(2.7182));
    printf("entrada: -5; parte inteira: %f\n", parteFracionaria(-5));
    
    printf("\nTESTANDO FUNCAO DIVISAO DE INTEIROS\n");
    printf("entrada: %d e %d; divisao: %.2f\n", 3, 4, divInts(3, 4));
    printf("entrada: %d e %d; divisao: %.2f\n", 4, 3, divInts(4, 3));
    printf("entrada: %d e %d; divisao: %.2f\n", 4, 4, divInts(4, 4));
}