#define MAXV 10000
int cnt, ordemvisit[MAXV];
int fila[MAXV];
int ini,fim;
/* A função bfsDigrafo visita todos os vértices do digrafo G que podem ser alcançados a partir do vértice s. A ordem em que os vértices são visitados é registrada no vetor ordemvisit. */

void bfsDigrafo (int s) { 
   int v, w,n,g[MAXV][MAXV];
   cnt = 0;
   for (v = 0; v < n; v++) ordemvisit[v] = -1;
   ordemvisit[s] = cnt++;
   ini = fim = 0;
   fila[ini++] = s; 
   while (ini > fim) {
       v = fila[fim++]; 
       for (w = 0; w < n; w++)
           if (g[v][w] == 1)
              if (ordemvisit[w] == -1) { 
                 ordemvisit[w] = cnt++; 
                 fila[ini++] = w; 
             }
   }
}
