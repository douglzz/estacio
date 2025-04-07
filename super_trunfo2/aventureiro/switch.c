#include <stdio.h>

int main() {

  int opcao;

  printf("Selecione uma das Opções:\n");
  printf("1. Pedra\n");
  printf("2. Papel\n");
  printf("3. Tesoura\n");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
    printf("Seu saldo é de 1500");
  break;

  case 2:
    printf("Quanto deseja depositar?");
  break;
  
  case 3:
    printf("Quanto deseja sacar?");
  break;
  
  default:
      printf("4!");
  break;
  }
  
  
}