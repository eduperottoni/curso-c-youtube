#include <stdio.h>
#include <stdlib.h>

int main(){

	int a, b;

    printf("Insira os numeros a [ESPACO] b: ");
    scanf("%d %d", &a, &b);
    printf("Valores lidos -> a: %d \t b: %d\n", a, b);
    
	a = a + b;
	b = a - b;
	a = a - b;
    
	printf("Valores trocados -> a: %d \t b: %d\n", a, b);
	return 0;
}