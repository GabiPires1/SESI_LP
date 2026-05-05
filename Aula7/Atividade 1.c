#include <stdio.h>
int soma(int a, int b) { return a + b; }
int subtrair(int a, int b) { return a - b; }
int multiplicar(int a, int b) { return a * b; }
int dividir(int a, int b) { 
    if (b == 0) return 0; 
    return a / b; 
}

void imprimir(char* descricao, int valor) {
    printf("%s: %i\n", descricao, valor);
}

int main() {
    int n1, n2;

    printf("Digite o primeiro valor: ");
    scanf("%i", &n1);

    printf("Digite o segundo valor: ");
    scanf("%i", &n2);

    printf("\n--- RESULTADOS ---\n");

    imprimir("Soma", soma(n1, n2));
    imprimir("Subtracao", subtrair(n1, n2));
    imprimir("Multiplicacao", multiplicar(n1, n2));
    
    if (n2 != 0) {
        imprimir("Divisao (inteira)", dividir(n1, n2));
    } else {
        printf("Divisao: Erro (divisor zero)\n");
    }

    return 0;
}