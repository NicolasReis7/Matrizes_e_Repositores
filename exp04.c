#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[25];
    int menor, posicao;

    srand(1);

    for(int i = 0; i < 25; i++) {
        vetor[i] = rand() % 101;
    }

    menor = vetor[0];
    posicao = 0;

    for(int i = 1; i < 25; i++) {
        if(vetor[i] < menor) {
            menor = vetor[i];
            posicao = i;
        }
    }

    printf("Vetor:\n\n");
    for(int i = 0; i < 25; i++) {
        printf("%3d ", vetor[i]);
    }

    
    printf("\n\nMenor numero: %d\n", menor);
    printf("Posicao: %d\n", posicao);

}
