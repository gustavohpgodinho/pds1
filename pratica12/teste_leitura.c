# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# define TAMANHO_MAXIMO 100

int main(){
 FILE* arquivo;
 FILE* gaal;
arquivo = fopen("GAAL.txt", "r");
gaal = fopen("gaal_modificado.txt", "w");

char buf[TAMANHO_MAXIMO];
int identificador;
char* aluno;
float nota1, nota2;

while(feof(arquivo) == 0){
  fgets(buf, TAMANHO_MAXIMO, arquivo);

  identificador = atoi(strtok(buf, ","));
  aluno = strtok(NULL, ",");
  nota1 = atof(strtok(NULL, ","));
  nota2 = atof(strtok(NULL, ","));
  
  fprintf(gaal, "\nO(A) aluno(a) %d eh %s e as suas notas nas provas foram: %.2f e %.2f.", identificador, aluno, nota1, nota2);
}
 printf("A escrita foi feita!\n");

 return 0;
}
