#include <stdio.h>

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
  printf("\ni = %d",i);
  printf("vet[%d] = %.1f",i, vet[i]);
  printf("*(f + %d) = %.1f",i, *(f+i));
  printf("&vet[%d] = %X",i, &vet[i]);
  printf("(f + %d) = %X",i, f+i);
  }
}

/*Respostas esperadas:
I=0
vet[0] = 1.1
*(f + 0) = 1.1
&vet[0] = Endereço do vetor[0];
(f + 0) = Endereço do vetor [0];

I=1
vet[1] = 2.2
*(f + 1) = 2.2
&vet[1] = Endereço do vetor[1];
(f + 1) = Endereço do vetor [1];

I=2
vet[2] = 3.3
*(f + 2) = 3.3
&vet[2] = Endereço do vetor[2];
(f + 2) = Endereço do vetor [2];

I=3
vet[3] = 4.4
*(f + 3) = 4.4
&vet[3] = Endereço do vetor[3];
(f + 3) = Endereço do vetor [3];

I=4
vet[4] = 5.5
*(f + 4) = 5.5
&vet[4] = Endereço do vetor[4];
(f + 4) = Endereço do vetor [4];

Após executar o programa, os valores impressos coincidiram com as respostas esperadas.*/
