#include <stdio.h>
#include <stdlib.h>

//Aula 055
//Ex 4 da lista da aula 051

int main() {
	int opcao;
	float valor, convertido;

	printf("--- MENU ---\n");
	printf("[1] US%c -> R%c\n", 36, 36);
	printf("[2] R%c -> US%c\n", 36, 36);
	printf("[0] Sair\n");
	printf("Opcao: ");
	scanf("%d", &opcao);

	if (opcao == 0){
		printf("Tchau...");
		return 0;
	}

	switch (opcao) {
	case 1:
		printf("Valor a ser convertido: US%c", 36);
		scanf("%f", &valor);
		convertido = valor*5.3;
		printf("Valor convertido: R%c %.2f", 36, convertido);
		break;
	case 2:
		printf("Valor a ser convertido: R%c", 36);
		scanf("%f", &valor);
		convertido = valor/5.3;
		printf("Valor convertido: US%c %.2f", 36, convertido);
		break;
	default:
		printf("Opcao invalida...");
	}

	return 0;
}