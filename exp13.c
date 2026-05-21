#include <stdio.h>

int main() {

    int numeros[10];
    int maior, menor;

    // Entrada dos números
    printf("Digite 10 numeros inteiros:\n");

    for(int i = 0; i < 10; i++) {

        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        // Inicializa maior e menor
        if(i == 0) {
            maior = numeros[i];
            menor = numeros[i];
        }

        // Verifica maior
        if(numeros[i] > maior) {
            maior = numeros[i];
        }

        // Verifica menor
        if(numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    // Resultado
    printf("\nMaior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

    getch();
}