#include <stdio.h>

int main() {

    int vetor[5];

    // Entrada dos números
    printf("Digite 5 numeros inteiros:\n");

    for(int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Exibe em ordem inversa
    printf("\nNumeros em ordem inversa:\n");

    for(int i = 4; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

}