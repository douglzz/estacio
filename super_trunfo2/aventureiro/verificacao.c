#include <stdio.h>

int main() {

  int idade;

  printf("\n \n \n \ndigite sua idade: ");
  scanf("%d", &idade);

  if (idade <= 12) {
    printf("você é uma criança!\n");
  } 

  else if (idade >= 13 && idade <= 17) {
    printf("você é um adolescente!\n");
  }

  else if (idade >= 18 && idade <= 59) {
    printf("você é um adulto!");
  }
  
  else {
    printf("você é um idoso!");
  }
  
}