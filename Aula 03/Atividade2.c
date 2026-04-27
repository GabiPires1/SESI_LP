  /*2 - Uma pesquisa coletou a idade de 15 pessoas.
  Desenvolva um programa que:
  classifique as idades em: jovem (até 17), adulto (18–59) e idoso (60+)
  informe qual grupo possui maior quantidade*/

#include <stdio.h>

int main() {
    int idade[15];
    int i, jovem = 0, adulto = 0, idoso = 0;

    for(i = 0; i < 15; i++) {
        printf("Digite a idade %d: ", i+1);
        scanf("%d", &idade[i]);

        if(idade[i] <= 17)
            jovem++;
        else if(idade[i] <= 59)
            adulto++;
        else
            idoso++;
    }

    printf("\nJovens: %d\nAdultos: %d\nIdosos: %d\n", jovem, adulto, idoso);

    if(jovem > adulto && jovem > idoso)
        printf("Grupo com mais pessoas: Jovem\n");
    else if(adulto > jovem && adulto > idoso)
        printf("Grupo com mais pessoas: Adulto\n");
    else
        printf("Grupo com mais pessoas: Idoso\n");

    return 0;
}
