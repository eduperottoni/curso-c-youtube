#include <stdio.h>
#include <stdlib.h>

//Aula 050
//Switch Case --> Por baixo dos panos, utiliza o operador de igualdade

int main() {

	int escolha;
	printf("--- MENU ---\n");
	printf("[1] Cadastrar produto\n");
	printf("[2] Vender produto\n");
	printf("[3] Buscar produto\n");
	printf("[4] Imprimir relatorio\n");
	printf("[0] Sair\n");
	printf("Faca sua escolha: ");
	scanf("%d", &escolha);

	switch (escolha) {
	case 0:
		printf("logica de saida");
		break;
	case 1:
		printf("logica de cadastro");
		break;
	case 2:
		printf("logica de venda");
		break;
	case 3:
		printf("logica de busca");
		break;
	case 4:
		printf("logica de impressao");
		break;
	default:
		printf("Opcao invalida");
	}
	return 0;
}