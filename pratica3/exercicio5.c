#include <stdio.h>

unsigned long long int fast_pow_2(int expoente){
    
    return (unsigned long long int) 1 << expoente;
}

// quantos bits um unsigned long long int? possui 64 bits
// lembrando: 1 bit eh um digito 0 ou 1.
// representando o numero inteiro 1 como binario: 0 0000...0000 1
// lembre-se que um numero inteiro eh armazenado com 32 bits na memoria. 
// 1 bit para sinal e 31 para o valor.
// um numero long long eh armazenado com 64 bits na memoria.
// 1 bit para sinal e 63 para o valor.
// um numero unsigned long long eh tambem armazenado com 64 bits na memoria.
// 0 bits para sinal e 64 para o valor.

// ou seja, um numero unsigned long long tem aproximadamente a capacidade 
// de armazenar um numero 2 vezes maior que o maior numero armazenado em um 
// numero long long 

// ou seja, 
// a maior potencia de 2 que podemos armazenar em um long long int eh 2^31
// a maior potencia de 2 que podemos armazenar em um unsigned long long int eh 2^63
// mas o maior numero que podemos armazenar em um unsigned long long int eh (2^64)-1

void main(){
    
    printf("valor da maior potencia de 2 representada em um numero unsigned long long int %llu\n", fast_pow2(63));
    printf("2 elevado a 64 da overflow: %llu\n", fast_pow2(64));
}