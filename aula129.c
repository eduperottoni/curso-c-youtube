#include <stdio.h>
#include <stdlib.h>

//Aula 129
//Lendo strings do teclado

int main() {

	char palavra[10] = "oi";	
	
	printf("Digite uma palavra: ");


	//Problemas que podem ocorrer na leitura:
	////scanf por padrão lê até o 1º espaço, podendo ler apenas parte da entrada
	////Segmentation Fault, quando o array possui menos posições que o tamanho da entrada

	scanf("%10[^\n]", palavra); //palavra já é um ponteiro
	//%10 indica número máximo de letras a serem lidas -> o resto é truncado

	printf("%s\n", palavra);

	return 0;
}