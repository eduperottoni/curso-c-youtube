#include <stdio.h>
#include <stdlib.h>
//Utilizar para acentuação
#include <locale.h>

//Aula 030
//Acentuação e tabela ASCII

int main(){

    //setlocale(LC_ALL,NULL); -> padrão da linguagem C
    setlocale(LC_ALL,"pt_BR_utf8"); //-> utilizar a config de localização do SO
    //setlocale(LC_ALL,"Portuguese"); // -> língua portuguesa - BR

    printf("%s\n", setlocale(LC_ALL, "Portuguese"));

    char letra = 'f';

    //Se utilizar %d na formatação, retorna o número na tabela ASCII
    //Se utilizar %c passando um número, retorna o caractere
    printf("%c", 102);
    printf("%d", letra);

    printf("Coração");

    return 0;
}
