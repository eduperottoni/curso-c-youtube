#include <stdio.h>
#include <stdlib.h>

//Aula 045
//Operador ternário aninhado

int main() {

	int a = 7;

	(a < 0) ? 
		printf("valor negativo") :
		(a == 0) ?
			printf("valor igual a zero") :
			printf("valor positivo");
	
	return 0;
}