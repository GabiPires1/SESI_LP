   /*25) Simule um caixa eletrônico: peça um valor e mostre quantas notas de 100, 50, 20, 10, 5 e 1 são necessárias.*/

#include <stdio.h>

int main() {
    int valor;
    printf("Valor do saque: ");
    scanf("%d", &valor);

    int notas[] = {100, 50, 20, 10, 5, 1};
    for (int i = 0; i < 6; i++) {
        int qtd = valor / notas[i];
        if (qtd > 0) {
            printf("%d nota(s) de R$ %d\n", qtd, notas[i]);
            valor %= notas[i];
        }
    }
    return 0;
}
