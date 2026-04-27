  #include <stdio.h>

int main() {
    float numeros[10], auxiliar;

    for(int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &numeros[i]);
    }
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 9; j++) {
            if(numeros[j] > numeros[j + 1]) {
                auxiliar = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = auxiliar;
            }
        }
    }

    printf("\nVetor em ordem crescente:\n");
    for(int i = 0; i < 10; i++) {
        printf("%.2f ", numeros[i]);
    }
    
    return 0;
}
