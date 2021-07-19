#include <stdio.h>

int main()
{
  int n, m[1000][1000], i, j;
  int start, end, cont=0;
  scanf("%d", &n);

  start = 0;
  end = n-1;

  while(cont != n*n)
  {
    for(i = start; i <= end; i++)
    {
      scanf("%d", &m[i][start]);
      cont++;
    }
    for(i = start+1; i <= end; i++)
    {
      scanf("%d", &m[end][i]);
      cont++;
    }
    for(i = end-1; i >= start; i--)
    {
      scanf("%d", &m[i][end]);
      cont++;
    }
    for(i = end-1; i >= start+1; i--)
    {
      scanf("%d", &m[start][i]);
      cont++;
    }
    start++;
    end--;
  }

  for(i = 0; i < n; i++)
    for(j = 0; j < n; j++)
      printf("%d\n", m[i][j]);


  return 0;
} 