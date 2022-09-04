#include <stdio.h>
#include <stdlib.h>

//Aula 027
//Operador de incremento -> ++;

int main(){
	int contador = 10, resultado = 10;

	//Pré-incremento --> ++var
	//Pós-incremento --> var++ (gera uma nova instrução - nova linha)

	//Sinônimos:
	/*
		var++;
		var += 1;
		var = var + 1;
	*/
	resultado = contador++;

	printf("Valor: %d\n", resultado);
	printf("Valor: %d\n", resultado);

	return 0;
}