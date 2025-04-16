#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int jogador, computador, resultado;
  char tipoComparacao;

  // gerando numero aleatorio
  srand(time(0));
  computador = rand() % 100 + 1;

  /*Iniciando o Jogo*/
  printf("Maior, Menor ou Igual?\n");
  printf("[M] - Maior\n");
  printf("[N] - Menor\n");
  printf("[I] - Igual\n \n");

  printf("Digite a escala: ");
  scanf(" %c", &tipoComparacao);

  printf("\n");

  printf("Seu número: ");
  scanf("%d", &jogador);

  printf("O numero do computador é: %d", computador);
  
  printf("\n \n");
  
  switch (tipoComparacao)
  {
  case 'M':
  case 'm':
    if (jogador > computador)
    {
      printf("> Jogador: %d\n", jogador);
      printf("> Computador: %d\n", computador);
      printf("Parabéns, você acertou!\n");
      
    } else if (jogador < computador) {
      printf("> Jogador: %d\n", jogador);
      printf("> Computador: %d\n", computador);
      printf("Você errou, o seu número é menor!\n");

    } else {
      printf("> Jogador: %d\n", jogador);
      printf("> Computador: %d\n", computador);
      printf("Você errou, o seu número é igual!\n");
    }
    
    break;

  case 'N':
  case 'n':
    if (jogador < computador)
    {
      printf("> Jogador: %d\n", jogador);
      printf("> Computador: %d\n", computador);
      printf("Parabéns, você acertou!\n");

    } else if (jogador > computador) {
      printf("> Jogador: %d\n", jogador);
      printf("> Computador: %d\n", computador);
      printf("Você errou, o seu número é maior!\n");
      
    } else {
      printf("> Jogador: %d\n", jogador);
      printf("> Computador: %d\n", computador);
      printf("Você errou, o seu número é igual!\n");
    }
    break;

  case 'I':
  case 'i':
  if (jogador > computador)
  {
    printf("> Jogador: %d\n", jogador);
    printf("> Computador: %d\n", computador);
    printf("Você errou, o seu número é maior!\n");

  } else if (jogador < computador) {
    printf("> Jogador: %d\n", jogador);
    printf("> Computador: %d\n", computador);
    printf("Você errou, o seu número é menor!\n");
    
  } else {
    printf("> Jogador: %d\n", jogador);
    printf("> Computador: %d\n", computador);
    printf("Parabéns, você acertou!\n");
  }
  break;
  
  default:
   printf("Opção de escala inválida!\n");
    break;
  }
}