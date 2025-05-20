#include <stdio.h>

int main()
{

  int sinal;
  printf("[1] - Verde\n");
  printf("[2] - Amarelo\n");
  printf("[3] - Vermelho\n");
  printf("[4] - Sair\n \n");

  for (sinal; sinal <= 3;)
  {
    printf("Qual a cor do sinal? ");
    scanf("%d", &sinal);

    printf("\n");

    if (sinal == 1)
    {
      printf("### Continue dirigindo! ###\n \n");
    }
    else if (sinal == 2)
    {
      printf("### Reduza a velocidade! ###\n \n");
    }
    else if (sinal == 4)
    {
      printf("### Você Saiu! ###\n \n");
    }
    else
    {
      printf("### Pare o carro! ###\n \n");
    }

    if (sinal == 1 || sinal == 2 || sinal == 3)
    {
      printf("[1] - Verde\n");
      printf("[2] - Amarelo\n");
      printf("[3] - Vermelho\n");
      printf("[4] - Sair\n \n");
    }
  }

  return 0;
}
/*esse código é para treinar estrutura de repetição e decisão*/
/*é um programa no qual o usuário esta dirigindo um carro
e ele deve parar quando o sinal estiver vermelho*/