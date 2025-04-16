#include <stdio.h>

int main(){

  float numero1, numero2;

  printf("Digite o primeiro número: ");
  scanf("%f", &numero1);
  
  printf("Digite o segundo número: ");
  scanf("%f", &numero2);

  if (numero1 > numero2) {

    printf("o maior número é: %.2f\n", numero1); 

  } 
    
  else if (numero2 > numero1) {
    
    printf("o maior número é: %.2f\n", numero2); 
      
  } 

  else {
    
    printf("Os números são iguais.");
    
  }
}