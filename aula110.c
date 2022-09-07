#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Aula 110
//Preenchendo matriz com números aleatórios

int main(){

	int matriz[3][3];

	srand(time(NULL));

	for (int r = 0; r < 3; r++){
		for (int c = 0; c < 3; c++){
			matriz[r][c] = rand() % 29 + 1; //Números pseudoaleatórios de 1 a 30;
		}
	}


	for (int r = 0; r < 3; r++){
		for (int c = 0; c < 3; c++){
			printf("%.2d ", matriz[r][c]);
		}
		printf("\n");
	}



	return 0;
}