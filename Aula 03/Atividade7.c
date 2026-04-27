   /*7 - Um caixa eletrônico registrou 10 valores de saques realizados.
   Crie um programa que:
   calcule o total sacado
   identifique o maior saque realizado
   informe quantos saques foram acima de R$ 500*/

#include <stdio.h>

int main() {
    float saques[10], total = 0, maior = 0;
    int i, contAcima500 = 0;

    printf("Digite o valor dos 10 saques:\n");
    for(i = 0; i < 10; i++) {
        printf("Saque %d: R$ ", i + 1);
        scanf("%f", &saques[i]);
        
        total += saques[i];
        
        if(saques[i] > maior) {
            maior = saques[i];
        }
        
        if(saques[i] > 500.00) {
            contAcima500++;
        }
    }

    printf("\n--- Resumo dos Saques ---\n");
    printf("Total sacado: R$ %.2f\n", total);
    printf("Maior saque: R$ %.2f\n", maior);
    printf("Quantidade de saques acima de R$ 500,00: %d\n", contAcima500);

    return 0;
}
