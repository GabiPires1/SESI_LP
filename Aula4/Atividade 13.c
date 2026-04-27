   /*13) Some apenas os números ímpares entre 1 e 100.*/

#include <stdio.h>

int main() {
    int soma = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }
    printf("A soma dos impares de 1 a 100 e: %d\n", soma);
    return 0;
}
