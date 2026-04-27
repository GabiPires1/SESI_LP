   /*8) Solicite um número ao usuário e exiba a tabuada dele (de 1 a 10).*/
 
 #include <stdio.h>

int main() {
    int num;
    printf("Digite um numero para ver a tabuada: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}
