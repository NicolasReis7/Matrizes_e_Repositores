#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[5][5];
    int numero;
    int encontrado = 0;

    srand(1);

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 101;
        }
    }


    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nDigite um numero para buscar: ");
    scanf("%d", &numero);

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(matriz[i][j] == numero) {
                printf("Numero encontrado na linha %d e coluna %d\n", i, j);
                encontrado = 1;
            }
        }
    }

   
    if(encontrado == 0) {
        printf("Numero nao encontrado.\n");
    }
}
