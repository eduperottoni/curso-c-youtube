#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Aula 141
// Dividir string em tokens com a função strtok()

int main() {
	char palavra[] = "Eduardo Dani Perottoni";
	char *resultado;
	resultado = strtok(palavra, "!. ");
	//palavra deve ser declarada com palavra[] e não *palavra

	// strtok() divide a string por um separador
	/*
	Parâmetros
	1 - string a ser operada
	2 - separador (deve ser uma string); pode conter mais de um símbolo
	*/

	while (resultado) {
		printf("Token da string: %s\n", resultado);
		resultado = strtok(NULL, " "); // incrementa o ponteiro para a próxima palavra 
	}

	return 0;
}