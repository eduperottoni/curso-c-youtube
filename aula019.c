#include <stdio.h>
#include <stdlib.h>

//Aula 019
//Operador long
//Utiliza 64 bits
//Formatado com %li ou %ld

int main(){

	long int x = 2147483647;

	printf("Memória para long int: %ld bytes\n", sizeof x);

	printf("Valor de x: %li\n", x);
	x++;
	printf("Valor de x: %li\n", x);
	return 0;
}