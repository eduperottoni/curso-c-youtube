#include <stdio.h>
#include <stdlib.h>

//Aula 044
//Estruturas condicionais aninhadas

int main() {

	int a = 7;

	if (a < 0){
		printf("Valor negativo\n");
	}else{
		if (a > 0){
			printf("Valor positivo\n");
		}else{
			printf("Valor igual a zero\n");
		}
	}

	return 0;
}