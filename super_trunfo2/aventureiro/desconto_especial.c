#include <stdio.h>

int main() {

  int idade, dependentes;
  float renda;

  // coleta de dados
  
  printf("Digite a idade: ");
  scanf("%d", &idade);
  
  printf("Digite a renda mensal: ");
  scanf("%f", &renda);
  
  printf("Digite o numero de dependentes: ");
  scanf("%d", &dependentes);
  
  
  
  if (idade < 18 || idade > 59) {

    if (renda <= 1600) {
      
      if (dependentes <= 2) {
        printf("Parabens! Você ganhou o desconto!");
      } else if {
        printf("Dependentes a mais que o permitido.");
      }
      
    } else if {
      printf("Sua renda mensal não permite o desconto!\n");
    }

  } else if {
    printf("Você precisa ser menor que 18 ou maior que 60!\n");
  }
}