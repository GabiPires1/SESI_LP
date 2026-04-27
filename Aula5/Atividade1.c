#include <stdio.h>

int main() {
    int v[5];

    for(int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }

    printf("Valores digitados:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}