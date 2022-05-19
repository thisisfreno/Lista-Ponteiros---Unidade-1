#include <stdio.h>
#include <stdlib.h>

int main(){

  char *a[4],*a2;
  int *b[4],*b2;
  float *c[4],*c2;
  double *d[4],*d2;


  a2 = &a;
  b2 = &b;
  c2 = &c;
  d2 = &d;

    printf("Quando a varável é um char:\n ");
    printf("%X ", a2);
    printf("%X ", a2+1);
    printf("%X ", a2+2);
    printf("%X\n", a2+3);

    printf("\nQuando a variável é um int:\n ");
    printf("%X ", b2);
    printf("%X ", b2+1);
    printf("%X ", b2+2);
    printf("%X\n", b2+3);
  
    printf("\nQuando a variável é um float:\n ");
    printf("%X ", c2);
    printf("%X ", c2+1);
    printf("%X ", c2+2);
    printf("%X\n", c2+3);

    printf("\nQuando a variável é um double:\n ");
    printf("%X ", d2);
    printf("%X ", d2+1);
    printf("%X ", d2+2);
    printf("%X\n", d2+3);

  return 0;
}
