#include <stdio.h>
#include <stdlib.h>

//Aula 042
//Indentação e uso de chaves

int main(){

	//Se tiver apenas uma linha de comando, não precisa usar chaves
	int numero = 0;

	if (numero)
		printf("Numero positivo ou negativo");
	else
		printf("Numero igual a zero");

	//Se tiver mais de uma linha de comando, chaves são necessárias
	if (numero){
		printf("Numero positivo ou negativo");
		printf("| %d | > 0", numero);
	}else{
		printf("Valor igual a zero");
	}
	
	return 0;
}