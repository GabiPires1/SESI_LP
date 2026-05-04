/* Multiplique duas matrizes 2x2.*/

#include <stdio.h>

int main() {
    int a[2][2], b[2][2], res[2][2];
    int i, j, k;

    printf("Digite os elementos da Matriz A (2x2):\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    printf("Digite os elementos da Matriz B (2x2):\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            res[i][j] = 0; 
            for(k = 0; k < 2; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nResultado da Multiplicacao:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}