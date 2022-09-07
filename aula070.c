#include <stdio.h>
#include <stdlib.h>

//Aula 070
//Ex 1 da lista da aula 069

int main() {

	int numero;

	do {
		printf("Digite um numero para ver sua tabuada: ");
		scanf("%d", &numero);
	} while (numero > 10 || numero < 1);

	for (int i = 1; i <= 10; i++) {
		printf("%d x %d = %d\n", numero, i, numero*i);
	}

	return 0;
}