/*1) ClassificaC'C#o de Idade
    Leia a idade de uma pessoa e informe:
    CrianC'a (0b - 12)
    Adolescente (13b - 17)
    Adulto (18b - 59)
    Idoso (60+)
*/

#include <stdio.h>

int main () {
	int idade;

	printf("Digite sua idade: ");
	scanf("%i", &idade);

	if(idade <= 12) {
		printf("Crianca");
	} else if(idade <= 17 ) {
		printf("Adolescente");
	} else if( idade <=59) {
		printf("Adulto");
	}else {
	    printf("Idoso");
	}

}