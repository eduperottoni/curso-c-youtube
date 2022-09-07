#include <stdio.h>
#include <stdlib.h>

//Aula 074
//Ex 5 da lista da aula 069

int main() {

	float nota1, nota2;
	int notasValidas = 0;

	while (notasValidas < 2){
		float nota;
		printf("Digite a %da nota: ", notasValidas + 1);
		scanf("%f", &nota);

		if (nota >= 0 && nota <= 10) {
			if (notasValidas == 0) nota1 = nota;
			else nota2 = nota;
			notasValidas++;
		}else printf("Nota invalida...\n");
	}

	printf("| Primeira nota: %.2f\n", nota1);
	printf("| Segunda nota: %.2f\n", nota2);
	printf("| MEDIA: %.2f", (nota1 + nota2)/2);	

	return 0;
}