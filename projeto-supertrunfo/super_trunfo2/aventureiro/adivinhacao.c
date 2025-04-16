#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){ 

  int opcao, numeroSecreto, palpite;

  printf("1. Jogar\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: ");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
    srand(time(0));
    numeroSecreto = rand() % 10;
    printf("----------------------------------\n");
    printf("Adivinhe o número entre 0 e 9: ");
    scanf("%d", &palpite);
    printf("----------------------------------\n");
    
    if (palpite == numeroSecreto) {
      printf("Parabéns você acertou!!!\nO numero secreto era: %d", numeroSecreto);
    } else if {
      printf("Você errou...\nO numero secreto era: %d", numeroSecreto);
    }
  break;

  case 2:
    printf("Regras do jogo... \n");
  break;

  case 3:
    printf("Saindo do jogo... \n");
  break;
  
  default:
  printf("Opção invalida... \n");
  break;
  }
  
}