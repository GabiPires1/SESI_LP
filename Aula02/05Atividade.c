/*
    5) Cálculo de Desconto
    Leia o valor de uma compra:
    Se for maior que R$100 → desconto de 10%
    Caso contrário → desconto de 5%
    Exiba o valor final.
*/

#include <stdio.h>

int main () {
    float valorCompra, valorfinal, desconto;
    
    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);
    
    if(valorCompra > 100.0) {
        desconto = valorCompra * 0.10;
    } else {
        desconto = valorCompra * 0.5;
    }
    
    valorfinal = valorCompra - desconto;
    printf("Desconto aplicado R$ %.2f\n", desconto);
    printf("Valor total a pagar: R$ %.2f\n", valorfinal);
    
    return 0;
}
    
   