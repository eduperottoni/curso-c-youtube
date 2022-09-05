#include <stdio.h>
#include <stdlib.h>

//Aula 059
//Ex 8 da lista da aula 051

int main(){

	int numeroMes;
	printf("Digite o numero do mes: ");
	scanf("%d", &numeroMes);

	switch(numeroMes){
	case 1:
		printf("%d -> Janeiro: 31 dias", numeroMes);
		break;
	case 2:
		printf("%d -> Fevereiro: 28 dias", numeroMes);
		break;
	case 3:
		printf("%d -> Marco: 31 dias", numeroMes);
		break;
	case 4:
		printf("%d -> Abril: 30 dias", numeroMes);
		break;
	case 5:
		printf("%d -> Maio: 31 dias", numeroMes);
		break;
	case 6:
		printf("%d -> Junho: 30 dias", numeroMes);
		break;
	case 7:
		printf("%d -> Julho: 31 dias", numeroMes);
		break;
	case 8:
		printf("%d -> Agosto: 31 dias", numeroMes);
		break;
	case 9:
		printf("%d -> Setembro: 30 dias", numeroMes);
		break;
	case 10:
		printf("%d -> Outubro: 31 dias", numeroMes);
		break;
	case 11:
		printf("%d -> Novembro: 30 dias", numeroMes);
		break;
	case 12:
		printf("%d -> Dezembro: 31 dias", numeroMes);
		break;
	default:
		printf("Mes invalido...");
	}
	return 0;
}