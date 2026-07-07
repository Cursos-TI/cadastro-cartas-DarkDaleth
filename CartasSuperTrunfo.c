#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char est1, est2, cid1[50], cid2[50], cod1[5], cod2[5];
  int pop1, pop2, pt1, pt2;
  float area1, area2, pib1, pib2;
  
  // Área para entrada de dados
  
  printf("\nBem-vindo ao cadastro das cartas de super-trunfo!\n");
  printf("Preencha cada carta por vez.\n");

  //solicitando os dados do card1
  printf("\n---------------------------------Card_1---------------------------------\n");
  printf("Digite a primeira letra do estado(A-H): ");
  scanf("%c", &est1);
  printf("Digite o código da sua carta (ex: A01): ");
  scanf("%s", cod1);
  getchar();
  printf("Digite o nome da cidade: ");
  fgets(cid1, 50, stdin);
  printf("Digite a população da cidade: ");
  scanf("%d", &pop1);
  printf("Digite a area da cidade: ");
  scanf("%f", &area1);
  printf("Digite o PIB: ");
  scanf("%f", &pib1);
  printf("Quantidade de Pontos Turísticos: ");
  scanf("%d", &pt1);
  getchar();
  printf("------------------------------------------------------------------------\n");

  //solicitando os dados do card2

  printf("---------------------------------Card_2---------------------------------\n");
  printf("Digite a primeira letra do estado(A-H): ");
  scanf("%c", &est2);
  printf("Digite o código da sua carta (ex: A01): ");
  scanf("%s", cod2);
  getchar();
  printf("Digite o nome da cidade: ");
  fgets(cid2, 50, stdin);
  printf("Digite a população da cidade: ");
  scanf("%d", &pop2);
  printf("Digite a area da cidade: ");
  scanf("%f", &area2);
  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  printf("Quantidade de Pontos Turísticos: ");
  scanf("%d", &pt2);
  getchar();
  printf("------------------------------------------------------------------------\n\n");

  // Área para exibição dos dados da cidade

  printf("Exibindo os dados das cartas:\n\n");
  printf("------------------------------------------------------------------------\n");
  printf("Carta1: \n");
  printf("Estado: %c \n", est1);
  printf("Código: %s \n", cod1);
  printf("Nome da Cidade: %s", cid1);
  printf("População: %d \n", pop1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB total: %.2f bilhões de reais\n", pib1);
  printf("Número de pontos turísticos: %d\n", pt1);
  printf("------------------------------------------------------------------------\n");
  printf("------------------------------------------------------------------------\n");
  printf("Carta2: \n");
  printf("Estado: %c \n", est2);
  printf("Código: %s \n", cod2);
  printf("Nome da Cidade: %s", cid2);
  printf("População: %d \n", pop2);
  printf("Área: %.2f \n km²", area2);
  printf("PIB total: %.2f bilhões de reais\n", pib2);
  printf("Número de pontos turísticos: %d \n", pt2);
  printf("------------------------------------------------------------------------\n");
  


return 0;
} 
