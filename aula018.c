#include <stdio.h>
#include <stdlib.h>

//Aula 18
//Tamanho de um int na memória
//Intervalo de representação de 32 bits (4 bytes)

int main(){
    //Ou seja, ocorre overflow
    //Exemplo de overflow:

    int x = 2056456546;
    int y = 2045454545;

    printf("Soma de %d + %d = %d\n", x, y, x + y);
    return 0;
}