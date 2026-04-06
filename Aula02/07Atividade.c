/*
   7) Verificação de Triângulo
   Leia três valores e verifique se podem formar um triângulo.
   Caso formem, classifique como:
   Equilátero
   Isósceles
   Escaleno
*/

#include <stdio.h>

int main () {
    float a, b, c;
    
    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);
    
    if ( + b > c && a + c > b && b + c > a) {
        
        printf("Os lados formam um triangulo");
        
        if(a == b && b == c) {
            printf("EQUILATERO.\n");
        }
        else if (a == b || a == c || b == c) {
            printf("ISOSCELES.\n");
        } 
        else {
            printf("ESCALENO.\n");
        }
    } else {
        printf("Essas medidas NAO podem formar um triangulo.\n");
    }
    
    return 0;
}
    
   