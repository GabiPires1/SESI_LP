   /*21) Crie um menu simples com opções:
   1: Dizer "Olá"
   2: Dizer "Tudo bem?"
   3: Sair
   O programa deve repetir até o usuário escolher sair.*/

#include<stdio.h>
int main() {
    int opcao;
    do {
        printf("\n1: Dizer 'Ola'\n2: Dizer 'Tudo bem?'\n3: Sair\nEscolha: ");
        scanf("%d", &opcao);
        if (opcao == 1) printf("Ola!\n");
        else if (opcao == 2) printf("Tudo bem?\n");
    } while (opcao != 3);
    return 0;
}
