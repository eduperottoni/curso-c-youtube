#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Aula 135
//Concatenação de strings com strcat()

int main() {

    char palavra[] = "oi", palavra2[] = "como vai voce";
    char caractere[] = ",", caractere2[] = "?";

    //Parâmetros: string a ser alterada | string a se juntar
    printf("%s\n", palavra);
    strcat(palavra, caractere);
    printf("%s\n", palavra);
    strcat(palavra, palavra2);
    printf("%s\n", palavra);
    strcat(palavra, caractere2);

    printf("%s\n", palavra);

    return 0;
}