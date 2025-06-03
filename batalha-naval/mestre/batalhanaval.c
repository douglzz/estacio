#include <stdio.h>

#define LINHA 10
#define COLUNA 10
#define DIAGONAL 2
#define VERTICAL 2
#define HORIZONTAL 2

int main()
{

  int tabuleiro[LINHA][COLUNA];

  for(int i = 0; i < LINHA; i++)
    for(int j = 0; j < COLUNA; j++)
      tabuleiro[i][j] = 0;

      
      // cabeçalho de colunas
      char letras[] = {'A','B','C','D','E','F','G','H','I','J'};
      printf("   ");
      for(int i = 0; i < LINHA; i++) {
        printf("\033[1;31m%c\033[0m  ", letras[i]);
      }
      printf("\n");

      for(int i = 0; i < DIAGONAL; i++) {
        tabuleiro[i][i] = 3;
      }
      
      for(int i = 0; i < VERTICAL; i++) {
        tabuleiro[7][7+i] = 3;
        tabuleiro[i+5][5] = 3;
      }

      // imprime as colunas e o tabuleiro
      for(int i = 0; i < LINHA; i++) {
        printf("\033[1;31m%2d\033[0m ", i + 1);
        for(int j = 0; j < COLUNA; j++) {
          printf("%d  ", tabuleiro[i][j]);
      }
      printf("\n");
    }
  
  return 0;
} 