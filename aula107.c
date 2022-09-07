#include <stdio.h>
#include <stdlib.h>

//Aula 106
//Como imprimir o conteúdo de uma matriz

int main() {

	int matriz[2][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	char matriz2[3][4] = {'a','b','c','d','e','f','g','h','i','j','k','l'};

	for (int i = 0; i < 2; i++){
		for (int x = 0; x < 5; x++) 
			printf("%d ", matriz[i][x]);
		printf("\n");
	}

	printf("\n");

	for (int i = 0; i < 3; i++){
		for (int x = 0; x < 4; x++) 
			printf("%c ", matriz2[i][x]);
		printf("\n");
	}
		

	

	return 0;
}