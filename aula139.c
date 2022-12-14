#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Aula 139
//Localizando substring com a função strstr()

int main() {

	char palavra1[] = "Eduardo";
	char substring[] = "Edu";
	char *psubstring;

	psubstring = strstr(palavra1, substring);
	//Se não acha a substring, retorna nulo (segmentation fault)

	if (psubstring)
		printf("Localiz. da substring \"%s\": %c | %d\n", substring, *psubstring, psubstring);
	else
		printf("Ponteiro nulo\n");
	

	return 0;
}