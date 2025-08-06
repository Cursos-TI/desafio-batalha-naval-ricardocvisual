#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO_1 4
#define TAMANHO_NAVIO_2 3

int main() {
    // Declaração do tabuleiro
    char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {{'~'}};

    // Posições iniciais dos navios
    int navio1_x = 2; // Linha
    int navio1_y = 3; // Coluna

    int navio2_x = 7; // Linha
    int navio2_y = 1; // Coluna

    // Posicionando o primeiro navio (horizontal)
    printf("Posicionando o primeiro navio (horizontal):\n");
    for (int i = 0; i < TAMANHO_NAVIO_1; i++) {
        // Marcando a posição do navio com 'N'
        tabuleiro[navio1_x][navio1_y + i] = 'N';
        printf("  - Coordenada: [%d][%d]\n", navio1_x, navio1_y + i);
    }

    // Posicionando o segundo navio (vertical)
    printf("\nPosicionando o segundo navio (vertical):\n");
    for (int i = 0; i < TAMANHO_NAVIO_2; i++) {
        // Marcando a posição do navio com 'N'
        tabuleiro[navio2_x + i][navio2_y] = 'N';
        printf("  - Coordenada: [%d][%d]\n", navio2_x + i, navio2_y);
    }

    // Opcional: exibindo o tabuleiro completo para visualização
    printf("\nTabuleiro final:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}