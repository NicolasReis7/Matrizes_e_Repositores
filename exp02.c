#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[25];

    srand(1);

    for(int i = 0; i < 25; i++) {
        vetor[i] = rand() % 101;
    }
 
    for(int i = 0; i < 25; i++) {
        printf("%3d ", vetor[i]);
    }

    printf("\n");

}
