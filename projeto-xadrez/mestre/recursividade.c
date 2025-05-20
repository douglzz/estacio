#include <stdio.h>

void recursivo(int numero) {
  if (numero > -1)
  {
    printf(" %d", numero);
    recursivo(numero - 1);
  }

}

int main() {
  int quantidade = 10;
  printf("Contagem regressiva...");
  recursivo(quantidade);
  return 0;
}