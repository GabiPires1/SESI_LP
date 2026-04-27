   /*9)Peça um número e mostre todos os números de 1 até ele.*/
 
 #include <stdio.h>

int main() {
    int num;
    printf("Digite o numero final: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        printf("%d ", i);
    }
    return 0;
}