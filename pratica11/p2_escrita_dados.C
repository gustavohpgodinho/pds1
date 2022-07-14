# include <stdio.h>
# include "selection.h"

int main(){
    // abertura do arquivo
    // FILE * arquivo_cartelas, *arquivo_jogos;
    FILE *arquivo_cartelas;
    FILE *arquivo_jogos;
    arquivo_cartelas = fopen("cartelas.txt", "r");
    arquivo_jogos = fopen("jogos.txt", "w");
    int n;
    while(feof(arquivo_cartelas) == 0){
	
	fprintf(arquivo_jogos, "jogo lido: ");
	
	for(int i = 0; i < 6; i++){
	    // lendo valores do arquivo cartelas.txt
	    fscanf(arquivo_cartelas, "%d", &n);
            
	    // escrevendo valores no arquivo jogos.txt
	    fprintf(arquivo_jogos, "%d ", n);
	    fprintf(arquivo_jogos, "jogo lido: ");
	}
	
	
    }

    // fechando o arquivo    
    fclose(arquivo_cartelas);
    fclose(arquivo_jogos);
    return 0;

}