#include <stdio.h>
#include <stdlib.h>

//Aula 071
//Ex 2 da aula 069

int main() {

	int senhaDigitada, senhaCorreta = 123456;

	do {
		printf("Digite a senha: ");
		scanf("%d", &senhaDigitada);
		
		if (senhaDigitada != senhaCorreta) {
			printf("Senha invalida\n");
		}
	}while (senhaDigitada != senhaCorreta);

	printf("Acesso permitido!");

	return 0;
}