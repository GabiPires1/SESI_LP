   /*7) Calcule a soma dos números de 1 até 10.*/
 
 #include <stdio.h>

int main() {
int soma = 0;
for(int i = 1; i <= 10; i++) {
    soma += i;
}
printf("Soma = %d", soma);
}
