#include <stdio.h>
#include <stdlib.h>

//Aula023
//Caracteres de escape
/*
	\n --> Quebra de linha
	\t --> Tabulação
	\" --> Aspa dupla
	\' --> Aspa simples
	\\ --> Contrabarra
*/


int main(){

	printf("A seguir, uma quebra de linha\n\n");
	printf("\tTexto com tabulação\n");
	printf("Texto entre \"aspas\"\n");
	printf("Texto entre \'aspa simples\'\n");
	printf("Impressão de contrabarra: \\\n");
	return 0;
}