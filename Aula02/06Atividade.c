/*
    6) Ano Bissexto
    Leia um ano e informe se ele é bissexto ou não.

*/

#include <stdio.h>

int main () {
    int ano;
    
    printf("Digite um ano: ");
    scanf("%d", &ano);
    
    if ((ano %4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("O ano %d e BISSEXTO!\n", ano);
    } else {
        printf("O ano %d NAO e bissexto.\n", ano);
    }
    
    return 0;
}
    
   