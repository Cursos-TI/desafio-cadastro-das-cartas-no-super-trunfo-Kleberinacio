#include <stdio.h>

// Desafio Super Trunfo - Países

int main(){
  char estado[4];
  char codigo[6], nome[50];
  int populacao, turismo;
  float area, pib;

  //Código fonte Carta1 
  printf("Carta1:\n");
  printf("Estado: \n");
  scanf("%s", &estado);

  printf("Código: \n");
  scanf("%s", &codigo);

  printf("Nome da Cidade: \n");
  scanf("%s", &nome);

  printf("População: \n");
  scanf("%d", &populacao);

  printf("Área: \n");
  scanf("%f", &area);

  printf("PIB: \n");
  scanf("%f", &pib);

  printf("Número de Pontos Turísticos: \n");
  scanf("%d", &turismo);

  printf("Carta1\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Nome da Cidade: %s\n", nome);
  printf("População: %d\n", populacao);
  printf("Área: %.2fkm²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Número de Pontos Turísticos: %d\n", turismo);

  //Código fonte Carta2
  printf("Carta2:\n");

  printf("Estado: \n");
  scanf("%s", &estado);

  printf("Código: \n");
  scanf("%s", &codigo);

  printf("Nome da Cidade: \n");
  scanf("%s", &nome);

  printf("População: \n");
  scanf("%d", &populacao);

  printf("Área: \n");
  scanf("%f", &area);

  printf("PIB: \n");
  scanf("%f", &pib);

  printf("Número de Pontos Turísticos: \n");
  scanf("%d", &turismo);

  printf("Carta2\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Nome da Cidade: %s\n", nome);
  printf("População: %d\n", populacao);
  printf("Área: %.2fkm²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Número de Pontos Turísticos: %d\n", turismo);

  return 0;

}
