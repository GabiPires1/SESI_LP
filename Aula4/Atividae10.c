   /*10) Peça dois números e mostre todos os números entre eles.*/

#include <stdio.h>

int main() {
    int n1, n2;
    printf("Digite o inicio e o fim (ex: 5 15): ");
    scanf("%d %d", &n1, &n2);
    for (int i = n1; i <= n2; i++) {
        printf("%d ", i);
    }
    return 0;
}