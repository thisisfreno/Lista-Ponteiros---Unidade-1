#include <stdio.h>
void *soma(int x, int y){
    return x+y;
  }
int main(){
  int a, b, c;
 int (*p) (int,int);
    printf("Informe 2 valores: \n");
    scanf("%d%d", &a, &b);
  p = soma;
  printf("A soma dos valores é: %d", p(a,b));
  return 0;
}