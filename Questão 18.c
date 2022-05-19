#include <stdlib.h>
#include <stdio.h>

void function(float **Matriz_A, float **Matriz_B, float **Matriz_C, int NCol_A, int NLin_A, int NCol_B)
{
    for(int i = 0; i < NLin_A; i++)
    {
      for(int j = 0; j < NCol_B; j++)
        {
          Matriz_C[i][j]= 0;
          for(int n = 0; n < NCol_A; n++)
          {
            Matriz_C[i][j] = Matriz_C[i][j] + Matriz_A[i][n] * Matriz_B[n][j];
          }
        }
    }
}

int main(void) 
{
void (*funcao)(float**, float**, float **, int, int, int) = function;
float **Mat_A, **Mat_B, **Mat_C;
int NLin_A, NCol_A, NCol_B;

printf("Informe o número de linhas de A:\n");
scanf("%d", &NLin_A);

printf("Informe o número de colunas de A:\n");  
scanf("%d", &NCol_A);

printf("Informe o número de colunas de B:\n");
scanf("%d", &NCol_B);

Mat_A = malloc(NLin_A *sizeof(float*));
Mat_A[0] = malloc(NLin_A * NCol_A *sizeof(float));

for(int i = 1; i < NLin_A; i++)
{
  Mat_A[i] = Mat_A[i-1] + NCol_A;
}

Mat_B = malloc(NCol_A *sizeof(float*));
Mat_B[0] = malloc(NCol_A * NCol_B *sizeof(float));

for(int i = 1; i < NCol_A; i++)
{
  Mat_B[i] = Mat_B[i-1] + NCol_B;
}

Mat_C = malloc(NLin_A *sizeof(float*));
Mat_C[0] = malloc(NLin_A * NCol_B *sizeof(float));

for(int i = 1; i < NLin_A; i++)
{
  Mat_C[i] = Mat_C[i-1] + NCol_B;
}

printf("Insira os valores da Matriz A:\n");

for(int i = 0; i < NLin_A; i++)
{
  for(int j = 0; j < NCol_A; j++)
  {
    scanf("%f", &Mat_A[i][j]);
  }
}

printf("\nInsira os valores da Matriz B:\n");

for(int i = 0; i < NCol_A; i++)
{
  for(int j = 0; j < NCol_B; j++)
  {
    scanf("%f", &Mat_B[i][j]);
  }
}

printf("\nMatriz A:\n");

for(int i = 0; i < NLin_A; i++)
{
  for(int j = 0; j < NCol_A; j++)
  {
    printf("%.2f ", Mat_A[i][j]);
  }
  printf("\n");
}

printf("\nMatriz B:\n");

for(int i = 0; i < NCol_A; i++)
{
  for(int j = 0; j < NCol_B; j++)
  {
    printf("%.2f ", Mat_B[i][j]);
  }
  printf("\n");
}

funcao(Mat_A, Mat_B, Mat_C, NCol_A, NLin_A, NCol_B);

printf("\nMatriz C:\n");

for(int i = 0; i < NLin_A; i++)
{
  for(int j = 0; j < NCol_B; j++)
  {
    printf("%.2f ", Mat_C[i][j]);
  }
  printf("\n");
}
free(Mat_A[0]);
free(Mat_A);

free(Mat_B[0]);
free(Mat_B);

free(Mat_C[0]);
free(Mat_C);  


return 0;
}