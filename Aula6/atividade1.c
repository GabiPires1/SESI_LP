/*1)Leia uma matriz 3x3 e exiba todos os elementos.*/
#include <stdio.h>

int main() {
	int matriz[3][3];

	for(int l=0; l < 3; l++) {
		for(int c=0; c<3; c++) {
        	printf("Dgite o valor de Linha:%i e Coluna %i ", l+1, c+1);
        	scanf("%i", &matriz[l][c]);		
		}
	}



	for(int l=0; l < 3; l++) {
		for(int c=0; c<3; c++) {
			printf(" %i", matriz[l][c]);
		}
		printf("\n");
	}



	return 0;
}
