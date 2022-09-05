#include <stdio.h>
#include <stdlib.h>

//Aula 043
//Operador Ternário em C

//condição ? verdadeiro : falso

int main() {

	int a = -5;

	//b recebe o valor de a apenas se a for positivo
	int b = (a > 0) ? a : 0;
	printf("%d\n", b);

	(b > 0) ? 
		printf("valor maior ou igual a zero") :
		printf("valor menor que zero");
	return 0;
}