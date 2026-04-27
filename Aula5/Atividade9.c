#include <stdio.h>

int main() {
    float numeros[10];

    for(int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    for(int i = 0; i < 10; i++) {
        if(numeros[i] < 0) {
            numeros[i] = 0;
        }
    }
    printf("\nVetor após substituição (negativos viram zero):\n");
    for(int i = 0; i < 10; i++) {
        printf("%.2f ", numeros[i]);
    }
    printf("\n");

    return 0;
}