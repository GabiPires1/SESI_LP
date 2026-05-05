#include <stdio.h>
int soma(int a, int b) { return a + b; }

int subtrair(int a, int b) { return a - b; }

int multiplicar(int a, int b) { return a * b; }

int dividir(int a, int b) { 
    if (b == 0) return 0; 
    return a / b; 
}

void imprimir(char* descricao, int valor) {
    printf("\n>>> %s: %i\n", descricao, valor);
}

int main() {
    int n1, n2, opcao;

    do {
        printf("\n");
        printf("\n      PIRES CALCULADORA      ");
        printf("\n");
        printf("\n 1 - Soma");
        printf("\n 2 - Divisao");
        printf("\n 3 - Multiplicacao");
        printf("\n 4 - Subtracao");
        printf("\n 0 - Sair");
        printf("\n");
        printf("\nDigite uma opcao: ");
        scanf("%i", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro valor: ");
            scanf("%i", &n1);
            printf("Digite o segundo valor: ");
            scanf("%i", &n2);
        }

        switch (opcao) {
            case 1:
                imprimir("Resultado da Soma", soma(n1, n2));
                break;
            case 2:
                if (n2 != 0) {
                    imprimir("Resultado da Divisao", dividir(n1, n2));
                } else {
                    printf("\nErro: Nao e possivel dividir por zero!\n");
                }
                break;
            case 3:
                imprimir("Resultado da Multiplicacao", multiplicar(n1, n2));
                break;
            case 4:
                imprimir("Resultado da Subtracao", subtrair(n1, n2));
                break;
            case 0:
                printf("\nSaindo do programa...\n");
                break;
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0); 

    return 0;

}