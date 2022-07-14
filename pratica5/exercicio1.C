# include <stdio.h>
# include <math.h>

# define valor_parada pow(10, -6)

double fatorial(int x){
    
    double resultado = 1;
    for(int i = 1; i <= x; i++){
        resultado *= i;
    }
    
    return(resultado);
}

double calcula_euler(){
    
    double num_euler = 1;
    double parte_fracionaria = 1;
    
    for(int i = 1; parte_fracionaria > valor_parada; i++){
        parte_fracionaria = ((float) 1/fatorial(i));
        num_euler += parte_fracionaria;
    }
    
    return (num_euler);
    
}

int main()
{
    printf("O numero de Euler eh: %f\n", calcula_euler());
    return 0;
}
