#include <stdio.h>
#include <stdlib.h>

//Aula 077
//Ex 08 da lista da aula 69

int main() {
	int comando = 0;

	do{
		printf("--- CALCULADORA ---\n");
		printf("[1] somar\n");
		printf("[2] subtrair\n");
		printf("[3] multiplicar\n");
		printf("[4] dividir\n");
		printf("[0] SAIR\n");
		printf("Comando: ");
		scanf("%d", &comando);

		char operacao;
		float valor1, valor2, resultado;


		if (!comando)
			break;
		else if(comando < 0 || comando >=5){
			printf("Comando invalido! Tente novamente...\n");
			continue;
		}else{
			printf("Digite o 1o valor: ");
			scanf("%f", &valor1);
			printf("Digite o 2o valor: ");
			scanf("%f", &valor2);
		}
		
		switch (comando){
		case 1:
			resultado = valor1 + valor2;
			operacao = '+';
			break;
		case 2:
			resultado = valor1 - valor2;
			operacao = '-';
			break;
		case 3:
			resultado = valor1 * valor2;
			operacao = 'x';
			break;
		case 4:
			if (!valor2){
				printf("ERRO DE DIVISAO POR ZERO!\n");
				continue;
			}
			resultado = valor1 / valor2;
			operacao = '/';
			break;
		}

		printf("%.5f %c %.5f = %.5f\n\n", valor1, operacao, valor2, resultado);

	}while (comando != 0);

	printf("Shutting down calculator...");
	
	return 0;
}