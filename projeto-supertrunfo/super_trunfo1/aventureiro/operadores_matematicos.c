#include <stdio.h>

int main(){

  int n1, n2;
  int soma, sub, div, mult;

  printf("Entre com o número 1: ");
  scanf("%d", &n1);
  printf("Entre com o número 2: ");
  scanf("%d", &n2);

  soma = n1 + n2;
  sub = n1 - n2;
  div = n1 / n2;
  mult = n1 * n2;

  printf("A soma é: %d\n", soma);
  printf("A subtração é: %d\n", sub);
  printf("A divisão é: %d\n", div);
  printf("A multiplicação é: %d", mult);

}