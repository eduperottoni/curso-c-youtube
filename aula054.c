#include <stdio.h>
#include <stdlib.h>

//Aula 054
//Ex 3 da aula 051

int main() {
	int numero;

	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);

	if (numero % 2 == 0) printf("%d eh divisivel por 2\n", numero);
	if (numero % 3 == 0) printf("%d eh divisivel por 3\n", numero);
	if (numero % 5 == 0) printf("%d eh divisivel por 5\n", numero);
	if (numero % 2 != 0 && numero % 3 != 0 && numero % 5 != 0) printf("%d nao eh divisivel por 2, 3 ou 5", numero);

	return 0;
}