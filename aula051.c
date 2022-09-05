#include <stdio.h>
#include <stdlib.h>

//Aula 051
//Switch Case --> Por baixo dos panos, utiliza o operador de igualdade

int main() {

	int escolha;
	printf("--- MENU ---\n");
	printf("[A] Cadastrar produto\n");
	printf("[B] Vender produto\n");
	printf("[C] Buscar produto\n");
	printf("[D] Imprimir relatorio\n");
	printf("[Z] Sair\n");
	printf("Faca sua escolha: ");
	scanf("%d", &escolha); //Se jogar um int em %d no switch ele irá comparar com o correspondente na tabela ASCII
	printf("Escolha em int: %d\n", escolha);
	printf("Escolha em char: %c\n", escolha);

	switch (escolha) {
	case 'Z':
		printf("logica de saida");
		break;
	case 'A':
		printf("logica de cadastro");
		break;
	case 'B':
		printf("logica de venda");
		break;
	case 'C':
		printf("logica de busca");
		break;
	case 'D':
		printf("logica de impressao");
		break;
	default:
		printf("Opcao invalida");
	}
	return 0;
}