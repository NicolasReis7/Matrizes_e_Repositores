#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[25];

    // Semente fixa (sempre gera os mesmos números)
    srand(1);

    // Preenche o vetor com números aleatórios de 0 a 100
    for(int i = 0; i < 25; i++) {
        vetor[i] = rand() % 101;
    }

    // Exibe os valores do vetor
 
    for(int i = 0; i < 25; i++) {
        printf("%3d ", vetor[i]);
    }

    printf("\n");

}