#include <stdio.h>
int main() {
  int inteiros[5] = {10, 20, 30, 40, 50}; // array de numeros inteiros
  float flutuantes[5] = {10.5, 20.5, 30.5, 40.5, 50.5}; // array de numeros flutuantes
  char caracteres[5] = {'A', 'B', 'C', 'D', 'E'}; // array de caracteres
  char *string[5] = {"João", "Maria", "Pedro", "Júlia", "Rafael"}; // array de strings
  printf("> %d\n", inteiros[4]);
  printf("> %.1f\n", flutuantes[4]);
  printf("> %c\n", caracteres[4]);
  printf("> %s\n", string[4]);
  return 0;
}