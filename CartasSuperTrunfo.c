#include <stdio.h>

// Desafio Super Trunfo - Cartas Países

int main(){
  /*
  divisao (/)
  soma (+)
  */
  char estado1[3], estado2[3];
  char codigo1[4], codigo2[6];
  char nome1[20], nome2[20];
  unsigned long int populacao1, populacao2;
  int turismo1, turismo2;
  float area1, area2;
  float pib1, pib2;
  float densidade1, densidade2, percapita1, percapita2;
  float superpoder1, superpoder2;

  //Código fonte Carta1 
  
  printf("Carta1:\n");
  printf("Estado: \n");
  scanf("%s", &estado1);

  printf("Código: \n");
  scanf("%s", &codigo1);

  printf("Nome da Cidade: \n");
  scanf("%s", &nome1);

  printf("População: \n");
  scanf("%lu", &populacao1);
  
  printf("Área: \n");
  scanf("%f", &area1);

  printf("PIB: \n");
  scanf("%f", &pib1);

  printf("Número de Pontos Turísticos: \n");
  scanf("%d", &turismo1);

  //Formula Densidade Populacional e PIB per Capita Carta 1

  densidade1 = populacao1 / area1;

  percapita1 = pib1 / populacao1;

  //Formula soma dos atributos numéricos Carta 1

  superpoder1 = (float) populacao1 + area1 + pib1 + turismo1 + 1 / densidade1 + percapita1;

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
  scanf("%lu", &populacao2);
  
  printf("Área: \n");
  scanf("%f", &area2);

  printf("PIB: \n");
  scanf("%f", &pib2);

  printf("Número de Pontos Turísticos: \n");
  scanf("%d", &turismo2);

  //Formula Densidade Populacional e PIB per Capita Carta 2

  densidade2 = populacao2 / area2;

  percapita2 = pib2 / populacao2;

  //Formula soma dos atributos numéricos Carta 2

  superpoder2 = (float) populacao2 + area2 + pib2 + turismo2 + 1 / densidade2 + percapita2;

  //Print Carta 1

  printf("\n");
  
  printf("Carta1\n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nome1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2fkm²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", turismo1);
  printf("Densidade Populacional: %.2f\n", densidade1);
  printf("PIB per Capita: %.2f\n", percapita1);
  printf("Super Poder: %.2f\n", superpoder1);
  printf("\n");
  
  //Print Carta 2

  printf("Carta2\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nome2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2fkm²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", turismo2);
  printf("Densidade Populacional: %.2f\n", densidade2);
  printf("PIB per Capita: %.2f\n", percapita2);
  printf("Super Poder: %.2f\n", superpoder2);
  printf("\n");
  
  //Comparação das Cartas

  printf("Resultado = 1, Carta 1 vence\n");
  printf("Resultado = 0, Carta 2 vence\n");
  printf("\n");
  printf("População: %d\n", populacao1 > populacao2);
  printf("Área: %d\n", area1 > area2);
  printf("PIB: %d\n", pib1 > pib2);
  printf("Número de Pontos Turísticos: %d\n", turismo1 > turismo2);
  printf("Densidade Populacional: %d\n", densidade1 < densidade2);
  printf("PIB per Capita: %d\n", percapita1 > percapita2);
  printf("Super Poder: %d\n", superpoder1 > superpoder2);
  printf("\n");

  //Mostrando a Carta vencedora

  if(populacao1 > populacao2){
    printf("População - Carta 1 venceu: %lu\n", populacao1);
  } else{
    printf("População - Carta 2 venceu: %lu\n", populacao2);
  }
  if(area1 > area2){
    printf("Área - Carta 1 venceu: %.2f\n", area1);
  } else{
    printf("Área - Carta 2 venceu: %.2f\n", area2);
  }
  if(pib1 > pib2){
    printf("PIB - Carta 1 venceu: %.2f\n", pib1);
  } else{
    printf("PIB - Carta 2 venceu: %.2f\n", pib2);
  }
  if(turismo1 > turismo2){
    printf("Pontos Turísticos - Carta 1 venceu: %d\n", turismo1);
  } else{
    printf("Pontos Turísticos - Carta 2 venceu: %d\n", turismo2);
  }
  if(densidade1 < densidade2){
    printf("Densidade Populacional - Carta 1 venceu: %.2f\n", densidade1);
  } else{
    printf("Densidade Populacional - Carta 2 venceu: %.2f\n", densidade2);
  }
  if(percapita1 > percapita2){
    printf("PIB per Capita - Carta 1 venceu: %.2f\n", percapita1);
  } else{
    printf("PIB per Capita - Carta 2 venceu: %.2f\n", percapita2);
  }
  if(superpoder1 > superpoder2){
    printf("Super Poder - Carta 1 venceu: %.2f\n", superpoder1);
  } else{
    printf("Super Poder - Carta 2 venceu: %.2f\n", superpoder2);
  }

  return 0;

}
