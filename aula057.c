#include <stdio.h>
#include <stdlib.h>

//Aula 057
//Ex 6 da lista da aula 051

int main() {

	int numeroMes;

	printf("Digite o numero do mes: ");
	scanf("%d", &numeroMes);

	switch(numeroMes){
	case 1:
		printf("%d -> Janeiro", numeroMes);
		break;
	case 2:
		printf("%d -> Fevereiro", numeroMes);
		break;
	case 3:
		printf("%d -> Marco", numeroMes);
		break;
	case 4:
		printf("%d -> Abril", numeroMes);
		break;
	case 5:
		printf("%d -> Maio", numeroMes);
		break;
	case 6:
		printf("%d -> Junho", numeroMes);
		break;
	case 7:
		printf("%d -> Julho", numeroMes);
		break;
	case 8:
		printf("%d -> Agosto", numeroMes);
		break;
	case 9:
		printf("%d -> Setembro", numeroMes);
		break;
	case 10:
		printf("%d -> Outubro", numeroMes);
		break;
	case 11:
		printf("%d -> Novembro", numeroMes);
		break;
	case 12:
		printf("%d -> Dezembro", numeroMes);
		break;
	default:
		printf("Mes invalido...");
	}

	return 0;
}