#include <stdio.h>

int main() {
    int torre = 1, bispo = 1, rainha;

    //MOVIMENTAÇÃO DA TORRE
    while (torre <= 5)
    {
        printf("direita\n");
        torre++;
    }
    
    printf("\n");
    
    //MOVIMENTAÇÃO DO BISPO
    do
    {
        printf("direita - cima\n");
        bispo++;
    } while (bispo <= 5);
    
    printf("\n");
    
    //MOVIMENTAÇÃO DA RAINHA
    for (rainha = 1; rainha <= 7; rainha++)
    {
        printf("esquerda\n");
    }
}

