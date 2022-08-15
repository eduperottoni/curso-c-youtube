#include <stdio.h>
#include <stdlib.h>

//Aula 10
//Lendo vários valores

int main(){
	int numero1;
	int numero2;
	int numero3;

	printf("Digite 3 valores inteiros: ");
	scanf("%d%d%d", &numero1, &numero2, &numero3);
	//Tanto ESPACO quanto ENTER funcionam como separadores quando nada é setado entre os %d
	printf("Primeiro valor: %d\nSegundo valor: %d\nTerceiro valor: %d\n", numero1, numero2, numero3);
	return 0;
}
