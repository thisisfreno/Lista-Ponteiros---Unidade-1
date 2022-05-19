#include <stdlib.h>
#include <stdio.h>

int compara(float *v1, float *v2)
{
  if(*v1 > *v2)
  {
    return 1;
  }
  else if(*v1 < *v2)
  {
    return -1;
  }
  else
  {
    return 0;
  }
}

void ordenaVetor(float *pontAux, int num, int (*compara)(float *v1, float *v2)) 
{
  int auxiliar;
  for(int a = 0; a < num; a++)
  {
    for(int b = a + 1; b < num; b++)
    {
      if(compara(pontAux + a, pontAux + b) > 0)
      {
        auxiliar = pontAux[a];
        pontAux[a] = pontAux[b];
        pontAux[b] = auxiliar;
      }
    }
  }
  
}

int main(void)
{
  int quant;
  float *ponteiro;
  
  printf("Insira a quantidade de objetos do vetor:\n");
  scanf("%d", &quant);
  ponteiro = malloc(quant *sizeof(float));
 
  printf("Insira os objetos do vetor:\n");
  for(int i = 0; i < quant; i++)
  {
    scanf("%f", &ponteiro[i]);
  }
  
  printf("\nSeu vetor é: \n");
  for(int i = 0; i < quant; i++)
  {
    printf("%.2f ", ponteiro[i]);
  }
  
  ordenaVetor(ponteiro, quant, compara);
  printf("\n\nSeu vetor ordenado é: \n");
  
  for(int i = 0; i < quant; i++)
  {
    printf("%.2f ", ponteiro[i]);
  }
  
  free(ponteiro);
  return 0;
  }