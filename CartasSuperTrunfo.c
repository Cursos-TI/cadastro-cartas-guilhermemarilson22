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
  int result1, result2, result3, result4, result5, result6, result7; //Resultado das comparações

  // Área para entrada de dados

  printf("Carta 01:\n"); // Cadastra da carta 01
  printf("Digite uma letra de A a H (representando um dos oito estados):\n");
  scanf("%s", estado);                      // digitar uma letra
  printf("Digite um numero de 01 a 04:\n"); // digitar um numero de 01 a 04
  scanf("%d", &cod_cart);                   // digitar uma numero
  getchar(); // limpa o lixo de memória no buffer do teclado, para poder usar o fgets
  printf("Digite o nome da cidade:\n");
  fgets(cidade, sizeof(cidade), stdin); // Usa o fgets para garantir a leitura de nomes compostos (ex: "Rio de Janeiro")
  cidade[strcspn(cidade, "\n")] = '\0'; // Troca o "Enter" (\n) que o fgets captura por nulo (\0), Isso evita que o resultado quebre para a linha de baixo na hora de imprimir.
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
  getchar(); // limpa o lixo de memória no buffer do teclado, para poder usar o fgets
  printf("Digite o nome da cidade:\n");
  fgets(cidade1, sizeof(cidade1), stdin); // Usa o fgets para garantir a leitura de nomes compostos (ex: "Rio de Janeiro")
  cidade1[strcspn(cidade1, "\n")] = '\0'; // Troca o "Enter" (\n) que o fgets captura por nulo (\0), Isso evita que o resultado quebre para a linha de baixo na hora de imprimir.
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
  float superpoder = (float)((populacao + area + pib + pont_tu + pib_per)/den_po); //Super poder somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")

  // Calculo da densidade populacional carta 02

  float den_po1 = (float)populacao1 / area1;
  float pib_per1 = (float)(pib1 * 1000000000) / populacao1;
  float superpoder1 = (float)((populacao1 + area1 + pib1 + pont_tu1 + pib_per1)/den_po1);//Super poder somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")

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
  printf("Seu Super-Poder da carta 01: Poder %.2f\n", superpoder);

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
  printf("Seu Super-Poder da carta 02: Poder %.2f\n", superpoder1);

  // Comparador de cartas 01 e 02
  result1 = populacao > populacao1;
  result2 = area > area1;
  result3 = pib > pib1;
  result4 = pont_tu > pont_tu1;
  result5 = den_po > den_po1;
  result6 = pib_per > pib_per1;
  result7 = superpoder > superpoder1;

// Resultado das cartas de for 1 carta 01 vence se for 0 carta 02 vence

  printf("=====Comparador de cartas:=====\n");
  printf("Resultado das cartas se for 1 carta 01 vence se for 0 carta 02 vence\n");
  printf("População: %d\n", result1);
  printf("Área: %d\n", result2);
  printf("PIB: %d\n", result3);
  printf("Pontos turísticos: %d\n", result4);
  printf("Densidade Populacional: %d\n", result5);
  printf("PIB per Capita: %d\n", result6);
  printf("Super-Poder: %d\n", result7);

  return 0;
}
