#include <stdio.h>

int main()
{

  int tabuleiro[10][10];

  for(int i = 0; i < 10; i++)
    for(int j = 0; j < 10; j++)
      tabuleiro[i][j] = 0;

      
      // cabeçalho de colunas
      char letras[] = {'A','B','C','D','E','F','G','H','I','J'};
      printf("   ");
      for(int j = 0; j < 10; j++) {
        printf("%c ", letras[j]);
      }
      printf("\n");

      tabuleiro[3][3] = 3;
      tabuleiro[3][4] = 3;
      tabuleiro[3][5] = 3;
      
      // imprime as colunas e o tabuleiro
      for(int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for(int j = 0; j < 10; j++) {
          printf("%d ", tabuleiro[i][j]);
      }
      printf("\n");
    }
  
  return 0;
}