#include <stdio.h>
#include <stdlib.h>

//Aula 011
//Exercício leitura e impressão de informações

int main(){

	char sexo;
	int idade;
	float altura, peso;
	printf("\n--- QUESTIONÁRIO ---\n");
	printf("Sexo [M/F]: ");
	scanf("%c", &sexo);
	printf("Idade [anos completos]: ");
	scanf("%d", &idade);
	printf("Altura [m]: ");
	scanf("%f", &altura);
	printf("Peso [Kg]: ");
	scanf("%f", &peso);

	printf("\n--- INFORMAÇÕES ---\n");
	printf("Sexo: %c\nIdade: %d anos\nAltura: %.2f m\nPeso: %.3f Kg\n", sexo, idade, altura, peso);
	
	//ou

	//printf("Digite sexo [M/F], idade [anos completos], peso [Kg], altura [m]: ")
	//scanf("%c%d%f%f", &sexo, &idade, &peso, &altura);

	return 0;
}
