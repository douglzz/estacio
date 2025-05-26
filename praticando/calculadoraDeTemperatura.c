#include <stdio.h>

int main()
{
  float graus, resultado;

  for (int opcao; opcao <= 2;)
  {
  printf(">--- Conversor de Temperatura ---<\n");
  printf("[1] - Celsius para Fahrenheit\n");
  printf("[2] - Fahrenheith para Celsius\n");
  printf("[3] - Sair\n");
  printf("Opção desejada: ");
  scanf("%d", &opcao);
  printf("\n");

    switch (opcao)
  {
  case 1:
    printf("Digite em Graus Celsius: ");
    scanf("%f", &graus);
    printf("\n");

    resultado = (graus * 9) / 5 + 32;

    printf("Isso é equivalente a %.1f°F\n\n", resultado);
    break;

  case 2:
  printf("Digite em Graus Farenheith: ");
  scanf("%f", &graus);
  printf("\n");

  resultado = (graus - 32) * 5 / 9;

  printf("Isso é equivalente a %.1f°C\n\n", resultado);
    break;

  default:
    printf("Você saiu!");
    break;
  }
  }
  
}