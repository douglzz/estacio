#include <stdio.h>
int main() {

  // array de numeros inteiros
  int inteiros[5] = {10, 20, 30, 40, 50}; 

  // array de numeros flutuantes
  float flutuantes[5] = {10.5, 20.5, 30.5, 40.5, 50.5}; 
  
  // array de caracteres
  char caracteres[5] = {'A', 'B', 'C', 'D', 'E'}; 
  
  // array de strings
  char *string[5] = {"João", "Maria", "Pedro", "Júlia", "Rafael"}; 

  printf("> %d\n", inteiros[4]);
  printf("> %.1f\n", flutuantes[4]);
  printf("> %c\n", caracteres[4]);
  printf("> %s\n", string[4]);
  
  return 0;
}