#include <stdio.h>
#include <stdlib.h>

//Aula 099
//Como criar um vetor

int main() {

	int idades[5]; //declaração sem inicialização
	printf("%d\n", idades[4]); 
	/*
	nesse caso, o que ocorreu foi apenas a alocação de memória sem inicialização,
	ou seja, temos lixo de memória das posições consutadas.
	*/

	int idades2[] = {1, 5, 9, 34, 34}; //declaração e inicialização sem fornecer tamanho do array

	int idades3[5] = {4, 5, 7}; //declaração fornecendo tamanho e primeiros elementos
	printf("%d\n", idades3[4]); //demais elementos são zerados

	//quando há mais elementos na inicialização do que na declaração, perdem-se os elementos que sobram à direita;
	int idades4[5] = {1, 2, 3, 4, 5, 6}; 
	printf("%d\n", idades4[5]); //lixo de memória

	//Preenchendo todo o vetor com zeros:
	int idades5[32] = {0};


	char letras[100];
	char vogais[5] = {'a', 'e', 'i', 'o', 'u'};

	float notas[3] = {3.4, 5.6, 7.9}; 

	return 0;
}