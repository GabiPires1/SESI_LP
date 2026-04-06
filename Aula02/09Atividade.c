/*
   9) Número Positivo, Negativo ou Zero
   Leia um número e informe se ele é:
   Positivo
   Negativo
   Zero
*/

#include <stdio.h>


int main () {
    float numero;
    
    printf("Digite um numero: ");
    scanf("%f", &numero);
    
    if (numero > 0) {
        printf("O numero é: Positivo /n");
    }
    else if (numero < 0) {
        printf("O numero é: Negativo/n");
    }
    else {
        printf("On numero é: Zero/n");
    }
    
    return 0;
}
   