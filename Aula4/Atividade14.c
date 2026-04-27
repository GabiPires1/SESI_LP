   /*14) Peça um número e mostre a contagem regressiva até 0.*/

#include <stdio.h>

int main() {
    int n;
    printf("Digite onde comeca a contagem: ");
    scanf("%d", &n);
    while (n >= 0) {
        printf("%d ", n);
        n--;
    }
    return 0;
}