#include <stdio.h>
#include <stdlib.h>

//Aula 17
//Reduzindo consumo de memória com o operador short

int main(){

    int y = 0;
    short int x = 32767;
    //Como short int tem 2 bytes, pode-se armazenar valores nesse range binário

    printf("Tamanho de um int na memória: %ld bytes\n", sizeof y);
    printf("Tamanho de um short int: %ld bytes\n", sizeof(x));


    //Short int armazena de -32768 à 32767
    //Exemplo de overflow:
    printf("Valor de x: %hi\n", x);
    x++;
    printf("Valor de x: %hi\n", x);

    return 0;
}