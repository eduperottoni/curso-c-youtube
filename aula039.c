#include <stdio.h>
#include <stdlib.h>

//Aula 039
//Estrutura condicional simples

int main(){

	int a;

	printf("Digite um valor inteiro: ");
	scanf("%d", &a);

	if (a < 0) {
		printf("Numero digitado eh negativo!\n");
	}
	printf("Continuacao do programa");

	return 0;
}