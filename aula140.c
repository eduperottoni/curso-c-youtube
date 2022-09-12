#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Aula 140
//Convertendo strings para maiúsculo e minúsculo com strupr() e strlwr()

int main() {

	char palavra[] = "eduardo";
	char palavra2[] = "LUCIANE";

	printf("Palavra em maiusculo: %s\n", strupr(palavra)); 
	printf("Palavra em minusculo: %s", strlwr(palavra2)); 

	//Funções retornam strings alteradas

	return 0;
}