/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

# include <stdio.h>

int main()
{
    char linha[128];
    printf("digite uma linha:\n");
    fgets(linha, 128, stdin);
    
    for(int i = 0; linha[i] != '\0' && linha[i] != '\n'; i++){
        
        int int_linha = linha[i];
        
        if(int_linha > 90){
            printf("%c", int_linha-32);
        } else {
            printf("%c", linha[i]);
        }

    }

    return 0;
}
