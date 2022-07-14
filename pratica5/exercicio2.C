# include <stdio.h>
# define inf 9999999

char retorna_conceito(int nota){
    
    char conceito;
    switch(nota){
        case 0 ... 4:
            conceito = 'F';
            break;
        case 5:
            conceito = 'E';
            break;   
        case 6:
            conceito = 'D';
            break;
        case 7:
            conceito = 'C';
            break;   
        case 8:
            conceito = 'B';
            break;   
        case 9 ... inf:
            conceito = 'A';
            break;   
        default:
            printf("Nota invalida");
            break;
    }
    return (conceito);
}

int main()
{
    int nota_obtida;
    do{
        printf("Digite sua nota:");
        scanf("%d", &nota_obtida);
        printf("%c\n", retorna_conceito(nota_obtida));
    }
    while(nota_obtida < 0);
    
    return 0;
}
