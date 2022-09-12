#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Aula 137
//Copiando string com a função strcopy()

int main() {

	char palavra1[] = "oi", palavra2[] = "tchau";

	printf("%s\n", palavra1);
	printf("%s\n", palavra2);

	strcpy(palavra1, palavra2);
	//Parâmetros -> destino e origem

	printf("%s\n", palavra1);
	printf("%s\n", palavra2);

	return 0;
}