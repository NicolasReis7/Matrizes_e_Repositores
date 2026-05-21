#include <stdio.h>

int main() {

    int numeros[10];
    int maior, menor;

    printf("Digite 10 numeros inteiros:\n");

    for(int i = 0; i < 10; i++) {

        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        if(i == 0) {
            maior = numeros[i];
            menor = numeros[i];
        }

        if(numeros[i] > maior) {
            maior = numeros[i];
        }

        if(numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    printf("\nMaior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

    getch();
}
