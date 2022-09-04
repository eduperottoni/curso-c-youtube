#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, c;

    printf("Insira os numeros a [ESPACO] b: ");
    scanf("%d %d", &a, &b);
    printf("Valores lidos -> a: %d \t b: %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("Valores trocados -> a: %d \t b: %d\n", a, b);

    return 0;
}