#include <stdio.h>

int main() {

  int idade;
  float altura;

  printf("digite a idade: ");
  scanf("%d", &idade);
  
  printf("digite a altura: ");
  scanf("%f", &altura);

  if (idade >=18 && idade <= 35 && altura > 1.70) {

    printf("Você atende aos requisitos!");
    
  } else {

    printf("Você não atende aos requisitos!");
    
  }
}