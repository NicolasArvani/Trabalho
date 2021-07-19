#include <stdio.h>

int main()
{
  int campo1[45][45]={0}, campo2[45][45]={0};
  int N, M, V, G;
  int i, j, x, y, g, qtdv;
  int k, l;
  scanf("%d%d%d%d", &N, &M, &V, &G);

  for(i = 0; i < V; i++)
  {
    scanf("%d%d", &y, &x);
    campo1[y][x] = 1;
  }

  for(i = 0; i < N; i++)
    {
      for(j = 0; j < M; j++)
        {
          printf(" %d", campo1[i][j]);
       
        }
      printf("\n");
    }
    printf("\n");

  for(g = 0; g < G; g++)
  {
    for(i = 0; i < N; i++)
      for(j = 0; j < M; j++)
      {
        qtdv = 0;
        if(i-1 >= 0 && j-1 >= 0 && campo1[i-1][j-1] == 1)
          qtdv++;
        if(i-1 >= 0 && j >= 0 && campo1[i-1][j] == 1)
          qtdv++;
        if(i-1 >= 0 && j+1 >= 0 && campo1[i-1][j+1] == 1)
          qtdv++;

        if(i >= 0 && j-1 >= 0 && campo1[i][j-1] == 1)
          qtdv++;
        if(i >= 0 && j+1 >= 0 && campo1[i][j+1] == 1)
          qtdv++;

        if(i+1 >= 0 && j-1 >= 0 && campo1[i+1][j-1] == 1)
          qtdv++;
        if(i+1 >= 0 && j >= 0 && campo1[i+1][j] == 1)
          qtdv++;
        if(i+1 >= 0 && j+1 >= 0 && campo1[i+1][j+1] == 1)
          qtdv++;


        if(campo1[i][j] == 0)
        {
          if(qtdv == 3)
            campo2[i][j] = 1;
        }
        if(campo1[i][j] == 1)
        {
          if(qtdv < 2)
            campo2[i][j] = 0;
          else if(qtdv > 3)
            campo2[i][j] = 0;
          else if(qtdv == 3 || qtdv == 2)
            campo2[i][j] = campo1[i][j];
        }
      }
    for(i = 0; i < N; i++)
      for(j = 0; j < M; j++)
        campo1[i][j] = campo2[i][j];

    for(i = 0; i < N; i++)
    {
      for(j = 0; j < M; j++)
        {
          printf(" %d", campo1[i][j]);
       
        }
      printf("\n");
    }
    printf("\n");

  }



  return 0;
} 