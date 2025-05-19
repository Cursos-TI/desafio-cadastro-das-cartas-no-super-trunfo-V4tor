#include <stdio.h>

int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Cabeçalho das colunas (letras)
    printf("\n   TABULEIRO BATALHA NAVAL\n\n   ");
    for (int j = 0; j < 10; j++) {
        printf(" %c ", linha[j]);
    }
    printf("\n");

    // Impressão da matriz com numeração das linhas
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);  // Números das linhas (1 a 10)
        for (int j = 0; j < 10; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}