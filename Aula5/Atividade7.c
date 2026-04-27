 #include <stdio.h>

int main() {
    float numeros[10], soma = 0, media;

    for(int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }

    media = soma / 10;
    printf("\nA média dos valores é: %.2f\n", media);

    return 0;
}