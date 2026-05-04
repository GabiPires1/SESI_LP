  /* Leia uma matriz 4x4 e conte quantos números são maiores que 10.*/
#include <stdio.h>

int main() {
    int matriz[4][4];
    int cont = 0;

    printf("Digite os 16 numeros da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > 10) {
                cont++;
            }
        }
    }

    printf("\nA matriz possui %d numeros maiores que 10.\n", cont);

    return 0;
}