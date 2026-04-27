   /*17) Peça números até que o usuário digite um número negativo. Exiba quantos números foram digitados.*/

#include <stdio.h>

int main() {
    int n, qtd = 0;
    while (1) {
        printf("Digite um numero (negativo para parar): ");
        scanf("%d", &n);
        if (n < 0) break;
        qtd++;
    }
    printf("Voce digitou %d numeros positivos.\n", qtd);
    return 0;
}