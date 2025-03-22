#include <stdio.h>

int main(){
    
    int idade = 20;
    float altura = 1.83;
    char nome[20] = "Douglas";
    char opcao;

    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("a idade é: %d\n", idade);

    printf("Digite a Altura: ");
    scanf("%f", &altura);
    printf("A altura é: %f\n", altura);

    printf("Digite o nome: ");
    scanf("%s", nome);
    printf("O nome é: %s\n", nome);

    printf("Digite a opção: ");
    scanf(" %c", &opcao);
    printf("A opção é: %c", opcao);
    
}

/* %d: Imprime um inteiro no formato decimal.
%i: Equivalente a %d.
%f: Imprime um número de ponto flutuante no formato padrão.
%e: Imprime um número de ponto flutuante na notação científica.
%c: Imprime um único caractere.
%s: Imprime uma cadeia (string) de caracteres.*/