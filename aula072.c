#include <stdio.h>
#include <stdlib.h>

//Aula 072
//Ex 3 da lista da aula 069

int main() {

	int contador = 0;

	for (int i = 1; i < 1000; i += 2) {
		contador += i;
	}

	printf("Soma dos impares ate 1000: %d", contador);

	return 0;
}