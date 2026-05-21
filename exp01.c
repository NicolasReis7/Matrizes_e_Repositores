#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[5][5];

    // Inicializa com uma semente fixa
    srand(1);

    // Preenche a matriz com números aleatórios de 0 a 100
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 101;
        }
    }

    // Exibe a matriz
   

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}