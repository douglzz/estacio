#include <stdio.h>

int main(){

  char produtoA[30];
  char produtoB[30];

  //registro do nome dos produtos
  printf("Digite o nome do primeiro produto: \n");
  scanf("%s", produtoA);
  
  printf("Digite o nome do segundo produto: \n");
  scanf("%s", produtoB);

  //registro do estoque dos produtos
  unsigned int estoqueA;
  unsigned int estoqueB;

  printf("Qual é o estoque do produto %s? \n", produtoA);
  scanf("%u", &estoqueA);
  
  printf("Qual é o estoque do produto %s? \n", produtoB);
  scanf("%u", &estoqueB);
  
  //registro do estoque mínimo dos produtos
  unsigned int estoqueMinimoA;
  unsigned int estoqueMinimoB;
  
  printf("Qual é o estoque mínimo do produto %s? \n", produtoA);
  scanf("%u", &estoqueMinimoA);
  
  printf("Qual é o estoque mínimo do produto %s? \n", produtoB);
  scanf("%u", &estoqueMinimoB);
  
  //valor unitário do produto
  float valorA;
  float valorB;
  
  printf("Qual é o valor do produto %s? \n", produtoA);
  scanf("%f", &valorA);
  printf("Qual é o valor do produto %s? \n", produtoB);
  scanf("%f", &valorB);
  

  //valor total dos produtos
  double valorTotalA;
  double valorTotalB;

  valorTotalA = valorA * estoqueA;
  valorTotalB = valorB * estoqueB;
  

  printf("----------------------------------------\n");
  printf("----------------------------------------\n");

  printf("O valor total do produto %s é: %.2f\n", produtoA, valorTotalA);
  printf("O valor total do produto %s é: %.2f\n", produtoB, valorTotalB);

  //variavel do resultado de comparação de valores
  int resultadoA, resultadoB;

  //informações dos produtos
  
  printf("O produto %s tem %u unidades em estoque, com o valor unitário de R$%.2f\n", produtoA, estoqueA, valorA);
  printf("O produto %s tem %u unidades em estoque, com o valor unitário de R$%.2f\n", produtoB, estoqueB, valorB);

  printf("----------------------------------------\n");
  printf("----------------------------------------\n");
  
  //comparação com o valor minímo de estoque
  resultadoA = estoqueA > estoqueMinimoA;
  resultadoB = estoqueB > estoqueMinimoB;
  printf("O produto %s tem estoque minímo? %u\n", produtoA, resultadoA);
  printf("O produto %s tem estoque minímo? %u\n", produtoB, resultadoB);

  printf("----------------------------------------\n");
  printf("----------------------------------------\n");

  printf("O valor total do produto %s (R$%.2f) é maior que o valor total do produto %s (R$%.2f)? %d",produtoA, (estoqueA * valorA), produtoB, (estoqueB * valorB), (estoqueA * valorA) > (estoqueB * valorB));
}