#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Aula 063
//Ex 10 da lista da aula 051

int main() {
	int a, b, c;
	bool isTriangle = false;

	printf("Insira os tres lados: ");
	scanf("%d %d %d", &a, &b, &c);

	if (a < b + c && b < a + c && c < a + b) {
		isTriangle = true;
		printf("Esses lados podem formar um triangulo\n");
	}else{
		printf("Esses lados nao podem formar um triangulo\n");
	}

	if (isTriangle)
		if (a == b && b == c)
			printf("Esse triangulo eh equilatero...");
		else if (a == b || a == c || b == c)
			printf("Esse triangulo eh isosceles...");
		else printf("Esse triangulo eh escaleno...");
	return 0;
}