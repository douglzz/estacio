#include <stdio.h>

int main() {

  int idade = 17;
  int resultado;
  
 resultado = idade >= 18 ? 1 : 0;

 if (resultado == 1) {
   printf("Maior de Idade!");
  } else {
    printf("Menor de Idade!");
  }
  
}