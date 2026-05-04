/* Leia uma matriz 4x4 e encontre o maior e o menor valor.*/

#include <stdio.h>

int main() {
    int matriz[4][4];
    int maior, menor;
    int i, j;

    printf("Digite os valores para uma matriz 4x4:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = matriz[0][0];
    menor = matriz[0][0];

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
            if(matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }

    printf("\nMaior valor: %d", maior);
    printf("\nMenor valor: %d\n", menor);

    return 0;
}