#include <stdio.h>

#define LINHA 10
#define COLUNA 10

int main() {

    char matrizlinha[LINHA] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[LINHA][COLUNA];
    int tamanhoNavio = 3;

    // Inicializa o tabuleiro com 0 (água)
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 1º navio - diagonal abaixo da principal (esquerda)
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[i + 3][i] = 3;
    }

    // 2º navio - diagonal abaixo da secundária (direita)
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[i + 3][COLUNA - 3 - i] = 3;
    }

    // 3º navio - horizontal na linha 6 (índice 5), colunas 2 a 4
    for (int j = 2; j < 2 + tamanhoNavio; j++) {
        tabuleiro[5][j] = 3;
    }

    // 4º navio - vertical na coluna 7 (índice 6), linhas 7 a 9
    for (int i = 6; i < 6 + tamanhoNavio; i++) {
        tabuleiro[i][6] = 3;
    }

    // Cabeçalho das colunas (letras)
    printf("\n   TABULEIRO BATALHA NAVAL\n\n   ");
    for (int j = 0; j < COLUNA; j++) {
        printf(" %c ", matrizlinha[j]);
    }
    printf("\n");

    // Impressão da matriz com numeração das linhas
    for (int i = 0; i < LINHA; i++) {
        printf("%2d ", i + 1);  // Números das linhas (1 a 10)
        for (int j = 0; j < COLUNA; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}