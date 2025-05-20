#include <stdio.h>

// movimentação da torre
void moverTorre(int casas)
{
    if (casas > 0)
    {
        moverTorre(casas - 1);
        printf("Direita \n");
        return;
    }
}

// movimentação do bispo
void moverBispo(int casas)
{
    if (casas > 0)
    {
        moverBispo(casas - 1);
        printf("Direita - cima \n");
        return;
    }
}

void moverRainha(int casas) {
    if (casas > 0)
    {
        moverRainha(casas - 1);
        printf("Esquerda \n");
        return;
    }
    
}

int main()
{
    // opção de escolha do switch(opções das peças)
    int pecas;

    // variavel que armazena quantas casas as peças devem andar
    int casas;

    printf("Qual peça deseja mover?\n");
    printf("[1] Torre\n");
    printf("[2] Bispo\n");
    printf("[3] Rainha\n");
    printf("[4] Cavalo\n");
    
    printf("> ");
    scanf("%d", &pecas);
    
    if (pecas == 1)
    {
        // movimentação da torre
        printf("Quantas casas deseja mover a torre: ");
        scanf("%d", &casas);
        printf(">-- Torre --<\n");
        moverTorre(casas);
        return 0;

    } else if (pecas == 2) {
        // movimentação do bispo
        for (casas; casas > 0; casas--)
        {
        printf("\nQuantas casas deseja mover o bispo: ");
        scanf("%d", &casas);
        printf(">-- Bispo --<\n");
        moverBispo(casas);
        return 0;
    }
    
} else if (pecas == 3) {
    printf("\nQuantas casas deseja mover a rainha: ");
    scanf("%d", &casas);
    printf(">-- rainha --<\n");
    moverRainha(casas);
    return 0;
    
} else if (pecas == 4) {
    printf("\n>-- Cavalo --<\n");
    int movimentoCompleto = 1;
    while (movimentoCompleto--)
    {
        for (int direcao = 0; direcao < 2; direcao++)
        {
            printf("cima\n");
        }
        printf("direita\n");
    }
    } else {
        printf("valor invalido!");
    }
    }