#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[25];
    int numero;
    int encontrado = 0;

    // Semente fixa
    srand(1);

    // Preenche o vetor com números aleatórios
    for(int i = 0; i < 25; i++) {
        vetor[i] = rand() % 101;
    }

    // Mostra o vetor

    for(int i = 0; i < 25; i++) {
        printf("%3d ", vetor[i]);
    }

    // Pede um número ao usuário
    printf("\n\nDigite um numero para buscar: ");
    scanf("%d", &numero);

    // Procura o número no vetor
    for(int i = 0; i < 25; i++) {
        if(vetor[i] == numero) {
            printf("Numero encontrado na posicao %d\n", i);
            encontrado = 1;
        }
    }

    // Caso não encontre
    if(encontrado == 0) {
        printf("Numero nao encontrado.\n");
    }

}