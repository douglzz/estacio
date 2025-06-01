#include <stdio.h>

int main()
{
  int sinal;
do
{
  printf("[1] - Verde\n");
  printf("[2] - Amarelo\n");
  printf("[3] - Vermelho\n");
  printf("[4] - Sair\n \n");

  printf("Qual a cor do sinal? ");
  scanf("%d", &sinal);

  switch (sinal)
  {
  case 1:
    printf("### Continue dirigindo! ###\n \n");

    break;
  case 2:
    printf("### Reduza a velocidade! ###\n \n");

    break;
  case 3:
    printf("### Pare o carro! ###\n \n");

    break;
  default:
    printf("### Você Saiu! ###\n \n");
    break;
  }

} while (sinal <= 3);
}

/*esse código é para treinar estrutura de repetição e decisão*/
/*é um programa no qual o usuário esta dirigindo um carro
e ele deve parar quando o sinal estiver vermelho*/