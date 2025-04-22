#include <stdio.h>

int main() {

  int numero, i;
  printf("Digite o número para calcular-mos a tabuada: ");
  scanf("%d", &numero);
  

  for (i = 0; i <= 10; i++)
  {
    printf("%d x %d = %d\n", i, numero, i * numero);
  }
  

  return 0;
}
