#include <stdio.h>
#include <stdlib.h>

int main(){

	int dias;

	printf("Numero de dias trabalhados: ");
	scanf("%d", &dias);

	float total = dias*45;

	printf("Quantia a ser paga: \n-> 8%c de IR: R%c%.2f\n-> 96%c Liq: R%c%.2f", 37, 36, 0.08*total, 37,36, 0.96*total);

	return 0;
}