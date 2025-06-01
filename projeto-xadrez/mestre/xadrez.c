#include <stdio.h>

// Função para movimentação da torre
// A torre se move em linha reta (horizontal ou vertical).
void moverTorre(int casas)
{
    if (casas > 0)
    {
        moverTorre(casas - 1); // Chamada recursiva para simular o movimento
        printf("Direita \n"); // Exibe a direção do movimento
        return;
    }
}

// Função para movimentação do bispo
// O bispo se move em diagonal.
void moverBispo(int casas)
{
    if (casas > 0)
    {
        moverBispo(casas - 1); // Chamada recursiva para simular o movimento
        printf("Direita - cima \n"); // Exibe a direção do movimento
        return;
    }
}

// Função para movimentação da rainha
// A rainha combina os movimentos da torre e do bispo.
void moverRainha(int casas)
{
    if (casas > 0)
    {
        moverRainha(casas - 1); // Chamada recursiva para simular o movimento
        printf("Esquerda \n"); // Exibe a direção do movimento
        return;
    }
}

int main()
{
    // Variável para armazenar a escolha da peça
    int pecas;

    // Variável que armazena quantas casas as peças devem andar
    int casas;

    // Exibe o menu de opções para o usuário
    printf("Qual peça deseja mover?\n");
    printf("[1] Torre\n");
    printf("[2] Bispo\n");
    printf("[3] Rainha\n");
    printf("[4] Cavalo\n");

    printf("> ");
    scanf("%d", &pecas); // Lê a escolha do usuário

    if (pecas == 1)
    {
        // Movimento da torre
        printf("Quantas casas deseja mover a torre: ");
        scanf("%d", &casas);
        printf(">-- Torre --<\n");
        moverTorre(casas); // Chama a função para movimentar a torre
        return 0;
    }
    else if (pecas == 2)
    {
        // Movimento do bispo
        for (casas; casas > 0; casas--)
        {
            printf("\nQuantas casas deseja mover o bispo: ");
            scanf("%d", &casas);
            printf(">-- Bispo --<\n");
            moverBispo(casas); // Chama a função para movimentar o bispo
            return 0;
        }
    }
    else if (pecas == 3)
    {
        // Movimento da rainha
        printf("\nQuantas casas deseja mover a rainha: ");
        scanf("%d", &casas);
        printf(">-- rainha --<\n");
        moverRainha(casas); // Chama a função para movimentar a rainha
        return 0;
    }
    else if (pecas == 4)
    {
        // Movimento do cavalo
        printf("\n>-- Cavalo --<\n");
        int movimentoCompleto = 1;
        while (movimentoCompleto--)
        {
            for (int direcao = 0; direcao < 2; direcao++)
            {
                printf("cima\n"); // Movimento em "L" do cavalo
            }
            printf("direita\n");
        }
    }
    else
    {
        // Caso o usuário insira um valor inválido
        printf("valor invalido!");
    }
}