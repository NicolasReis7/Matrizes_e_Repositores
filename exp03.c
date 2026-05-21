#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[25];
    int maior, posicao;

    // Semente fixa
    srand(1);

    // Preenche o vetor
    for(int i = 0; i < 25; i++) {
        vetor[i] = rand() % 101;
    }

    // Inicializa maior e posição
    maior = vetor[0];
    posicao = 0;

    // Encontra o maior valor e sua posição
    for(int i = 1; i < 25; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

    // Mostra o vetor
    for(int i = 0; i < 25; i++) {
        printf("%3d ", vetor[i]);
    }

    // Mostra o maior valor e posição
    printf("\n\nMaior numero: %d\n", maior);
    printf("Posicao: %d\n", posicao);

}