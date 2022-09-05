#include <stdio.h>
#include <stdlib.h>

//Aula 052
//Ex 1 da lista da aula 51

int main(){

	float numero, menor, maior;

	for (int i = 0; i < 3; i++) {
		printf("Digite o %d inteiro: ", i + 1);
		scanf("%f", &numero);

		if (i == 1) {
			maior = numero;
			menor = numero;
		}else{
			if (numero < menor) menor = numero;
			else if (numero > maior) maior = numero;
		}
	}

	printf("Maior valor: %f\n", maior);
	printf("Menor valor: %f\n", menor);


	return 0;
}