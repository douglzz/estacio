#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

  int escolhaJogador, escolhaComputador;
  printf("************************\n");
  printf("*        JOKENPO       *\n");
  printf("************************\n \n");

  printf("1 | Pedra \n");
  printf("2 | Papel \n");
  printf("3 |Tesoura\n \n");
  printf("Escolha uma opção: ");
  scanf("%d", &escolhaJogador);
  printf("\n");

  srand(time(0));
  escolhaComputador = rand() % 3 + 1;

  switch (escolhaJogador)
  {

  case 1:
  printf("Jogador - Pedra 🗻\n");
  break;
  case 2:
  printf("Jogador - Papel 📃\n");
  break;
  case 3:
  printf("Jogador - Tesoura ✂\n");
  break;
  default:
  printf("Opção invalida!\n");
  break;

}

switch (escolhaComputador)
{

  case 1:
  printf("Computador - Pedra 🗻\n");
  break;
  case 2:
  printf("Computador - Papel 📃\n");
  break; 
  case 3:
  printf("Computador - Tesoura ✂\n");
  break;
  }

  if (escolhaComputador == escolhaJogador)
  {
    printf("> Empatou");
  } 

  else if ((escolhaJogador == 1) && (escolhaComputador == 3) || (escolhaJogador == 2) && (escolhaComputador == 1) || (escolhaJogador == 3) && (escolhaComputador == 2))
  {
    printf("Jogador Ganhou");
  } else {
    printf("Computador Ganhou");
  }
  
}
