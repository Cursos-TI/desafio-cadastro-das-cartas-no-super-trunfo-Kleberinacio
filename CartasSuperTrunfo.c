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
  int escolhaJogador;
 
  //Código fonte Carta1 
  
  printf("Carta1:\n");
  /*printf("Estado: \n");
  scanf("%s", &estado1);

  printf("Código: \n");
  scanf("%s", &codigo1);*/

  printf("Nome do País: \n");
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

  /*printf("Estado: \n");
  scanf("%s", &estado2);

  printf("Código: \n");
  scanf("%s", &codigo2);*/

  printf("Nome do País: \n");
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
  //printf("Estado: %s\n", estado1);
  //printf("Código: %s\n", codigo1);
  printf("Nome do País: %s\n", nome1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2fkm²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", turismo1);
  printf("Densidade Populacional: %.2f\n", densidade1);
  /*printf("PIB per Capita: %.2f\n", percapita1);
  printf("Super Poder: %.2f\n", superpoder1);*/
  printf("\n");
  
  //Print Carta 2

  printf("Carta2\n");
  //printf("Estado: %s\n", estado2);
  //printf("Código: %s\n", codigo2);
  printf("Nome do País: %s\n", nome2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2fkm²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", turismo2);
  printf("Densidade Populacional: %.2f\n", densidade2);
  /*printf("PIB per Capita: %.2f\n", percapita2);
  printf("Super Poder: %.2f\n", superpoder2);*/
  printf("\n");
  
  //Menu Opções de Ataque

  printf("*** Jogo Super Trunfo ***\n");
  printf("Escolha uma opção da Carta 1:\n");
  printf("1. População\n", populacao1);
  printf("2. Área\n", area1);
  printf("3. PIB\n"), pib1;
  printf("4. Número de Pontos Turísticos\n", turismo1);
  printf("5. Densidade populacional\n", densidade1);
  printf("Escolha: ");
  scanf("%d", &escolhaJogador);
  printf("\n");

  switch (escolhaJogador)
  {
      //Ataque População
      case 1:
      printf("%s X %s\n", nome1, nome2);
      printf("Escolheu População\n");
      printf("%lu X %lu\n", populacao1, populacao2);
      if (populacao1 > populacao2){
       printf("### Carta 1 %s venceu! ###\n", nome1);
    } else if (populacao1 < populacao2) {
      printf(" ### Carta 2 %s venceu! ###\n", nome2);
    
  } else {
      printf("### O Jogo empatou! ###\n");
    }
      break;

      //Ataque Área
      case 2:
      printf("%s X %s\n", nome1, nome2);
      printf("Escolheu Área\n");
      printf("%.2f X %.2f\n", area1, area2);
      if (area1 > area2){
       printf("### Carta 1 %s venceu! ###\n", nome1);
    } else if (area1 < area2) {
      printf(" ### Carta 2 %s venceu! ###\n", nome2);
    
  } else {
      printf("### O Jogo empatou! ###\n");
    }
      break;

      //Ataque PIB
      case 3:
      printf("%s X %s\n", nome1, nome2);
      printf("Escolheu PIB\n");
      printf("%.2f X %.2f\n", pib1, pib2);
      if (pib1 > pib2){
       printf("### Carta 1 %s venceu! ###\n", nome1);
    } else if (pib1 < pib2) {
      printf(" ### Carta 2 %s venceu! ###\n", nome2);
    
  } else {
      printf("### O Jogo empatou! ###\n");
    }
      break;

      //Ataque Pontos Turísticos
      case 4:
      printf("%s X %s\n", nome1, nome2);
      printf("Escolheu Números de Pontos Turísticos\n");
      printf("%d X %d\n", turismo1, turismo2);
      if (turismo1 > turismo2){
       printf("### Carta 1 %s venceu! ###\n", nome1);
    } else if (turismo1 < turismo2) {
      printf(" ### Carta 2 %s venceu! ###\n", nome2);
    
  } else {
      printf("### O Jogo empatou! ###\n");
    }
      break;

      //Ataque Densidade Populacional
      case 5:
      printf("%s X %s\n", nome1, nome2);
      printf("Escolheu Densidade Populacional\n");
      printf("%.2f X %.2f\n", densidade1, densidade2);
      if (densidade1 < densidade2){
       printf("### Carta 1 %s venceu! ###\n", nome1);
    } else if (densidade1 > densidade2) {
      printf(" ### Carta 2 %s venceu! ###\n", nome2);    
  } else {
      printf("### O Jogo empatou! ###\n");
    }
      break;

      //Opção Inválida
      default:
      printf("Opção inválida\n");
      break;
      printf("\n");
  }


  return 0;

}
