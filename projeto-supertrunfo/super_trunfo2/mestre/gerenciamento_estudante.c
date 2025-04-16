#include <stdio.h>

int main() {

  int opcao;
  float nota1, nota2, media;

  // menu de escolhas
  printf("Menu de Gerenciamento de estudante\n \n");
  printf("[1] - Calcular Média\n");
  printf("[2] - Determinar Status\n");
  printf("[3] - Sair\n \n");
  printf("Escolha uma opção: ");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
    printf("Calcular a Média\n \n");
    printf("Digite a Primeira Nota: \n");
    scanf("%f", &nota1);
    printf("Digite a Segunda Nota: \n");
    scanf("%f", &nota2);

    // calculando média
    media = (nota1 + nota2) / 2;

    if ((nota1 >=0 && nota1 <= 10) && (nota2 >=0 && nota2 <= 10))
    {
      printf("A sua média é: %.2f\n", media);
    } else {
      printf("Entrada incorreta! \nAs notas tevem ser maiores ou igual a 0 e menores ou igual a 10!");
    }
    break;

  case 2:
    printf("\nDeterminar Status\n \n");
    printf("digite a média: ");
    scanf("%f", &media);

    if (media >= 7) {
      printf("Aprovado!"); 
    } else if (media >= 5) {
      printf("Recuperação!"); 
    } else {
      printf("Reprovado!"); 
    }
    break;

  case 3:
    printf("Você saiu!\n");
    break;
  
  default:
    printf("Opção Inválida!");
    break;
  }
}