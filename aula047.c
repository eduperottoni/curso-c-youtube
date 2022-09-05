#include <stdio.h>
#include <stdlib.h>

//Aula 047
//Operador lógico E (&&)

/*

--> Tabela verdade:

x	y	x && y
0	1	 0
0	0	 0
1	0	 0
1	1	 1

*/

int main() {

	int idade;
	char sexo;

	printf("Sexo do cidadão [M/F] e idade inteira separador por espaco: ");
	scanf("%c %d", &sexo, &idade);

	if (sexo == 'M' && idade >= 18) {
		printf("O cidadao deve prestar sevico!");
	}else{
		printf("O cidadao nao deve se alistar!");
	}

	return 0;
}