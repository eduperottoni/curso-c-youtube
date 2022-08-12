#include <stdio.h>
#include <stdlib.h>

//Aula 007
//Lendo caracteres com a função getchar()

int main(){

	char letra;

	printf("Digite uma letra: ");
	letra = getchar();

	printf("Caractere lido: %c \n", letra); 

	return 0;
}