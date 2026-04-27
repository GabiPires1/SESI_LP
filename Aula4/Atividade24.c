/*24) Peça um número e verifique se ele é primo.*/

#include <stdio.h>
int main() {
    int n, div = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) div++;
    }
    if (div == 2) printf("%d e primo.\n", n);
    else printf("%d nao e primo.\n", n);
 return 0;
}