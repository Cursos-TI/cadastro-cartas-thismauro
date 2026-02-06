#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado, estado2;;
  char codigoCarta[5], nomeCidade[20], codigoCarta2[5], nomeCidade2[20];
  unsigned long int populacaoCidade, populacaoCidade2;
  int pontosTuristicos, pontosTuristicos2;
  float areaCidade, pibCidade, areaCidade2, pibCidade2, densidadePopulacional, pibPerCapita, densidadePopulacional2, pibPerCapita2, superPoder;

  /*
    CADASTRO DA PRIMEIRA CARTA
  */

  // Solicita a letra do estado de 'A' a 'H' da primeira carta
  printf("-=-Cadastro da primeira carta-=-\n");
  printf("Digite uma letra de 'A' a 'H' que represente um dos oito estados: ");
  scanf(" %c", &estado);
    
  // Solicita o código da carta da primeira carta, sendo a letra do estado seguida de um numero de 01 a 04
  printf("Digite o codigo da carta, sendo a letra do estado seguida de um numero de 01 a 04: ");
  scanf("%s", codigoCarta);

  // Solicita o nome da cidade da primeira carta
  printf("Digite o nome da cidade: ");
  scanf("%s", nomeCidade);

  // Solicita o número de habitantes da cidade da primeira carta
  printf("Digite o numero de habitantes da cidade: ");
  scanf("%d", &populacaoCidade);

  // Solicita a área da cidade em km² da primeira carta
  printf("Digite a area da cidade em km quadrado: ");
  scanf("%f", &areaCidade);

  // Solicita o PIB da cidade da primeira carta
  printf("Digite o PIB da cidade: ");
  scanf("%f", &pibCidade);

  // Solicita o número de pontos turísticos da cidade da primeira carta
  printf("Digite o numero de pontos turisticos da cidade: ");
  scanf("%d", &pontosTuristicos);

  // Imprime na tela o as informações da primeira carta 
  densidadePopulacional = (float) populacaoCidade / areaCidade;
  pibPerCapita =  pibCidade / (float) populacaoCidade;

  printf("\n-=-Informações da primeira carta-=-\n");
  printf("Estado: %c\n", estado);
  printf("Codigo: %s\n", codigoCarta);
  printf("Nome da cidade: %s\n", nomeCidade);
  printf("Populacao: %d\n", populacaoCidade);
  printf("Area: %.2f km² \n", areaCidade);
  printf("PIB: %.2f de reais\n", pibCidade);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos);
  printf("Densidade populacional: %.2f\n", densidadePopulacional);
  printf("PIB per Capita: %.2f\n", pibPerCapita);

  /*
      CADASTRO DA SEGUNDA CARTA
  */

  // Solicita a letra do estado de 'A' a 'H' da segunda carta
  printf("\n-=-Cadastro da segunda carta-=-\n");
  printf("Digite uma letra de 'A' a 'H' que represente um dos oito estados: ");
  scanf(" %c", &estado2);
    
  // Solicita o código da carta da segunda carta, sendo a letra do estado seguida de um numero de 01 a 04
  printf("Digite o codigo da carta, sendo a letra do estado seguida de um numero de 01 a 04: ");
  scanf("%s", codigoCarta2);

  // Solicita o nome da cidade da segunda carta
  printf("Digite o nome da cidade: ");
  scanf("%s", nomeCidade2);

  // Solicita o número de habitantes da cidade da segunda carta
  printf("Digite o numero de habitantes da cidade: ");
  scanf("%d", &populacaoCidade2);

  // Solicita a área da cidade em km² da segunda carta
  printf("Digite a area da cidade em km quadrado: ");
  scanf("%f", &areaCidade2);

  // Solicita o PIB da cidade da segunda carta
  printf("Digite o PIB da cidade: ");
  scanf("%f", &pibCidade2);

  // Solicita o número de pontos turísticos da cidade da segunda carta
  printf("Digite o numero de pontos turisticos da cidade: ");
  scanf("%d", &pontosTuristicos2);

  // Imprime na tela o as informações da segunda carta
  densidadePopulacional2 = (float) populacaoCidade2 / areaCidade2;
  pibPerCapita2 = pibCidade2 / (float) populacaoCidade2;

  printf("\n-=-Informações da segunda carta-=-\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigoCarta2);
  printf("Nome da cidade: %s\n", nomeCidade2);
  printf("Populacao: %d\n", populacaoCidade2);
  printf("Area: %.2f km² \n", areaCidade2);
  printf("PIB: %.2f de reais\n", pibCidade2);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
  printf("Densidade populacional: %.2f\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f\n", pibPerCapita2);

  if (pibPerCapita > pibPerCapita2) {
    printf("\nPIB per Capita da primeira carta: %.2f\n", pibPerCapita);
    printf("PIB per Capita da segunda carta: %.2f\n", pibPerCapita2);
    printf("\nA carta 1 foi a vencedora!\n");
    
  } else {
    printf("\nPIB per Capita da primeira carta: %.2f\n", pibPerCapita);
    printf("PIB per Capita da segunda carta: %.2f\n", pibPerCapita2);
    printf("\nA carta 2 foi a vencedora!\n");
  }
  

return 0;

}
