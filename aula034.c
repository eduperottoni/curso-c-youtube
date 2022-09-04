#include <stdio.h>
#include <stdlib.h>

int main(){

	float conta, servico;
	int pessoas;

	printf("Insira o valor da conta: R%c", 36);
	scanf("%f", &conta);
	printf("Insira a porcentagem do servico [%c]: ", 37);
	scanf("%f", &servico);
	printf("Número de pessoas: ");
	scanf("%d", &pessoas);

	float total = conta + servico/100 * conta;
	printf("Cada pessoa deve pagar R%c %.2f", 36, total / pessoas); 



	return 0;
}