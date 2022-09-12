#include <stdio.h>
#include <stdlib.h>

//Aula 132
//Final de string \0;

int main() {

	char palavra[20] = "Ola, mundo";

	//printf("Digite seu nome: ");
	//fgets(palavra, 11, stdin);

	for (int i = 0; i < 20; i++) 
		printf("%d -> %d\n", i, palavra[i]);

	//por padrão, as posições vazias do array são preenchidas com \0 -> NULL
	return 0;
}