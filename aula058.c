#include <stdio.h>
#include <stdlib.h>

//Aula 057
//Ex 7 da lista da aula 051

int main() {
	char caractere;

	printf("Digite uma letra:");
	scanf("%c", &caractere);

	if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' 
		|| caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U') {
		printf("%c eh uma vogal", caractere);
	}else{
		printf("%c eh uma consoante", caractere);
	}
	return 0;
}