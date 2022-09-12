#include <stdio.h>
#include <stdlib.h>

//Aula 130
//Lendo strings com a função gets

int main() {

    char palavra[20] = "oi pessoal";

    printf("Digite seu nome: ");
    gets(palavra);
    //Assim como o scanf(), gets() pode gerar problemas de segmentação

    printf("%s", palavra);

    return 0;
}