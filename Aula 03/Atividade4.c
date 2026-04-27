   /*4 - Dado um array de 10 números, determine se existe algum valor que aparece mais da metade das vezes (valor dominante).*/

#include <stdio.h>

int main() {
    int v[10], i, j, cont, dominante = -1;

    printf("Digite 10 números:\n");
    for(i = 0; i < 10; i++) scanf("%d", &v[i]);

    for(i = 0; i < 10; i++) {
        cont = 0;
        for(j = 0; j < 10; j++) {
            if(v[i] == v[j]) cont++;
        }
        if(cont > 5) { // Mais que a metade de 10
            dominante = v[i];
            break;
        }
    }

    if(dominante != -1) printf("Valor dominante: %d\n", dominante);
    else printf("Nao existe valor dominante.\n");

    return 0;
}

