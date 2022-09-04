#include <stdio.h>
#include <stdlib.h>

int main(){

	float reais, dolares, cambio = 5.3;

	printf("Valor em reais: R%c", 36);
	scanf("%f", &reais);
	printf("Cambio -> R%c %.2f = US%c 1.00\n", 36, cambio, 36);
	printf("Valor em dolares: US%c %.2f", 36, reais/cambio);
	return 0;
}