#include <stdio.h>
#include <stdlib.h>

//Aula 049
//else if encadeados

int main() {

	int numero;

	printf("Digite um numero: ");
	scanf("%d", &numero);

	//Usando condicionais aninhados
	if (numero > 0) {
		printf("Numero positivo\n");
	}else{
		if (numero == 0){
			printf("Numero igual a zero\n");
		}else{
			printf("Numero negativo\n");
		}
	}

	//Usando condicionais encadeados
	if (numero > 0) 
		printf("Numero positivo");
	else if(numero == 0)
		printf("Numero igual a zero");
	else
		printf("Numero negativo");

	return 0;
}
