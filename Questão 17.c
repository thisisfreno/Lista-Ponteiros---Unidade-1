#include <stdio.h>
#include <stdlib.h>

void VetorSoma(float vetor_1[], float vetor_2[], float vetor_3[], int tamanho)
{
  for(int i = 0; i < tamanho; i++)
  {
    vetor_3[i]= vetor_1[i] + vetor_2[i];
  }
  
  for(int i = 0; i < tamanho; i++)
  {
    printf("%.2f ",vetor_3[i]);
  }
}
int main() 
{
  int tamanho_vetor;
  float *vetor_1, *vetor_2;
  float *vetor_3 = 0;
  
  printf("Informe o tamanho dos vetores:\n");
  
  void (*p)(float*, float*, float*, int) = VetorSoma;
  
  scanf("%i",&tamanho_vetor);
  
  vetor_1 = malloc(tamanho_vetor * sizeof(float));
  
  vetor_2 = malloc(tamanho_vetor * sizeof(float));
  
  vetor_3 = malloc(tamanho_vetor * sizeof(float));
  
  printf("Informe os valores do vetor 1: \n");
    for(int i = 0; i < tamanho_vetor; i++)
    {
      scanf("%f", &vetor_1[i]);
    }
  printf("O vetor 1 é igual a: \n"); 
  for (int i = 0; i < tamanho_vetor; i++)
    {
      printf("%.2f ", vetor_1[i]);
    }
  printf("\nInforme os valores do vetor 2:\n");
    for(int i = 0; i < tamanho_vetor; i++)
    {
      scanf("%f", &vetor_2[i]);
    }
  printf("O vetor 2 é igual a: \n"); 
  for (int i = 0; i < tamanho_vetor; i++)
    {
      printf("%.2f ", vetor_2[i]);
    }
  printf("\n O vetor soma é: \n");
  p(vetor_1, vetor_2, vetor_3, tamanho_vetor);
    
  free(vetor_1);
  free(vetor_2);
  free(vetor_3);
}