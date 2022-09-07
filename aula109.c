#include <stdio.h>
#include <stdlib.h>

//Aula 109
//Somar duas matrizes e salvar resultado em uma terceira

int main() {

	int matriz[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int matriz2[3][3] = {3, 2, 5, 7, 14, 35, 90, 27, 33};
	int matriz3[3][3];


	printf("\nSoma de matrizes\n");

	//Soma de matrizes
	for (int r = 0; r < 3; r++){
		for (int c = 0; c < 3; c++){
			matriz3[r][c] = matriz[r][c] + matriz2[r][c];
		}
	}

	for (int r = 0; r < 3; r++){
		for (int c = 0; c < 3; c++){
			printf("%2d ", matriz3[r][c]);
		}
		printf("\n");
	}

	printf("\nDobrando valore da matriz\n");

	//Dobrando cada valor da matriz
	for (int l = 0; l < 3; l++) {
		for (int c = 0; c < 3; c++) {
			matriz[l][c] *= 2;
		}
	}

	for (int l = 0; l < 3; l++) {
		for (int c = 0; c < 3; c++) {
			printf("%2d ", matriz[l][c]);
		}
		printf("\n");
	}

	return 0;
}