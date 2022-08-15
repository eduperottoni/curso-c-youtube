#include <stdio.h>
#include <stdlib.h>

//Aula013
//Lendo dois caracteres e limpando buffer

int main(){
	char letra1, letra2;

	printf("Digite duas letras: ");
	scanf("%c %c", &letra1, &letra2);
	//fflush(), de limpeza do teclado, só funciona no Windows
	printf("Primeira letra: %c\nSegunda letra: %c\n", letra1, letra2);
	return 0;
}