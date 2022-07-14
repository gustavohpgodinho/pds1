# include "selection.h"
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