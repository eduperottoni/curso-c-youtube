#include <stdio.h>
#include <stdlib.h>

//Aula 067 
//Estrutura de repetição while

int main() {

	int numero;

	while(numero > 0) {
		printf("Digite um valor inteiro positivo: ");
		scanf("%d", &numero);
		printf("Valor digitado: %d\n", numero);
	}

	printf("Valor negativo! Programa sera encerrado!");

	return 0;
}