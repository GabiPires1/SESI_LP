/*
     4) Verificação de Aprovação
     Leia a nota de um aluno (0 a 10).
     [ Informe:
     Aprovado (nota >= 7)
     Recuperação (nota entre 5 e 6.9)
     Reprovado (nota < 5)
*/

#include <stdio.h>

int main () {
    float nota;
    
    printf("Digite a nota do aluunp (0 a 10) ");
    scanf("%f", &nota);
    
    if (nota >= 7.0){
        printf("Status: Aprovado!\n");
    }
    else if (nota >= 5.0){
        printf("Statuys: Recuperaçâo.\n");
    }
    else {
        printf("Status: Reprovado.\n");
    }
    
    return 0;
}