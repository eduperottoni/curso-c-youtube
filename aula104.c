#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Aula 103
//Gerando números aleatórios dentro de um intervalo

int main() {

	int numeros[40];

	srand(time(NULL)); //

	for (int i = 0; i <40; i++) numeros[i] = 1 + rand() % 99; //resto da divisão por 99 é sempre entre 0 e 98

	for(int i = 0; i < 40; i++) printf("%d ", numeros[i]);

	return 0;
}