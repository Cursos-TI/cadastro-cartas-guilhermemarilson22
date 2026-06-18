#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado[20], estado1[20]; // Uma letra de A a H
  int cod_cart, cod_cart1;      // A letra do estado seguida de um número de 01 a 04
  char cidade[50], cidade1[50]; // Nome de uma cidade
  int populacao, populacao1;    // Numero de habitantes da cidade
  float area, area1;            // A área da cidade em quilômetros quadrados
  float pib, pib1;              // O Produto Interno Bruto da cidade
  int pont_tu, pont_tu1;        // A quantidade de pontos turísticos na cidade

  // Área para entrada de dados

  printf("Carta 01:\n"); // Cadastra da carta 01
  printf("Digite uma letra de A a H (representando um dos oito estados):\n");
  scanf("%s", estado);                      // digitar uma letra
  printf("Digite um numero de 01 a 04:\n"); // digitar um numero de 01 a 04
  scanf("%d", &cod_cart);                   // digitar uma numero
  printf("Digite o nome da cidade:\n");
  scanf("%s", cidade);
  printf("Digite o numero de habitantes da cidade:\n");
  scanf("%d", &populacao);
  printf("Digite a área da cidade em quilômetros quadrados:\n");
  scanf("%f", &area);
  printf("Digite o Produto Interno Bruto da cidade:\n");
  scanf("%f", &pib);
  printf("Digite a quantidade de pontos turísticos na cidade:\n");
  scanf("%d", &pont_tu);

  printf("Carta 02:\n"); // Cadastra da carta 02
  printf("Digite uma letra de A a H (representando um dos oito estados):\n");
  scanf("%s", estado1);                     // digitar uma letra
  printf("Digite um numero de 01 a 04:\n"); // digitar um numero de 01 a 04
  scanf("%d", &cod_cart1);                  // digitar um numero
  printf("Digite o nome da cidade:\n");
  scanf("%s", cidade1); // Digite o nome da cidade
  printf("Digite o numero de habitantes da cidade:\n");
  scanf("%d", &populacao1);
  printf("Digite a área da cidade em quilômetros quadrados:\n");
  scanf("%f", &area1);
  printf("Digite o Produto Interno Bruto da cidade:\n");
  scanf("%f", &pib1);
  printf("Digite a quantidade de pontos turísticos na cidade:\n");
  scanf("%d", &pont_tu1);

  // Calculo da densidade populacional carta 01

  float den_po = (float)populacao / area;
  float pib_per = (float)(pib * 1000000000) / populacao;

  // Calculo da densidade populacional carta 02

  float den_po1 = (float)populacao1 / area1;
  float pib_per1 = (float)(pib1 * 1000000000) / populacao1;

  // Área para exibição dos dados da cidade

  printf("Carta 01:\n");
  printf("Estado: %s\n", estado);
  printf("Codigo: %s%02d\n", estado, cod_cart);
  printf("Nome da cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f Bilhões de reais\n", pib);
  printf("Números de pontos turísticos: %d\n", pont_tu);
  printf("Densidade Populacional: %.2f hab/km²\n", den_po);
  printf("PIB per Capita: %.2f reais\n", pib_per);

  printf("Carta 02:\n");
  printf("Estado: %s\n", estado1);
  printf("Codigo: %s%02d\n", estado1, cod_cart1);
  printf("Nome da cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f Bilhões de reais\n", pib1);
  printf("Números de pontos turísticos: %d\n", pont_tu1);
  printf("Densidade Populacional: %.2f hab/km²\n", den_po1);
  printf("PIB per Capita: %.2f reais\n", pib_per1);

  return 0;
}
