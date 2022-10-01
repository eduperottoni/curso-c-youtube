#include <stdio.h>
#include <stdlib.h>

// Aula 142
// Matriz de strings em C

int main() {

	char palavras[5][25];

	for (int i = 0; i < 5; i++) {
		printf("Digite o nome da posição %d: ", i);
		//scanf("%25[^\n]", palavras[i]);
		fgets(palavras[i], 25, stdin);
	}

	for (int i = 0; i < 5; i++) {
		printf("Nome %d : %s\n", i, palavras[i]);
	}

	return 0;
}