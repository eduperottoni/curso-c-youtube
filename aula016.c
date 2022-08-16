#include <stdio.h>
#include <stdlib.h>

//Aula 016
/*
Tamanho de variáveis e tipos de dados na memória
Operador sizeof x ou sizeof(int)
*/

int main(){

	float numero = 0.55;

	printf("Variável ocupa: %d bytes\n", sizeof(numero));
	printf("Float ocupa   %d bytes\n", sizeof(float));
	printf("Int ocupa:    %d bytes\n", sizeof(int));
	printf("Char ocupa:   %d bytes\n", sizeof(char));
	printf("Double ocupa: %d bytes\n", sizeof(double));

	return 0;
}