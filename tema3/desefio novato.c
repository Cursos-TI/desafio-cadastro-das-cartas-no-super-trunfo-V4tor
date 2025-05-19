#include <stdio.h>

int main (){

    //movimento da torre
    printf("\nMOVIMENTO DA TORRE\n");

for (int torre = 0; torre < 5; torre++)
{
    printf("Direita\n");
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


