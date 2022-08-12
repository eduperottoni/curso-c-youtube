#include <stdio.h>
#include <stdlib.h>

//Aula 008
//Lendo caracteres com a função getc();

int main(){

	char letra;

	printf("Digite um caractere: ");
	letra = getc(stdin); //stdin indica que a leitura está sendo feita da entrada padrão do computador


	printf("Caractere lido: %c\n", letra);
	return 0;
}
