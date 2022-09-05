#include <stdio.h>
#include <stdlib.h>

//Aula 048
//Operador lógico ou (||)
/*
--> Tabela verdade

x	y	x || y
0	0	0
0	1	1
1	0	1
1	1	1

*/

int main() {

	int idade;

	printf("Idade inteira da pessoa: ");
	scanf("%d", &idade);

	if (idade >= 60 || idade <= 5) {
		printf("Passe livre");
	}else{
		printf("Pessoa deve pagar a passagem");
	}

	return 0;
}
