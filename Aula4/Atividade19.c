   /*19) Peça números até o usuário digitar 999. Mostre o maior número digitado.*/

#include <stdio.h>

int main() {
    int n = 0, maior = -99999;
    while (n != 999) {
        printf("Digite um numero (999 para parar): ");
        scanf("%d", &n);
        if (n != 999 && n > maior) {
            maior = n;
        }
    }
    printf("O maior numero digitado foi: %d\n", maior);
    return 0;
}