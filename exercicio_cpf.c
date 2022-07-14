/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int cpf, x;
    scanf("%d", &cpf);
    
    x = cpf;
    int divisor = 10;
    int soma = 0;
    int peso = 2;
    
    soma += peso*(x % divisor);
    x /= 10;
    peso++;
    
    soma += peso*(x % divisor);
    x /= 10;
    peso++;

    soma += peso*(x % divisor);
    x /= 10;
    peso++;

    soma += peso*(x % divisor);
    x /= 10;
    peso++;

    soma += peso*(x % divisor);
    x /= 10;
    peso++;

    soma += peso*(x % divisor);
    x /= 10;
    peso++;

    soma += peso*(x % divisor);
    x /= 10;
    peso++;

    soma += peso*(x % divisor);
    x /= 10;
    peso++;

    soma += peso*(x % divisor);
    x /= 10;
    peso++;
    
    int dezena;
    if(soma % 11 <= 1){
        dezena = 0; 
    } else {
        dezena = 11 - (soma%11);
    }
    
    soma = 0;
    x = cpf;
    peso = 2;
    
    soma += dezena * peso;
    peso++;
    
    soma += peso*(x % divisor);
    x /= 10;
    peso++;

    soma += peso*(x % divisor);
    x /= 10;
    peso++;
    
    soma += peso*(x % divisor);
    x /= 10;
    peso++;

    soma += peso*(x % divisor);
    x /= 10;
    peso++;
    
    soma += peso*(x % divisor);
    x /= 10;
    peso++;

    soma += peso*(x % divisor);
    x /= 10;
    peso++;
    
    soma += peso*(x % divisor);
    x /= 10;
    peso++;

    soma += peso*(x % divisor);
    x /= 10;
    peso++;
    
    soma += peso*(x % divisor);
    x /= 10;
    peso++;
    
    int unidade;
    if(soma % 11 <= 1){
        unidade = 0; 
    } else {
        unidade = 11 - (soma%11);
    }

    printf("%d-", cpf);
    printf("%d", dezena);
    printf("%d", unidade);

    return 0;
}
