#include "gc.h"
#include <stdlib.h>
#include <stdio.h>

int main(void) 
{
  int quant, *ponteiro;
  
  printf("\nInsira a quantidade de objetos do vetor:\n");
  scanf("%d", &quant);
  ponteiro = (int*) GC_malloc_atomic(quant*sizeof(int));

  printf("\nInsira os objetos do vetor:\n");
  
  for(int i = 0; i < quant; i++)
  {
    scanf("%d", &ponteiro[i]);
  }

  for(int i = 0; i < quant; i++)
  {
  printf("%d", ponteiro[i]);
  }

  return 0;
}