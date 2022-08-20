#include <stdio.h>
#include <stdlib.h>

//Aula 029
//Operador unsigned

int main(){
	//Formatação de unsigned é %u
	//Se for usado %d, imprimirá como signed	
	unsigned int x = 2147483647;
	unsigned short int y = 55000;
	//Formatação de unsigned short é %hu ou %d
	unsigned long int z = 4765168;
	//Formatação de unsigned long é %lu
	printf("Valor: %hu\n", y);
	printf("\t%u\n", x);
	x++;
	printf("\t%u\n", x);
	return 0;
}