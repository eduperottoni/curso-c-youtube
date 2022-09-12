#include <stdio.h>
#include <stdlib.h>

//Aula 131
//Lendo strings com a função fgets()

/*
fgets() -> gets() from file
*/

int main() {

	char palavra[10] = "oi amigo";

	printf("Digite o seu nome: ");
	fgets(palavra, 10, stdin);
	//recebe onde deseja salvar a string | tamanho do vetor | file (no caso, stdin é o padrão de entrada do sistema)
	//Sempre coloca o delimitador na última posição da string e esconde seg fault

	printf("%s\n", palavra);


	return 0;
}