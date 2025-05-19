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
    int opcao;
    int opcao2;


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


    printf("\n QUAL CARTA VOCÊ DESEJA COMPARAR?\n");

    printf("1. Para escolher população\n");
    printf("2. Para escolher area\n");
    printf("3. Para escolher PIB\n");
    printf("4. Para escolher Numero De Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. Para escolher PibPerCapita\n");
    printf("7. Para escolher SuperPoder\n");
    scanf("%d", &opcao);

    switch (opcao)
{
case 1:
    printf("você escolheu comparar população\n");
    printf("carta1: %lu\n", populacao);
    printf("carta2: %lu\n", populacao2);

   if (populacao > populacao2)
   {
    printf("carta1 venceu!\n");
   } else if (populacao == populacao2)
   {
    printf("empate!\n");
   } else
   {
    printf("carta2 venceu");
   }
   
   
    
    
    break;

    case 2:
    printf("você escolheu comparar area\n");
    printf("carta1: %.2f\n", area);
    printf("carta2: %.2f\n", area2);
    if (area > area2)
    {
        printf("carta1 venceu\n");
    } else if (area < area2)
    {
        printf("carta2 venceu\n");
    } else
    {
        printf("houve um empate\n");
    }
    
    
    
    break;

    case 3:
    printf("você escolheu comparar PIB\n");
    printf("carta1: %.2f\n", pib);
    printf("carta2: %.2f\n", pib2);
    if (pib > pib2)
    {
     printf("carta1 venceu!\n");
    } else if (pib == pib2)
    {
     printf("empate!\n");
    } else
    {
     printf("carta2 venceu");
    }
    
    
    break;

    case 4:
    printf("você escolheu comparar Numero De Pontos Turisticos\n");
    printf("carta1: %d\n", pontosTuristicos);
    printf("carta2: %d\n", pontosTuristicos2);
    if (pontosTuristicos > pontosTuristicos2)
    {
     printf("carta1 venceu!\n");
    } else if (pontosTuristicos == pontosTuristicos2)
    {
     printf("empate!\n");
    } else
    {
     printf("carta2 venceu");
    }
    
    break;

    case 5:
    printf("você escolheu comparar Densidade Populacional\n");
    printf("carta1: %f\n", DensidadePopulacional);
    printf("carta2: %f\n", DensidadePopulacional2);
    if (DensidadePopulacional > DensidadePopulacional2)
    {
     printf("carta1 venceu!\n");
    } else if (DensidadePopulacional == DensidadePopulacional2)
    {
     printf("empate!\n");
    } else
    {
     printf("carta2 venceu");
    }
    
    
    break;

    case 6:
    printf("você escolheu comparar PibPerCapita\n");
    printf("carta1: %f\n", PibPerCapita);
    printf("carta2: %f\n", PibPerCapita2);
    if (PibPerCapita > PibPerCapita2)
    {
     printf("carta1 venceu!\n");
    } else if (PibPerCapita == PibPerCapita2)
    {
     printf("empate!\n");
    } else
    {
     printf("carta2 venceu");
    }
    
    break;

    case 7:
    printf("você escolheu comparar SuperPoder\n");
    printf("carta1: %f\n", SuperPoder);
    printf("carta2: %f\n", SuperPoder2);
    if (SuperPoder > SuperPoder2)
    {
     printf("carta1 venceu!\n");
    } else if (SuperPoder == SuperPoder2)
    {
     printf("empate!\n");
    } else
    {
     printf("carta2 venceu");
    }
    
    
    break;

default: printf("você não escolheu nenhuma das opções, tente novamente.");

    break;
}

printf("Você pode tentar novamente, escolha outra carta para comparar\n");
printf("mantenha em mente que você não pode escolher a mesma carta\n");

    printf("1. Para escolher população\n");
    printf("2. Para escolher area\n");
    printf("3. Para escolher PIB\n");
    printf("4. Para escolher Numero De Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. Para escolher PibPerCapita\n");
    printf("7. Para escolher SuperPoder\n");
    scanf("%d", &opcao2);



    if (opcao == opcao2)
    {
        printf("você não pode escolher a mesma carta para comparar\n");
    } else
    {
    
    switch (opcao2)
{
case 1:
    printf("você escolheu comparar população\n");
    printf("carta1: %lu\n", populacao);
    printf("carta2: %lu\n", populacao2);

   if (populacao > populacao2)
   {
    printf("carta1 venceu!\n");
   } else if (populacao == populacao2)
   {
    printf("empate!\n");
   } else
   {
    printf("carta2 venceu");
   }
   
   
    
    
    break;

    case 2:
    printf("você escolheu comparar area\n");
    printf("carta1: %.2f\n", area);
    printf("carta2: %.2f\n", area2);
    if (area > area2)
    {
        printf("carta1 venceu\n");
    } else if (area < area2)
    {
        printf("carta2 venceu\n");
    } else
    {
        printf("houve um empate\n");
    }
    
    
    
    break;

    case 3:
    printf("você escolheu comparar PIB\n");
    printf("carta1: %.2f\n", pib);
    printf("carta2: %.2f\n", pib2);
    if (pib > pib2)
    {
     printf("carta1 venceu!\n");
    } else if (pib == pib2)
    {
     printf("empate!\n");
    } else
    {
     printf("carta2 venceu");
    }
    
    
    break;

    case 4:
    printf("você escolheu comparar Numero De Pontos Turisticos\n");
    printf("carta1: %d\n", pontosTuristicos);
    printf("carta2: %d\n", pontosTuristicos2);
    if (pontosTuristicos > pontosTuristicos2)
    {
     printf("carta1 venceu!\n");
    } else if (pontosTuristicos == pontosTuristicos2)
    {
     printf("empate!\n");
    } else
    {
     printf("carta2 venceu");
    }
    
    break;

    case 5:
    printf("você escolheu comparar Densidade Populacional\n");
    printf("carta1: %f\n", DensidadePopulacional);
    printf("carta2: %f\n", DensidadePopulacional2);
    if (DensidadePopulacional > DensidadePopulacional2)
    {
     printf("carta1 venceu!\n");
    } else if (DensidadePopulacional == DensidadePopulacional2)
    {
     printf("empate!\n");
    } else
    {
     printf("carta2 venceu");
    }
    
    
    break;

    case 6:
    printf("você escolheu comparar PibPerCapita\n");
    printf("carta1: %f\n", PibPerCapita);
    printf("carta2: %f\n", PibPerCapita2);
    if (PibPerCapita > PibPerCapita2)
    {
     printf("carta1 venceu!\n");
    } else if (PibPerCapita == PibPerCapita2)
    {
     printf("empate!\n");
    } else
    {
     printf("carta2 venceu");
    }
    
    break;

    case 7:
    printf("você escolheu comparar SuperPoder\n");
    printf("carta1: %f\n", SuperPoder);
    printf("carta2: %f\n", SuperPoder2);
    if (SuperPoder > SuperPoder2)
    {
     printf("carta1 venceu!\n");
    } else if (SuperPoder == SuperPoder2)
    {
     printf("empate!\n");
    } else
    {
     printf("carta2 venceu");
    }
    
    
    break;

default: printf("você não escolheu nenhuma das opções, tente novamente.");

    break;
}


    return 0;
}

}