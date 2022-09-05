#include <stdio.h>
#include <stdlib.h>

//Aula 060
//Ex 8 da lista da aula 051 - versão 2

int main(){

	int numeroMes;
	printf("Digite o numero do mes: ");
	scanf("%d", &numeroMes);

	// if (numeroMes == 1 || numeroMes == 3 || numeroMes == 5 || numeroMes == 7 || numeroMes == 8 || numeroMes == 10 || numeroMes == 12)
	// 	printf("Esse mes possui 31 dias...");
	// else if (numeroMes == 2)
	// 	printf("Essse mes possui 28 dias...");
	// else if (numeroMes == 4 || numeroMes == 6 || numeroMes == 11) 
	// 	printf("Esse mes possui 30 dias...");
	// else printf("Mes invalido");

	switch(numeroMes){
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("%d -> Mes com 31 dias", numeroMes);
		break;
	case 2:
		printf("%d -> Mes com 28 dias", numeroMes);
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("%d -> Mes com 30 dias", numeroMes);
		break;
	default:
		printf("Mes invalido...");
	}

	return 0;
}