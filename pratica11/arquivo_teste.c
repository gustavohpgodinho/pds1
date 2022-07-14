# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int main(){
 FILE *arquivo;
 arquivo = fopen("constantes.txt", "r"); 
 
 float cartela[2]; 
 while(feof(arquivo) == 0){
    for(int i = 0; i < 2; i++){
        fscanf(arquivo, "%f", &cartela[i]);
    }

    for(int j = 0; j < 2; j++){
	fprintf(stdout, "\t%.6f", cartela[j]);    
    }
    printf("\n"); 
 }

 char mensagem[100];
 printf("Digite sua idade, nome: ");
 fgets(mensagem, 100, stdin);

 printf("Oi %s tudo bem?\n", mensagem);
 //printf("Oi Gustavo Godinho\n tudo bem?\n");

 int j = 0;
 while(mensagem[j] != '\n' && mensagem[j] != '\0'){
 	j++;
 }
 mensagem[j] = '\0';
 
 int n;
 char* nome;
 n = atoi(strtok(mensagem, ","));
 nome = strtok(NULL, ",");
 
 printf("---------------------------\n");
 printf("Oi %s de %d anos, tudo bem?\n", nome, n);
  
 
return 0;
}