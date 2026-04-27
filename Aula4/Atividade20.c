   /*20) Faça um programa que peça uma senha até que o usuário acerte (senha fixa no código).*/

#include <stdio.h>

int main() {
    int senha;
    const int correta = 2024;
    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);
        if (senha != correta) printf("Senha incorreta!\n");
    } while (senha != correta);
    printf("Acesso liberado!\n");
    return 0;
}
