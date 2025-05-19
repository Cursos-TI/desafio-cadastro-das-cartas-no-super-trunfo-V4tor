#include <stdio.h>

int main (){
    int opcao;
    int direita;
    int esquerda;
    int cima;
    int baixo;
    int MovimentoDeElCaballo =1;


    printf("\nSEJA MUITO BEM VINDO AO JOGO XADREZ\n");
    printf("para qual lado você deseja movimentar a torre?\n");
    printf("OBS: VOCÊ SE MOVERA 5 CASAS\n");
    printf("você pode se movimentar para: \n");
    printf("1. esquerda\n");
    printf("2. direita\n");
    printf("3. cima\n");
    printf("4. baixo\n");
    printf("sua opção:");
 
scanf("%d", &opcao);

switch (opcao)
{
case 1:
        //movimento da torre
        printf("\nMOVIMENTO DA TORRE\n");

        for (int torre = 0; torre < 5; torre++)
        {
            printf("esquerda\n");
        }
    break;

    case 2:
        //movimento da torre
        printf("\nMOVIMENTO DA TORRE\n");

        for (int torre = 0; torre < 5; torre++)
        {
            printf("direita\n");
        }
    break;

    case 3:
        //movimento da torre
        printf("\nMOVIMENTO DA TORRE\n");

        for (int torre = 0; torre < 5; torre++)
        {
            printf("cima\n");
        }
    break;

    case 4:
        //movimento da torre
        printf("\nMOVIMENTO DA TORRE\n");

        for (int torre = 0; torre < 5; torre++)
        {
            printf("baixo\n");
        }
    break;
default:
    break;
}


printf("\nMOVIMENTO DO BISPO\n");

int bispo = 1;
int movimentoDoBispo = 5;

while (bispo <= movimentoDoBispo) {
    printf("Cima direita\n", bispo);
    bispo++;
}


printf("\nMOVIMENTOS DA RAINHA\n");

int Rainha = 1;
int MovimentosDaRainha= 5;

do {
    printf("A rainha se movimentou 8 casas para esquerda\n", Rainha);
    Rainha++;
} while (Rainha <= MovimentosDaRainha);

printf("\nMOVIMENTO DE EL CAVALLO\n");


int MovimentoDeElCaballo =1;

while (MovimentoDeElCaballo--)
{
    for (int AndaCavalo = 0; AndaCavalo < 2; AndaCavalo++){
    printf("baixo\n");
    }
    printf("esquerda\n");
}

return 0;

}