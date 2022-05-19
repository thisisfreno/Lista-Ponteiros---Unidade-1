#include <stdlib.h>
#include <stdio.h>


//Função para comparar dois termos
int compara(const void *a, const void *b)
{  
  return (*(float*)a - *(float*)b);
}

//Função de comparação para ordenar valores, define as saídas para a função principal
int ordena(const void *a, const void *b)
{
  //Condições de comparação: termo maior, termo menor ou termos iguais
  if(*(float*)a > *(float*)b)
  {
    return 1; 
  }
  else if(*(float*)b < *(float*)a)
  {
    return -1; 
  }
  else 
  {
    return 0;
  }
}

int main(void) 
{
  //Declaração das variáveis - tamanho vetor, ponteiro para o vetor
  int quant; 
  float *ponteiro;
  
  //Leitura e armazenamento da quantidade de objetos no vetor
  printf("Insira a quantidade de valores do vetor:\n");
  scanf("%d", &quant); 
  
  //alocação dinâmica do vetor
  ponteiro = malloc(quant *sizeof(float)); 


  printf("Digite os valores do vetor:\n");

  //Laço de solicitação de cada valor do vetor
  for(int i = 0; i < quant; i++)
  {
    scanf("%f", &ponteiro[i]);
  }

  printf("\nSeu vetor é: \n");
  for(int i = 0; i < quant; i++)
  {
    printf("%.2f ", ponteiro[i]);
  }
  
//Ordenação de forma crescente dos valores do vetor pela função qsort
  qsort(ponteiro, quant, sizeof(float), compara); 

  printf("\n\nSeu vetor ordenado de forma crescente é:\n");
  for(int i = 0; i < quant; i++)
  {
    printf("%.2f ", ponteiro[i]);
  }

  //Liberação da memória
  free(ponteiro);
  return 0;
}