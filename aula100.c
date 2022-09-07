#include <stdio.h>
#include <stdlib.h>

//Aula 100
//Como acessar/imprimir o conteúdo de um array

int main() {

	int numeros[] = {3, 4, 5, 6};
	char vogais[] = {'a','e','i','o','u'};
	
	for (int i = 0; i <= 3; i++) printf("%d ", numeros[i]);

	printf("\n");

	for (int i = 0; i <= 4; i++) printf("%c ", vogais[i]);

	return 0;
}