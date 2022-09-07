#include <stdio.h>
#include <stdlib.h>

//Aula 105
//Como criar uma matriz

int main() {

	//Matriz também é conjunto homogêneo

	//Obrigatoriamente deve-se informar o número de colunas
	//Nesse caso, o a inicialização informa o número de linhas
	int matriz[][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};

	printf("%d\n", matriz[0][2]);


	//Quando apenas declarado, deve-se informar o tamanho das duas dimensões
	int matriz2[2][3];

	printf("%d\n", matriz2[0][2]);

	int matriz3[][4] = {1, 2, 3, 4, 5, 6, 7, 8};
	/* Nesse caso, cada número é alocado em uma coluna, até exceder a linha e ir para a próxima
	Quando não tiver mais espaço, a informação será perdida*/
	printf("%d\n", matriz3[1][2]);
	printf("%d\n", matriz3[1][5]); //lixo de memória

	int matriz4[][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	/* Preenche três últimas colunas da terceira linha com zeros*/
	printf("%d\n", matriz4[2][3]);

	return 0;
}