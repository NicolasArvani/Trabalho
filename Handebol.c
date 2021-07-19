#include <stdio.h>

int main()
{
  int jogadores, partidas, i, j, qtd=0, f;
  int m[100][100];
  scanf("%d%d", &jogadores, &partidas);
  
  for(i = 0; i < jogadores; i++)
    for(j = 0; j < partidas; j++)
      scanf("%d", &m[i][j]);

  for(i = 0; i < jogadores; i++)
  {
    f = 1;
    for(j = 0; j < partidas; j++)
      if(m[i][j] <= 0)
        f = 0;
    if(f == 1)
     qtd++;
  }

  printf("%d\n", qtd);

  return 0;
} 