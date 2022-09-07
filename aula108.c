#include <stdio.h>
#include <stdlib.h>

//Aula 108
//Lendo e preenchendo uma matriz a partir de entradas do teclado

int main() {

	int matriz[3][3];

	for (int l = 0; l < 3; l++) {
		for (int c = 0; c < 3; c++) {
			printf("Linha %d - coluna %d: ", l, c);
			scanf("%d", &matriz[l][c]);
		}
	}

	for (int l = 0; l < 3; l++) {
		for (int c = 0; c < 3; c++) {
			printf("%d ", matriz[l][c]);
		}
		printf("\n");
	}

	return 0;
}