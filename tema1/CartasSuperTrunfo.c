#include <stdio.h>

int main() {

    // Definindo variáveis para entrada de dados
    char estado;
    char codigo[4]; // Código da carta (ex.: A01, B02)
    char nomeCidade[50]; // Nome da cidade
    int populacao; // População da cidade
    float area; // Área em km²
    float pib; // PIB em R$
    int pontosTuristicos; // Número de pontos turísticos

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

    printf("Digite o PIB da cidade : ");
    scanf(" %f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos);

    // Exibição dos dados cadastrados
    printf("\nDados cadastrados:\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f R$ \n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    
    return 0;
}
