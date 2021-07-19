#include <stdio.h>

int main ()
{
  int N, R, Q; 
  int g[50000], r[1000][2], q[50000];
  int i, j, caso, qtd_passos, aux;

  scanf("%d", &N);
  caso = 1;
  while(N != 0)
  {
    for(i = 0; i < N; i++)
      g[i] = i+1;

    scanf("%d", &R);
    for(i = 0; i < R; i++)
      scanf("%d%d", &r[i][0], &r[i][1]);

    scanf("%d", &Q);
    for(i = 0; i < Q; i++)
      scanf("%d", &q[i]);


    //tratamento dos dados
    for(i = 0; i < R; i++)
    {
      qtd_passos = (((r[i][1]-r[i][0])/2)+1);
      for(j = 0; j < qtd_passos; j++)
      {
        aux = g[(r[i][1]-j)-1];
        g[(r[i][1]-j)-1] = g[(r[i][0]+j)-1];
        g[(r[i][0]+j)-1] = aux;;
      }
    }

    printf("Genome %d\n", caso);
    for(i = 0; i < Q; i++)
      for(j = 0; j < N; j++)
        if(q[i] == g[j])
          printf("%d\n", j+1);

    scanf("%d", &N);
    caso++;
  }

  return 0;
}