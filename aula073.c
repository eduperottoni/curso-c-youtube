#include <stdio.h>
#include <stdlib.h>

//Aula 073
//Ex 4 da lista da aula 069

int main() {
	
	int contador = 0;

	//Loop abaixo executa apenas 250 vezes
	for (int i = 1; i < 500; i += 2){
		contador += i + (1000 - i);
	}

	//Poderia ser substituído por:
	/*
	contador = 1000 * ((1000/2)/2) -> Soma de extremos
	*/

	printf("Soma dos impares ate 1000: %d", contador);

	return 0;
}