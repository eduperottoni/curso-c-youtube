#include <stdio.h>
#include <stdlib.h>

//Aula 053
//Ex 2 da lista da aula 051

int main() {

	int negativos = 0, positivos = 0;

	for (int i = 0; i < 5; i++) {
		int digitado;
		printf("Digite um numero inteiro: ");
		scanf("%d", &digitado);

		if (digitado > 0) positivos++;
		else if (digitado < 0) negativos++;
	}

	printf("Numeros positivos: %d\n", positivos);
	printf("Numeros negativos: %d", negativos);

	return 0;
}