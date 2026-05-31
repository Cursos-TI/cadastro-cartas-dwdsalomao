#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[2];
  char estado2[2];
  char codigo_carta1[2];
  char codigo_carta2[2];
  char codigo_completo1[4];
  char codigo_completo2[4];
  char nome_cidade1[50];
  char nome_cidade2[50];
  int populacao1;
  int populacao2;
  float area1;
  float area2;
  float pib1;
  float pib2;
  int numero_pontos_turisticos1;
  int numero_pontos_turisticos2;

  // Área para entrada de dados
      
  // entrada de dados da carta #1
      printf("Digite o estado da carta 1 ('A' a 'H'):\n");
      scanf("%s", estado1); // lê o estado da carta #1 

      printf("Digite o código da carta 1 (entre 01 e 04):\n");
      scanf("%s", codigo_carta1); // lê o código da carta #1
        sprintf(codigo_completo1, "%s%s", estado1, codigo_carta1); // concatena o estado e o código da carta #1 

      printf("Digite o nome da cidade:\n");
      fgets(nome_cidade1, 50, stdin); // lê o nome da cidade #1
      nome_cidade1[strcspn(nome_cidade1, "\n")] = 0; // remove o caractere de nova linha
      gets(nome_cidade1);

      printf("Digite a população da cidade:\n");
      scanf("%d", &populacao1); // lê a população da cidade #1

      printf("Digite a área da cidade (em km²) *somente números*\n");
      scanf("%f", &area1); // lê a área da cidade #1
      
      printf("Digite o PIB da cidade (em bilhões de reais) *somente números*\n");
      scanf("%f", &pib1); // lê o PIB da cidade #1

      printf("Digite o número de pontos turísticos da cidade:\n");
      scanf("%d", &numero_pontos_turisticos1); // lê o número de pontos turísticos da cidade #1

      printf("\n\n\n");

      // entrada de dados da carta #2
        printf("Digite o estado da carta 2 ('A' a 'H'):\n");
        scanf("%s", estado2); // lê o estado da carta #2

        printf("Digite o código da carta 2 (entre 01 e 04):\n");
        scanf("%s", codigo_carta2); // lê o código da carta #2
          sprintf(codigo_completo2, "%s%s", estado2, codigo_carta2); // Concatena o estado e o código da carta #2

        printf("Digite o nome da cidade da carta 2:\n");
        fgets(nome_cidade2, 50, stdin); // lê o nome da cidade da carta #2
        nome_cidade2[strcspn(nome_cidade2,"\n")] = 0; // remove o caractere de nova linha
        gets(nome_cidade2);

        printf("Digite a população da cidade da carta 2:\n");
        scanf("%d", &populacao2); // lê a população da cidade da carta #2

        printf("Digite a área da cidade da carta 2 (em km²) *somente números*\n");
        scanf("%f", &area2); // lê a área da cidade da carta #2

        printf("Digite o PIB da cidade da carta 2 (em bilhões de reais) *somente números*\n");
        scanf("%f", &pib2); // lê o PIB da cidade da carta #2

        printf("Digite o número de pontos turísticos da cidade da carta 2:\n");
        scanf("%d", &numero_pontos_turisticos2); // lê o número de pontos turísticos da cidade da carta 2

  // Área para exibição dos dados da cidade
// exibição dos dados da carta #1

printf("\n-- Carta 1 --\n"
        "Estado: %s\n"
        "Código: %s\n"
        "Nome da Cidade: %s\n"
        "População: %d habitantes\n"
        "Área: %.2f km²\n"
        "PIB: %.2f bilhões de reais\n"
        "Número de Pontos Turísticos: %d\n",
        estado1, codigo_completo1, nome_cidade1, populacao1, area1, pib1, numero_pontos_turisticos1);

// exibição dos dados da carta #2 

printf("\n\n\n-- Carta 2 --\n"
        "Estado: %s\n"
        "Código: %s\n"
        "Nome da Cidade: %s\n"
        "População: %d habitantes\n"
        "Área: %.2f\n"
        "PIB: %.2f\n"
        "Número de Pontos Turísticos: %d\n",
      estado2, codigo_completo2, nome_cidade2, populacao2, area2, pib2, numero_pontos_turisticos2);

return 0;
} 
