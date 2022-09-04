#include <stdio.h>
#include <stdlib.h>

//Aula 025
//Casting (conversão de tipos) em C

/*

*/

int main(){
	int x = 2, y = 5;
	float pi = 3.1415;
	//Exemplo de casting:
	x = (int)pi;

	printf("Valor de a: %d\n", x);

	//Exemplo de casting:
	//Quando um elemento da divisão é convertido, o outro é convertido internamente de forma automática
	printf("Divisão: %f\n", (float)x/y);

	printf("Subtração: %d\n", x - y);
	return 0;
}
