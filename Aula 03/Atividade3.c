   /*3 - Um sistema armazenou 12 valores inteiros. classifique-os como ordem crescente, decrescente ou desordenada.*/
#include <stdio.h>

int main() {
    int v[12], i;
    int cresc = 1, desc = 1;

    printf("Digite 12 valores inteiros:\n");
    for(i = 0; i < 12; i++) {
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 11; i++) {
        if(v[i] < v[i+1]) desc = 0;
        if(v[i] > v[i+1]) cresc = 0;
    }

    if(cresc) printf("Ordem crescente.\n");
    else if(desc) printf("Ordem decrescente.\n");
    else printf("Desordenado.\n");

    return 0;
}
