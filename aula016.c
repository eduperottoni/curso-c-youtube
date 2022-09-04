#include <stdio.h>
#include <stdlib.h>

//Aula 016
/*
Tamanho de variáveis e tipos de dados na memória
Operador sizeof x ou sizeof(int)
*/

int main(){

	long int numero = 55;

	printf("Variável ocupa: %d bytes\n", sizeof(numero));
	printf("Char ocupa:   %d bytes\n", sizeof(char));
	printf("Int ocupa:    %d bytes\n", sizeof(int));
	printf("Long int ocupa: %d bytes\n", sizeof(long int));
	printf("Long long int ocupa: %d bytes\n", sizeof(long long int));
	printf("Float ocupa   %d bytes\n", sizeof(float));
	printf("Double ocupa: %d bytes\n", sizeof(double));
	printf("Long double ocupa: %d bytes\n", sizeof(long double));
	return 0;
}