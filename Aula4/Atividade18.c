   /*18) Solicite várias idades até o usuário digitar 0. Calcule a média das idades.*/

#include <stdio.h>

int main() {
    int idade, soma = 0, qtd = 0;
    while (1) {
        printf("Digite a idade (0 para parar): ");
        scanf("%d", &idade);
        if (idade == 0) break;
        soma += idade;
        qtd++;
    }
    if (qtd > 0) printf("A media das idades e: %.2f\n", (float)soma/qtd);
    return 0;
}
