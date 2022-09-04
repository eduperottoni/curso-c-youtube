#include <stdio.h>
#include <stdlib.h>

//Aula 040
//Estrutura condicional composta

int main(){

	int a;

	printf("Digite um número inteiro: ");
	scanf("%d", &a);

	if (a > 0) {
		printf("Numero POSITIVO!\n");
	}else if (a < 0){
		printf("Numero NEGATIVO!\n");
	}else{
		printf("Numero NULO!\n");
	}

	printf("Continuacao do programa");
	return 0;
}