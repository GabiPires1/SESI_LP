   /*12) Conte quantos números pares existem entre 1 e 50.*/

#include <stdio.h>

int main() {
    int conta = 0;
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            conta++;
        }
    }
    printf("Existem %d numeros pares entre 1 e 50.\n", conta);
    return 0;
} 
