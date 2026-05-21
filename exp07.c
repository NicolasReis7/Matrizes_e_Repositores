#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[25];
    int opcao, temp;

    srand(time(NULL));

    for (int i = 0; i < 25; i++) {
        vetor[i] = rand() % 101;
    }

    printf("Vetor original:\n\n");
    for (int i = 0; i < 25; i++) {
        printf("%3d ", vetor[i]);
    }

    printf("\n\nEscolha a ordenacao:\n");
    printf("1 - Crescente\n");
    printf("2 - Decrescente\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    for (int i = 0; i < 24; i++) {
        for (int j = 0; j < 24 - i; j++) {
            if ((opcao == 1 && vetor[j] > vetor[j + 1]) ||
                (opcao == 2 && vetor[j] < vetor[j + 1])) {
                
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    printf("\nVetor ordenado:\n\n");
    for (int i = 0; i < 25; i++) {
        printf("%3d ", vetor[i]);
    }

    printf("\n");

    getch();
}