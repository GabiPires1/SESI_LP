#include <stdio.h>

int main() {
    int v[10];

    for(int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }

    printf("Numeros pares:\n");
    for(int i = 0; i < 10; i++) {
        if(v[i] % 2 == 0) {
            printf("%d ", v[i]);
        }
    }

    return 0;
}