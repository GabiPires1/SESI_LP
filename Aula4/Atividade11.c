   /*11) Peça um número e calcule o fatorial dele.*/

#include <stdio.h>

int main() {
    int n;
    long long fat = 1; // long long para suportar números maiores
    printf("Digite um numero: ");
    scanf("%d", &n);
    for (int i = n; i > 1; i--) {
        fat *= i;
    }
    printf("O fatorial de %d e: %lld\n", n, fat);
    return 0;
}
