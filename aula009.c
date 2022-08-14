#include <stdio.h>
#include <stdlib.h>

//Aula 009
//Lendo caracteres com a função fgetc()

int main(){

	char letra;
	printf("DIgite um caractere: ");
	//stdin indica a entrada padrão do computador
	letra = fgetc(stdin); //"f" vem da palavra "file"

	printf("Caractere lido: %c\n", letra);
	return 0;
}
