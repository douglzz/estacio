#include <stdio.h>

#define linha 10
#define coluna 10
#define diagonal 3
#define vertical 2
#define horizontal 2

int main() {

  int tabuleiro[linha][coluna];

  for(int i = 0; i < linha; i++)
    for(int j = 0; j < coluna; j++)
      tabuleiro[i][j] = 0;

      
      // cabeçalho de colunas
      char letras[] = {'A','B','C','D','E','F','G','H','I','J'};
      printf("   ");
      for(int i = 0; i < linha; i++) {
        printf("\033[1;31m%c\033[0m  ", letras[i]);
      }
      printf("\n");

      for(int i = 0; i < diagonal; i++) {
        tabuleiro[i][i] = 3; 
      }
      
      for(int i = 0; i < vertical; i++) {
        tabuleiro[6][6+i] = 3;
      }
      
      for(int i = 0; i < horizontal; i++) {
        tabuleiro[i+8][8] = 3;
      }

      // imprime as colunas e o tabuleiro
      for(int i = 0; i < linha; i++) {
        
        printf("\033[1;31m%2d\033[0m ", i + 1);
        for(int j = 0; j < coluna; j++) {
          printf("%d  ", tabuleiro[i][j]);
      }
      printf("\n");
    }
  
  return 0;
} 