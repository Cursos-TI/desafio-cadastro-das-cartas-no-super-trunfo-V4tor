#include <stdio.h>

#define LINHA 10
#define COLUNA 10

// Octaedro: x
void ataqueOctaedro(int tabuleiro[LINHA][COLUNA], int x, int y) {
    int dx[] = {-1, 0, 0, 0, 1};
    int dy[] = { 0, -1, 0, 1, 0};

    for (int i = 0; i < 5; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < LINHA && ny >= 0 && ny < COLUNA) {
            tabuleiro[nx][ny] = 92; // x (ataque octaedro)
        }
    }
}



// Cruz: C
void ataqueCruz(int tabuleiro[LINHA][COLUNA], int x, int y) {
    int dx[] = {0, 1, -1, 0, 0};
    int dy[] = {0, 0, 0, 1, -1};

    for (int i = 0; i < 5; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < LINHA && ny >= 0 && ny < COLUNA) {
            tabuleiro[nx][ny] = 91; // C
        }
    }
}

// Cone: z
void ataqueCone(int tabuleiro[LINHA][COLUNA], int x, int y) {
    // Topo do cone
    if (x >= 0 && x < LINHA && y >= 0 && y < COLUNA)
        tabuleiro[x][y] = 93;

    // Linha do meio
    for (int i = -1; i <= 1; i++) {
        int nx = x + 1;
        int ny = y + i;
        if (nx >= 0 && nx < LINHA && ny >= 0 && ny < COLUNA)
            tabuleiro[nx][ny] = 93;
    }

    // Base do cone (mais larga)
    for (int i = -2; i <= 2; i++) {
        int nx = x + 2;
        int ny = y + i;
        if (nx >= 0 && nx < LINHA && ny >= 0 && ny < COLUNA)
            tabuleiro[nx][ny] = 93;
    }
}


int main() {
    char matrizlinha[COLUNA] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[LINHA][COLUNA];
    int tamanhoNavio = 3;

    // Inicializa com água (0)
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posiciona navios (3)
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[i + 3][i] = 3;
        tabuleiro[i + 3][COLUNA - 3 - i] = 3;
    }

    for (int j = 2; j < 2 + tamanhoNavio; j++) {
        tabuleiro[5][j] = 3;
    }

    for (int i = 6; i < 6 + tamanhoNavio; i++) {
        tabuleiro[i][6] = 3;
    }

    // Aplica ataques
    ataqueOctaedro(tabuleiro, 4, 4); // x
    ataqueCruz(tabuleiro, 2, 2);     // C
    ataqueCone(tabuleiro, 7, 7);     // z

    // Impressão do tabuleiro
    printf("\n   TABULEIRO COM ATAQUES (0=água, 3=navio, C/x/z=ataques)\n\n   ");
    for (int j = 0; j < COLUNA; j++) {
        printf(" %c ", matrizlinha[j]);
    }
    printf("\n");

    for (int i = 0; i < LINHA; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < COLUNA; j++) {
            if (tabuleiro[i][j] == 0)
                printf(" 0 ");
            else if (tabuleiro[i][j] == 3)
                printf(" 3 ");
            else if (tabuleiro[i][j] == 91)
                printf(" C ");
            else if (tabuleiro[i][j] == 92)
                printf(" x ");
            else if (tabuleiro[i][j] == 93)
                printf(" z ");
            else
                printf(" ? "); // Valor inesperado
        }
        printf("\n");
    }

    return 0;
}