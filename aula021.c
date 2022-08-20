#include <stdio.h>
#include <stdlib.h>

//Aula 021
//Tipo primitivo double

int main(){

	//Para formatação de double, utiliza-se %lf
	double x = 3.67895;

	printf("Float na memória: %ld bytes\n", sizeof(float));
	printf("Double na memória: %ld bytes\n", sizeof x);

	return 0;
}