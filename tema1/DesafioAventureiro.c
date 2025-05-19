#include <stdio.h>

int main() {
    // Definindo variáveis para entrada de dados
    char estado;
    char codigo[4]; // Código da carta (ex.: A01, B02)
    char nomeCidade[50]; // Nome da cidade
    int populacao; // População da cidade
    float area; // Área em km²
    float pib; // PIB em bilhões de reais
    int pontosTuristicos; // Número de pontos turísticos
    float divisão; // acho que o proprio nome fala por si né
    float divisão2;

    // Solicitação dos dados ao usuário
    printf("Digite o estado (letra A-H): ");
    scanf(" %c", &estado);

    printf("Digite o código da carta (ex.: A01, B02): ");
    scanf(" %s", codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade);

    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Digite a área da cidade em km²: ");
    scanf(" %f", &area);

    printf("Digite o PIB da cidade em bilhões de reais: ");
    scanf(" %f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos);

divisão = populacao / area;

divisão2 = pib / populacao;

    // Exibição dos dados cadastrados
    printf("\nDados cadastrados:\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf ("densidade populacional : %f\n", divisão);
    printf("pib per capita: %f\n",divisão2 );

printf("\n CARTA 2 \n");
    
    char estado2;
    char codigo2[4]; // Código da carta (ex.: A01, B02)
    char nomeCidade2[50]; // Nome da cidade
    int populacao2; // População da cidade
    float area2; // Área em km²
    float pib2; // PIB em bilhões de reais
    int pontosTuristicos2; // Número de pontos turísticos
    float DensidadePopulacional2; // acho que o proprio nome fala por si né
    float PibPerCapita2;
    float SuperPoder2;
   

    printf("Digite o estado (letra A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex.: A01, B02): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade2);

    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade em km²: ");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade em bilhões de reais: ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    DensidadePopulacional2 = populacao2 / area2;

    PibPerCapita2 = pib2 / populacao2;

    printf("\nCarta2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf ("densidade populacional : %f\n", DensidadePopulacional2);
    printf("pib per capita: %f\n",PibPerCapita2);

    return 0;
}
