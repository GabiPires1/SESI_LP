   /*26) Peça um número e desenhe um quadrado com * (ex: número 4 → 4 linhas com 4 asteriscos).*/

#include <stdio.h>
int main() {
    int tam;
    printf("Tamanho do quadrado: ");
    scanf("%d", &tam);
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}