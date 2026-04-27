#include <stdio.h>

int main() {
    int v[6], menor;

    for(int i = 0; i < 6; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }

    menor = v[0];

    for(int i = 1; i < 6; i++) {
        if(v[i] < menor) {
            menor = v[i];
        }
    }

    printf("Menor valor = %d\n", menor);

    return 0;
}