#include <stdio.h>
#include <stdlib.h>

//Aula 132
//Como descobrir o tamanho de uma string

int main() {

    int i = 0, tam = 0;
    char palavra[] = "Ola, mundo";

    while(palavra[i] != '\0'){
        printf("%d | %c\n", palavra[i],palavra[i]);
        tam++;
        i++;
    }

    printf("Tamanho da string: %d", tam);

    return 0;
}