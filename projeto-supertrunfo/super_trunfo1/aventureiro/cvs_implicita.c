#include <stdio.h>

int main(){

  int a = 10;
  float b = 3.5;
  float result = a + b;

  printf("Resultado: %.2f", result);  // 'a' é convertido implicitamente para float

}