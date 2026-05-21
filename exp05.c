#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[25];
    int numero;
    int encontrado = 0;

    srand(1);

    for(int i = 0; i < 25; i++) {
        vetor[i] = rand() % 101;
    }


    for(int i = 0; i < 25; i++) {
        printf("%3d ", vetor[i]);
    }

    
    printf("\n\nDigite um numero para buscar: ");
    scanf("%d", &numero);

    for(int i = 0; i < 25; i++) {
        if(vetor[i] == numero) {
            printf("Numero encontrado na posicao %d\n", i);
            encontrado = 1;
        }
    }

    if(encontrado == 0) {
        printf("Numero nao encontrado.\n");
    }

}
