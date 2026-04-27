#include <stdio.h>

int main() {
    int contador = 0;
    float numero;

    for (int i = 0; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%f", &numero);

        if (numero > 0) {
            contador++;
        }
    }

    printf("Quantidade de números positivos: %d\n", contador);

    return 0;
}