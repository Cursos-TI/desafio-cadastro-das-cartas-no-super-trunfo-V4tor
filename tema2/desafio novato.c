#include <stdio.h>

int main() {
    // Definindo variáveis para entrada de dados
    char estado;
    char codigo[4]; // Código da carta (ex.: A01, B02)
    char nomeCidade[50]; // Nome da cidade
    unsigned long int populacao = 5000; // População da cidade
    float area; // Área em km²
    float pib; // PIB em bilhões de reais
    int pontosTuristicos; // Número de pontos turísticos
    float PibPerCapita; // acho que o proprio nome fala por si né
    float DensidadePopulacional;
    float SuperPoder;
   



    // Solicitação dos dados ao usuário
    printf("Digite o estado (letra A-H): ");
    scanf(" %c", &estado);

    printf("Digite o código da carta (ex.: A01, B02): ");
    scanf(" %s", codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade);

    printf("Digite a população da cidade: ");
    scanf(" %lu", &populacao);

    printf("Digite a área da cidade em km²: ");
    scanf(" %f", &area);

    printf("Digite o PIB da cidade em bilhões de reais: ");
    scanf(" %f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos);

DensidadePopulacional = populacao / area;

PibPerCapita = pib / populacao;

      
SuperPoder= populacao + area + pib + pontosTuristicos + DensidadePopulacional +PibPerCapita;


    // Exibição dos dados cadastrados
    printf("\nCarta1:\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf ("densidade populacional : %f\n", DensidadePopulacional);
    printf("pib per capita: %f\n",PibPerCapita );
    printf("SuperPoder:%f\n ", SuperPoder);



    char estado2;
    char codigo2[4]; // Código da carta (ex.: A01, B02)
    char nomeCidade2[50]; // Nome da cidade
    unsigned long int populacao2= 7000; // População da cidade
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
    scanf(" %lu", &populacao2);

    printf("Digite a área da cidade em km²: ");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade em bilhões de reais: ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    DensidadePopulacional2 = populacao2 / area2;

    PibPerCapita2 = pib2 / populacao2;

    SuperPoder2= populacao2 + area2 + pib2 + pontosTuristicos2 + DensidadePopulacional2 +PibPerCapita2;


printf("\nCarta2:\n");
printf("Estado: %c\n", estado2);
printf("Código da Carta: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("População: %lu\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
printf ("densidade populacional : %f\n", DensidadePopulacional2);
printf("pib per capita: %f\n",PibPerCapita2 );
printf("SuperPoder:%f ", SuperPoder2);


printf("\nCOMPARAÇÃO DE CARTAS:\n");
printf("\n 1 PARA VERDADEIRO /// 0 PARA FALSO \n");
printf("comparação: %d\n", populacao < populacao2  );
printf("comparação : %d\n", area < area2  );
printf("comparação: %d\n", pib < pib2  );
printf("comparação : %d\n", pontosTuristicos < pontosTuristicos2  );
printf("comparação: %d\n", DensidadePopulacional < DensidadePopulacional2  );
printf("comparação : %d\n", PibPerCapita < PibPerCapita2  );
printf("comparação: %d\n", SuperPoder > SuperPoder2 ); 


printf("\nRESULTADO DA COMPARAÇÃO DE POPULAÇÃO:\n");


printf("carta1: %d\n",&populacao);

printf("carta2: %d\n",&populacao2);

if (populacao > populacao2)
{
    printf("carta 1 venceu\n");
} else
{
printf("carta 2 venceu\n");
}

    return 0;
}