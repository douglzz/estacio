#include <stdio.h>

#define TAM 10       // Tamanho do tabuleiro
#define TAM_NAV 3    // Tamanho dos navios
#define NAVIO 3      // Valor que representa um navio no tabuleiro
#define PODER 1      // Valor que representa um poder especial no tabuleiro

int main()
{
    int tabuleiro[TAM][TAM];

    // Inicializa o tabuleiro 10x10 com água (valor 0)
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Cabeçalho de colunas (letras A-J)
    char letras[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    printf("   ");
    for (int i = 0; i < TAM; i++) {
        printf("\033[1;31m%c\033[0m  ", letras[i]);
    }
    printf("\n");

    // Posiciona navio diagonal (3 células)
    for (int i = 0; i < TAM_NAV; i++) {
        tabuleiro[0 + i][9 - i] = NAVIO;
    }

    // Posiciona navio horizontal (3 células)
    for (int i = 0; i < TAM_NAV; i++) {
        tabuleiro[0][6 + i] = NAVIO;
    }

    // Posiciona navio vertical (3 células)
    for (int i = 0; i < TAM_NAV; i++) {
        tabuleiro[3 - i][9] = NAVIO;
    }

    // Super poder em formato de cone (1)
    int cone[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}
    };

    int linhaConeInicial = 7;  // Linha inicial do cone
    int colunaConeInicial = 1; // Coluna inicial do cone

    // Posiciona o cone no tabuleiro
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (linhaConeInicial + i < TAM && colunaConeInicial + j < TAM) {
                tabuleiro[linhaConeInicial + i][colunaConeInicial + j] = cone[i][j];
            }
        }
    }

    // Super poder em formato de octaedro (1)
    for (int i = 0; i < NAVIO; i++) {       // 3 linhas
        for (int j = 0; j < NAVIO; j++) {   // 3 colunas
            if (i == 1) {
                tabuleiro[0 + i][j] = PODER; // Linha central
            } else if (j == 1) {
                tabuleiro[0 + i][j] = PODER; // Coluna central
            }
        }
    }

    // Super poder em formato de cruz (7)
    int cruz[3][5] = {
        {0, 0, 7, 0, 0},
        {7, 7, 7, 7, 7},
        {0, 0, 7, 0, 0},
    };

    int linhaCruzInicial = 3;  // Linha inicial da cruz
    int colunaCruzInicial = 1; // Coluna inicial da cruz

    // Posiciona a cruz no tabuleiro
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (linhaCruzInicial + i < TAM && colunaCruzInicial + j < TAM) {
                tabuleiro[linhaCruzInicial + i][colunaCruzInicial + j] = cruz[i][j];
            }
        }
    }

    // Imprime as colunas e o tabuleiro
    for (int i = 0; i < TAM; i++) {
        printf("\033[1;31m%2d\033[0m ", i + 1); // Numeração das linhas
        for (int j = 0; j < TAM; j++) {
            printf("%d  ", tabuleiro[i][j]); // Valores do tabuleiro
        }
        printf("\n");
    }

    return 0;
}