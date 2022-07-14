#include <stdio.h>

int ddd(unsigned int x){
    
    return x/100000000;
    
}

int soma1SePar(unsigned int x){
    return x | (unsigned int) 1;
}

int parOuImpar(unsigned int x){
    return !(x & (unsigned int) 1);
}

int main()
{
    printf("%d\n", ddd(3134091430));
    printf("%d\n", ddd(1639934257));
    printf("%d\n", ddd(4132582810));

    printf("%d\n", Soma1SePar(0));
    printf("%d\n", Soma1SePar(1));
    printf("%d\n", Soma1SePar(105));
    printf("%d\n", Soma1SePar(106));
    
    printf("%d\n", ParOuImpar(0));
    printf("%d\n", ParOuImpar(1));
    printf("%d\n", ParOuImpar(223));
    return 0;
}
