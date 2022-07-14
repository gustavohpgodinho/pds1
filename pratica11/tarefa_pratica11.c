# include <stdio.h>
# define INF 2000000000

void troca(int v[], int i, int j){
     int aux;
     aux = v[i];
     v[i] = v[j];
     v[j] = aux;
}

void ordenar_por_selecao(int x[], int n){
     int menor, pos;
     int i = 0;
     int k = 0;
     while(k < n){
          menor = INF;
          for(i = k; i < n; i++){
               if(x[i] < menor){
                    menor = x[i];
                    pos = i;
               }
          }
          troca(x, k, pos);
          k++;
     }
}

int main(){
     FILE *arquivo_cartelas;
     arquivo_cartelas = fopen("cartelas.txt", "r");

     int cartela_atual[6];
     int cartela_vencedor[6] = {6, 9, 22, 23, 48, 52};
     int cartela_lost[6] = {4, 8, 15, 16, 23, 42};

     int contador_vencedor = 0;
     int contador_lost = 0;
     while(feof(arquivo_cartelas) == 0){
          
          for(int i = 0; i < 6; i++){
               fscanf(arquivo_cartelas, "%d", &cartela_atual[i]);
          }
          
          ordenar_por_selecao(cartela_atual, 6);
          
          int comparador_vencedor = 0;
          for(int i = 0; i < 6; i++){
               if(cartela_vencedor[i] == cartela_atual[i]){
                    comparador_vencedor++;
               } else {
                    break;
               }              
          }
          
          if(comparador_vencedor == 6){
               contador_vencedor++;
          }
          
          int comparador_lost = 0;
          for(int i = 0; i < 6; i++){
               if(cartela_lost[i] == cartela_atual[i]){
                    comparador_lost++;
               } else {
                    break;
               }
          }

          if(comparador_lost == 6){
               contador_lost++;
          }

     }

     fclose(arquivo_cartelas);
     printf("quantidade cartelas vencedoras: %d\n", contador_vencedor);
     printf("quantidade cartelas lost: %d\n", contador_lost);

     return 0;
}

