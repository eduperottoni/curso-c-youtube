#include <stdio.h>
#include <stdlib.h>

//Aula 101
//Como ler um array a partir do teclado


int main() {

	int numeros[10];

	for (int i = 0; i < 10; i++) {
		printf("Elemento para a posicao %d: ", i);
		scanf("%d", &numeros[i]);
	}

	for (int i = 0; i < 10; i++) {
		numeros[i] *= 3;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", numeros[i]);
	}

	return 0;
}
