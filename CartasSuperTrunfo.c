#include <stdio.h>

// Desafio Super Trunfo - Países

int main(){
  /*
  Divisão (/)
  */
  char estado1[5], estado2[8];
  char codigo1[4], codigo2[6];
  char nome1[20], nome2[20];
  int populacao1, populacao2;
  int turismo1, turismo2;
  float area1, area2;
  float pib1, pib2;
  float densidade1, densidade2, percapita1, percapita2;

  //Código fonte Carta1 
  
  printf("Carta1:\n");
  printf("Estado: \n");
  scanf("%s", &estado1);

  printf("Código: \n");
  scanf("%s", &codigo1);

  printf("Nome da Cidade: \n");
  scanf("%s", &nome1);

  printf("População: \n");
  scanf("%d", &populacao1);
  
  printf("Área: \n");
  scanf("%f", &area1);

  printf("PIB: \n");
  scanf("%f", &pib1);

  printf("Número de Pontos Turísticos: \n");
  scanf("%d", &turismo1);

  //Formula Densidade Populacional e PIB per Capita Carta 1

  densidade1 = populacao1 / area1;
  percapita1 = pib1 / populacao1;

  printf("\n");

  //Código fonte Carta2
  
  printf("Carta2:\n");

  printf("Estado: \n");
  scanf("%s", &estado2);

  printf("Código: \n");
  scanf("%s", &codigo2);

  printf("Nome da Cidade: \n");
  scanf("%s", &nome2);

  printf("População: \n");
  scanf("%d", &populacao2);
  
  printf("Área: \n");
  scanf("%f", &area2);

  printf("PIB: \n");
  scanf("%f", &pib2);

  printf("Número de Pontos Turísticos: \n");
  scanf("%d", &turismo2);

  //Formula Densidade Populacional e PIB per Capita Carta 2

  densidade2 = populacao2 / area2;
  percapita2 = pib2 / populacao2;

  printf("\n");

  //Print carta 1

  printf("Carta1\n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nome1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2fkm²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", turismo1);
  printf("Densidade Populacional: %.2f\n", densidade1);
  printf("PIB per Capita: %.2f\n", percapita1);
  printf("\n");

  //Print Carta 2

  printf("Carta2\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nome2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2fkm²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", turismo2);
  printf("Densidade Populacional: %.2f\n", densidade2);
  printf("PIB per Capita: %.2f\n", percapita2);

  return 0;

}


