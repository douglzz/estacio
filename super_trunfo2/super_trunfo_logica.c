#include <stdio.h>

int main(){

  //dados da primeira carta
  char estado1[50];
  char codigo1[50];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pt1; //pontos turísticos
  float superpower1;

  //--------------------------//

  //dados da segunda carta
  char estado2[50];
  char codigo2[50];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pt2; //pontos turísticos
  float superpower2;

  //--------------------------//

  //variaveis sobre a densidade e pib
  float d_populacional1, pp_capita1, d_populacional2, pp_capita2, dp_inverso1, dp_inverso2;

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
  scanf("%s", estado2);
  
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


  d_populacional1 = populacao1 / area1; // calculando a densidade populacional
  pp_capita1 = pib1 / populacao1; // calculando o pib per capita
  dp_inverso1 = 1 / d_populacional1; // inverso da densidade populacional

  // mais repetidos
  
  d_populacional2 = populacao2 / area2;
  pp_capita2 = pib2 / populacao2; 
  dp_inverso2 = 1 / d_populacional2; 

  printf("%d", d_populacional1 < d_populacional2);

  // somando as variaveis ao super poder
  
  superpower1 = (float)(populacao1 + area1 + pib1 + pt1 +d_populacional1 + pp_capita1);
  superpower2 = (float)(populacao2 + area2 + pib2 + pt2 +d_populacional2 + pp_capita2);
  
  
  printf("----------------------------------------\n");
  printf("----------------------------------------\n");
  
  // resultados da primeira carta
  
  printf("\nResultado da Primeira Carta\n");
  printf("Estado: %s\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Area: %.3f\n", area1);
  printf("PIB: %.3f\n", pib1);
  printf("Pontos Turisticos: %d\n \n", pt1);
  printf("Densidade Populacional: %.2f\n", d_populacional1);
  printf("PIB Per Capita: %.2f\n \n", pp_capita1);
  printf("Super Poder: %.2f\n", superpower1);
  
  printf("----------------------------------------\n");
  printf("----------------------------------------\n");
  
  // resultados da segunda carta

  printf("Resultado da Segunda Carta\n");
  printf("Estado: %s\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Area: %.3f\n", area2);
  printf("PIB: %.3f\n", pib2);
  printf("Pontos Turisticos: %d\n \n", pt2);
  printf("Densidade Populacional: %.2f\n", d_populacional2);
  printf("PIB Per Capita: %.2f\n \n", pp_capita2);
  printf("Super Poder: %.2f\n", superpower2);
  
  printf("----------------------------------------\n");
  printf("----------------------------------------\n");
  
  printf("\nCOMPARAÇÃO DAS CARTAS\n");
  
  //comparação das cartas usando estrutura de decisão simples
  
  if (populacao1 > populacao2) {
    printf("População: Carta 1 venceu: %d\n", populacao1 );  
  } else {
    printf("População: Carta 2 venceu: %d\n", populacao2);
  }

  if (area1 > area2) {
    printf("Área: Carta 1 venceu: %.2f\n", area1);
  } else {
    printf("Área: Carta 2 venceu: %.2f\n", area2);
  }

  if (pib1 > pib2) {
    printf("PIB: Carta 1 venceu: %.2f\n", pib1);
  } else {
    printf("PIB: Carta 2 venceu: %.2f\n", pib2);
  }

  if (pt1 > pt2) {
    printf("Pontos Turísticos: Carta 1 venceu: %d\n", pt1);
  } else {
    printf("Pontos Turísticos: Carta 2 venceu: %d\n", pt2);
  }

  if (dp_inverso1 < dp_inverso2) {
    printf("Densidade Populacional: Carta 1 venceu: %.2f\n", dp_inverso1);
  } else {
    printf("Densidade Populacional: Carta 2 venceu: %.2f\n", dp_inverso2);
  }

  if (pp_capita1 > pp_capita2) {
    printf("PIB Per Capita: Carta 1 venceu: %.2f\n", pp_capita1);
  } else {
    printf("PIB Per Capita: Carta 2 venceu: %.2f\n", pp_capita2);
  }
  
  if ((int) superpower1 > superpower2) {
    printf("Super Poderes: Carta 1 venceu: %dS\n", (int) superpower1);
  } else {
    printf("Super Poderes: Carta 2 venceu: %d\n", (int) superpower2);
  }

  return 0;
} 