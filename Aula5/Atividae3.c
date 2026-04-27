#include <stdio.h>

int main() {
    int v[8], soma = 0;

    for(int i = 0; i < 8; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
        soma += v[i];
    }

    printf("Soma = %d\n", soma);

    return 0;
}