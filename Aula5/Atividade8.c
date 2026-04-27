 #include <stdio.h>

int main() {
    float numeros[10], soma = 0, media;

    for(int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }

    media = soma / 10;
    printf("\nMédia: %.2f", media);
    printf("\nValores maiores que a média:\n");

    for(int i = 0; i < 10; i++) {
        if(numeros[i] > media) {
            printf("%.2f ", numeros[i]);
        }
    }
    printf("\n");

    return 0;
}