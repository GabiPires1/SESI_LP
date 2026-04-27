#include <stdio.h>

int main() {
    int v[6], maior;

    for(int i = 0; i < 6; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }

    maior = v[0];

    for(int i = 1; i < 6; i++) {
        if(v[i] > maior) {
            maior = v[i];
        }
    }

    printf("Maior valor = %d\n", maior);

    return 0;
}