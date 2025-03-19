#include <stdio.h>

int main(){

  //dados da primeira carta
  char estado1[25];
  char codigo1[20];
  char cidade1[20];
  int populacao1;
  float area1;
  float pib1;
  int pt1; //pontos turísticos

  //--------------------------//

  //dados da segunda carta
  char estado2[25];
  char codigo2[20];
  char cidade2[20];
  int populacao2;
  float area2;
  float pib2;
  int pt2; //pontos turísticos

  //--------------------------//

  float d_populacional1, pp_capita1, d_populacional2, pp_capita2;

  //------------------------------------//

  printf("\n//-------carta 1--------//\n");

  printf("Nome do Estado: ");
  scanf(" %s", estado1);

  printf("Codigo da Carta: ");
  scanf("%s", codigo1);

  printf("Nome da Cidade: ");
  scanf("%s", cidade1);

  printf("Digite a População: ");
  scanf("%d", &populacao1);

  printf("Digite a Area (km²): ");
  scanf("%f", &area1);

  printf("Digite o PIB: ");
  scanf("%f", &pib1);
  
  printf("Quantos Pontos Turisticos: ");
  scanf("%d", &pt1);
  printf("//-------carta 1--------//\n");

  //---------------------------------//

  printf("\n//-------carta 2--------//\n");

  printf("Nome do Estado: ");
  scanf(" %s", estado2);

  printf("Codigo da Carta: ");
  scanf("%s", codigo2);

  printf("Nome da Cidade: ");
  scanf("%s", cidade2);

  printf("Digite a População: ");
  scanf("%d", &populacao2);

  printf("Digite a Area (km²): ");
  scanf("%f", &area2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  
  printf("Quantos Pontos Turisticos: ");
  scanf("%d", &pt2);
  printf("//-------carta 2--------//\n");

  //-------------- RESULTADO --------------//

  printf("\nResultado da Primeira Carta\n");
  printf("Estado: %s\nCodigo: %s\nCidade: %s\nPopulação: %d\nArea: %.3f\nPIB: %.3f\nPontos Turisticos: %d\n \n", estado1, codigo1, cidade1, populacao1, area1, pib1, pt1);

  d_populacional1 = populacao1 / area1; // calculando a densidade populacional
  pp_capita1 = pib1 / populacao1; // calculando o pib per capita

  printf("Densidade Populacional: %.2f\n", d_populacional1);
  printf("PIB Per Capita: %.2f\n \n", pp_capita1);

  printf("Resultado da Segunda Carta\n");
  printf("Estado: %s\nCodigo: %s\nCidade: %s\nPopulação: %d\nArea: %.3f\nPIB: %.3f\nPontos Turisticos: %d\n \n", estado2, codigo2, cidade2, populacao2, area2, pib2, pt2);

  d_populacional2 = populacao2 / area2; // calculando a densidade populacional
  pp_capita2 = pib2 / populacao2; // calculando o pib per capita

  printf("Densidade Populacional: %.2f\n", d_populacional2);
  printf("PIB Per Capita: %.2f\n \n", pp_capita2);

  return 0;
} 