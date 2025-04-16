#include <stdio.h>

int main(){

  float nota1, nota2, nota3, soma;
  float media;

  printf("\n----- SOMA DA MEDIA -----\n \n");

  printf("Digite a nota do primeiro bimestre: ");
  scanf("%f", &nota1);

  printf("Digite a nota do segundo bimestre: ");
  scanf("%f", &nota2);

  printf("Digite a nota do terceiro bimestre: ");
  scanf("%f", &nota3);

  printf("\n----- RESULTADOS -----\n \n");

  //conversão de tipo usando cast
  media = (float)(nota1 + nota2 + nota3) / 3;
  soma = nota1 + nota2 + nota3;

  printf("1° bimestre: %.1f\n", nota1);
  printf("2° bimestre: %.1f\n", nota2);
  printf("3° bimestre: %.1f\n", nota3);

  printf("\n----- CALCULOS -----\n \n");

  printf("Soma: %.1f\n", soma);
  printf("Media: %.1f\n", media);

  return 0;
}