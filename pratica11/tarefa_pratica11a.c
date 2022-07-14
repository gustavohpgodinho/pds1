# include <stdio.h>
# include "selection.h"

int compara_cartelas(int ca[], int cv[], int n){
    int comparador = 0;
     for(int i = 0; i < n; i++){
         if(ca[i] == cv[i]){
             comparador++;
         } else {
             break;
         }    
     }
     
     return comparador/n;
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
          
          contador_vencedor += compara_cartelas(cartela_atual, cartela_vencedor, 6);
          contador_lost += compara_cartelas(cartela_atual, cartela_lost, 6);

     }

     fclose(arquivo_cartelas);
     printf("quantidade cartelas vencedoras: %d\n", contador_vencedor);
     printf("quantidade cartelas lost: %d\n", contador_lost);

     return 0;
}

