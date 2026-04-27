
    /*1 - Um professor registrou as notas de 10 alunos em um array.
    Crie um programa que:
    calcule a média da turma
    identifique quantos alunos ficaram acima da média
    exiba apenas as notas acima da média */


#include <stdio.h>

int main() {
    float notas[10], soma = 0, media;
    int i, acima = 0;

    for(i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 10;

    printf("\nMedia da turma: %.2f\n", media);

    printf("Notas acima da media:\n");
    for(i = 0; i < 10; i++) {
        if(notas[i] > media) {
            printf("%.2f\n", notas[i]);
            acima++;
        }
    }

    printf("Alunos acima da media: %d\n", acima);

    return 0;
}