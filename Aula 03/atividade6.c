   /*6 - Um sistema armazenou 10 números inteiros.
   Crie um programa que:
   separe os números em pares e ímpares
   conte quantos existem de cada tipo
   exiba os dois grupos separadamente*/

#include <stdio.h>

int main() {
    int numeros[10], pares[10], impares[10];
    int i, contPares = 0, contImpares = 0;

    printf("Digite 10 numeros inteiros:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
        
        if(numeros[i] % 2 == 0) {
            pares[contPares] = numeros[i];
            contPares++;
        } else {
            impares[contImpares] = numeros[i];
            contImpares++;
        }
    }

    printf("\n--- PARES (%d) ---\n", contPares);
    for(i = 0; i < contPares; i++) printf("%d ", pares[i]);

    printf("\n\n--- IMPARES (%d) ---\n", contImpares);
    for(i = 0; i < contImpares; i++) printf("%d ", impares[i]);
    printf("\n");

    return 0;
}

