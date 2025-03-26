#include <stdio.h>

int main(){

  float temperatura, umidade;
  unsigned int estoque, estoqueMin = 1000;

  printf("Qual é a temperatura? ");
  scanf("%f", &temperatura);

  printf("Qual é a umidade? ");
  scanf("%f", &umidade);

  printf("Qual é o estoque? ");
  scanf("%u", &estoque);

  if (temperatura > 35) {
    printf("> Temperatura fora dos parâmetros!!! \n");
  } else {
    printf("> Temperatura normal. \n");
  }
  
  if (umidade > 50) {
    printf("> Umidade fora dos parâmetros!!! \n");
  } else {
    printf("> Umidade normal. \n");
  }

  if (estoque <= estoqueMin) {
    printf("> O estoque está baixo do mínimo!!! \n");
  } else {
    printf("> Estoque normal. \n");
  }
  
}