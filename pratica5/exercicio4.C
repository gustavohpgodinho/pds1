# include <stdio.h>

int main()
{
    char linha[128];
    printf("digite uma linha:\n");
    fgets(linha, 128, stdin);
    
    int tamanho = 0;
    for(int i = 0; linha[i] != '\0' && linha[i] != '\n'; i++){
        tamanho++;
    }

    printf("tamanho string: %d\n", tamanho);
    return 0;
}
