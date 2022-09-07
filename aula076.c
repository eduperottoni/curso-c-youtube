#include <stdio.h>
#include <stdlib.h>

//Aula 076
//Ex 7 da lista da aula 069

int main() {

	int n;

	printf("Digite um valor inteiro: ");
	scanf("%d", &n);

	for (int i = 2; i <= n; i+= 2){
		printf("%d -> %d\n", i, i*i);
	}

	return 0;
}