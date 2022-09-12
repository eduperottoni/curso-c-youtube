#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Aula 136
//Comparando duas strings com strcomp()

int main() {
    char palavra1[] = "oi", palavra2[] = "oi";
    

    printf("Resultado do teste: %d", strcmp(palavra1, palavra2));
    /*
    Retornos da função strcmp():
        0 -> strings são iguais
        1 -> segunda string ocorre antes da primeira no dicionário ( str1 > str2 )
        -1 -> segunda string ocorre depois da primeira no dicionário ( str1 < str2 )
    */

    return 0;

}