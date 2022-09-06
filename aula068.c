#include <stdio.h>
#include <stdlib.h>

//Aula 068
//Estrutura de repetição com do while

int main() {
	
	int numero;

	do {
		printf("Digite um numero inteiro positivo: ");
		scanf("%d", &numero);
	} while( numero <= 0);

	printf("Numero digitado: %d", numero);
	return 0;
}