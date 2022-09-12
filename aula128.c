#include <stdio.h>
#include <stdlib.h>

//Aula 128
// Strings

int main(){

	//Strings nada mais são que um vetor de caracteres

	char palavras[] = {"Ola, mundo!"};
	char palavra[12] = "Ola, mundo!"; 
	//última posição do array de caracteres é implícita e representa \0
	//Por isso, o número que determina o tamanho do array é dado pela quantidade de elementos + 1

	printf("%s\n", palavra);
	printf("%s\n", palavras);

	return 0;
}