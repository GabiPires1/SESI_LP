 /* Leia uma matriz 5x5 e calcule a soma da diagonal secundária.*/

#include <stdio.h>

int main() {
    int matriz[5][5];
    int soma = 0;

    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        soma += matriz[i][4 - i];
    }

    printf("\nA soma da diagonal secundaria e: %d\n", soma);

    return 0;
}