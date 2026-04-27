   /*23) Exiba todos os números entre 1 e 100 que são divisíveis por 3 e 5 ao mesmo tempo.*/

#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
