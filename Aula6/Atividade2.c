#include <stdio.h>

int main() {
    float matriz[2][2];
    float soma = 0;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("A soma de todos os elementos é: %.2f\n", soma);

    return 0;
}
