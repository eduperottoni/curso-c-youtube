#include <stdio.h>
#include <stdlib.h>

//Aula 075
//Ex 6 da lista da aula 069

int main() {

	int contador = 0; //número de ciclos executados

	for (int i = 7; i < 9999; i += 7) {
		contador++;
		printf("%do ciclo: %d\n", contador, i);
	}

	printf("O programa executou %d ciclos", contador);

	return 0;
}