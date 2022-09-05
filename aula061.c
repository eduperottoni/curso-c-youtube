#include <stdio.h>
#include <stdlib.h>

//Aula 061
//Exercício 9 da lista da aula 051

int main() {

	float nota1, nota2, nota3, resultado;
	char opcao;

	printf("Primeira nota: ");
	scanf("%f", &nota1);
	printf("Segunda nota: ");
	scanf("%f", &nota2);
	printf("Terceira nota: ");
	scanf("%f", &nota3);

	printf("\n-- OPCOES DE MEDIA --\n");
	printf("[a] media aritmetica\n");
	printf("[p] media ponderada (pesos 3, 3 e 4)\n");
    printf("Escolha: ");
	scanf(" %c", &opcao);

	switch(opcao){
	case 'a':
    case 'A':
		resultado = (nota1 + nota2 + nota3) / 3;
		break;
	case 'p':
    case 'P':
		resultado = (nota1*3 + nota2*3 + nota3*4) / 10;
		break;
	default:
		printf("Opcao invalida!");
        return 0;
	}

    printf(" -> MEDIA : %.2f", resultado);

	return 0;
}
