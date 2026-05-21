#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[25];
    int menor, posicao;

    // Semente fixa
    srand(1);

    // Preenche o vetor
    for(int i = 0; i < 25; i++) {
        vetor[i] = rand() % 101;
    }

    // Inicializa com o primeiro elemento
    menor = vetor[0];
    posicao = 0;

    // Procura o menor valor
    for(int i = 1; i < 25; i++) {
        if(vetor[i] < menor) {
            menor = vetor[i];
            posicao = i;
        }
    }

    // Mostra o vetor
    printf("Vetor:\n\n");
    for(int i = 0; i < 25; i++) {
        printf("%3d ", vetor[i]);
    }

    // Mostra o menor valor e posição
    printf("\n\nMenor numero: %d\n", menor);
    printf("Posicao: %d\n", posicao);

}