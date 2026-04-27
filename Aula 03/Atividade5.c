   /*5 - Um sistema registrou a temperatura de 7 dias consecutivos.
   Crie um programa que:
   calcule a média das temperaturas
   identifique o dia mais quente e o mais frio
   informe quantos dias ficaram acima da média*/

#include <stdio.h>

int main() {
    float temp[7], soma = 0, media;
    int i, diaQuente = 0, diaFrio = 0;

    for(i = 0; i < 7; i++) {
        printf("Temperatura do dia %d: ", i + 1);
        scanf("%f", &temp[i]);
        soma += temp[i];
    }

    media = soma / 7;

    for(i = 1; i < 7; i++) {
        if(temp[i] > temp[diaQuente]) diaQuente = i;
        if(temp[i] < temp[diaFrio]) diaFrio = i;
    }

    int contAcima = 0;
    for(i = 0; i < 7; i++) {
        if(temp[i] > media) contAcima++;
    }

    printf("\nMedia: %.2f", media);
    printf("\nMais quente: dia %d (%.1f)", diaQuente + 1, temp[diaQuente]);
    printf("\nMais frio: dia %d (%.1f)", diaFrio + 1, temp[diaFrio]);
    printf("\nDias acima da media: %d\n", contAcima);

    return 0;
}

