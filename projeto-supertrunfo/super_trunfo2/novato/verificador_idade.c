#include <stdio.h>

int main(){

  int idade;

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  if (idade >= 18) { // verifica se é maior ou igual a 18

    printf("Você é maior de idade.\n");
    
  } else { // caso seja menor retornará o print abaixo

    printf("Você não é maior de idade.");

  }
}