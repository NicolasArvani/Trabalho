#include <stdio.h>

int main()
{
  long int n[100000], x, i, qtd;

  while(1)
  {
  scanf("%ld", &x);
  if(x == 0) break;
  
  for(i = 0, qtd = 0; i <= 11; i++)
  {
    n[i] = (x % 10);
    x = x / 10;
    qtd++;  
    if(x == 0) break;
  }
    
  for(i = 0; i < qtd; i++)
  {
    printf("[%ld]", n[i]);
  }
  printf("\n");
  
  }

  return 0;
} 