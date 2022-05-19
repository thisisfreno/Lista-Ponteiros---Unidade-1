#include <stdio.h>
#include <stdlib.h>

void function (float *p, int n)
{
  float aux = 0;
  
  for(int i = 0; i < n; i++)
  {
    for(int j = i + 1; j < n; j++)
    {
      if( p[i] > p[j])
      {
        aux = p[i];
        p[i]= p[j];
        p[j] = aux;
      }
    }
  }
}

int main(void) 
{
  void (*pq) (float*, int) = function;
  int n;
  float *q;
  
  printf("Insira o número de elementos do vetor: \n");
  scanf("%d", &n);
  q = malloc(n *sizeof(float));
 

  printf("Insira os elementos do vetor: \n");
  for(int i = 0; i < n; i++)
  {
    scanf("%f", &q[i]);
  }

  pq(q, n);

  printf("O seu vetor em ordem crescente é: \n");
  for (int i = 0; i < n; i++)
  {
    printf("%.2f ", q[i]);
  }
  
  free(q);
  return 0;
}