#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Aula 103
//Gerando números aleatórios com rand() e srand() para preenchimento do vetor

int main() {

	int numeros[10];


	srand(time(NULL)); //semente para a geração pseudoaleatória de números
	/*Para que seja diferente a cada execução do programa, passamos como parâmetro a hora do computador*/

	for (int i = 0; i < 10; i++) numeros[i] = rand(); 
	//geração de números pseudoaleatórios, porém são iguais na mesma máquina

	for(int i = 0; i < 10; i++) printf("%d ", numeros[i]);

	return 0;
}