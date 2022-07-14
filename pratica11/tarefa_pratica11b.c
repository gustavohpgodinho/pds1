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

int compara_cartela_numero(int ca[], int numero, int n){
    int comparador = 0;
    for(int i = 0; i < n; i++){
        if(ca[i] == numero){
            comparador = 1;
            break;
        }    
    }
    return comparador;
}

int conta_acertos(int ca[], int cv[], int n){
    
    int contador_acertos = 0;
    for(int i = 0; i < n; i++){
        contador_acertos += compara_cartela_numero(ca, cv[i], n);
    }
    
    return contador_acertos;
}

int main(){
     FILE *arquivo_cartelas;
     arquivo_cartelas = fopen("cartelas.txt", "r");

     int cartela_atual[6];
     int cartela_vencedor[6] = {6, 9, 22, 23, 48, 52};
     int cartela_lost[6] = {4, 8, 15, 16, 23, 42};

     int contador_vencedor = 0;
     int contador_lost = 0;
     
     int contador_quadra = 0;
     int contador_quina = 0;
     
     while(feof(arquivo_cartelas) == 0){
          
          for(int i = 0; i < 6; i++){
               fscanf(arquivo_cartelas, "%d", &cartela_atual[i]);
          }
          
          ordenar_por_selecao(cartela_atual, 6);
          
          contador_vencedor += compara_cartelas(cartela_atual, cartela_vencedor, 6);
          contador_lost += compara_cartelas(cartela_atual, cartela_lost, 6);
      
          int contador = conta_acertos(cartela_atual, cartela_vencedor, 6);
          if(contador == 4){
              contador_quadra++;
          }
          if(contador == 5){
              contador_quina++;
          }

     }

     fclose(arquivo_cartelas);
     printf("quantidade cartelas vencedoras: %d\n", contador_vencedor);
     printf("quantidade de quinas: %d\n", contador_quina);
     printf("quantidade de quadras: %d\n", contador_quadra);
     printf("quantidade cartelas lost: %d\n", contador_lost);

     return 0;
}

