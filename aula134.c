#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Deve-se importar a biblioteca string

//Aula 134
//Descobrir tamanho de uma string com strlen()


int main() {

    int i = 0;
    char palavra[20] = "Ola, mundo";
    
    while(palavra[i] != '\0'){
        printf("%d -> %d | %c\n", i,palavra[i],palavra[i]);
        i++;
    }
    printf("String: %s ", palavra);
    printf("Tamanho da string: %d\n", strlen(palavra));
    i=0;
    printf("Digite algo: ");
    fgets(palavra, 20, stdin);

    while(i < 20){
        printf("%d -> %d | %c\n", i,palavra[i],palavra[i]);
        i++;
    }
    printf("String: %s ", palavra);
    printf("Tamanho da string: %d", strlen(palavra));
    
    return 0;
}
