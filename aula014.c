#include <stdio.h>
#include <stdlib.h>

//Aula 014
//Limpando o buffer do teclado com a função scanf()

int main(){
    char a, b;

    printf("Digite uma letra: ");
    scanf("%c", &a);

    printf("Digite outra letra: ");
    scanf(" %c", &b);
    //Espaço antes de %c deleta TAB, ESPAÇO E ENTER do buffer
    //Poderia ter sido inserido um outro scanf() entre os dois
    printf("\nPrimeira letra: %c\nSegunda letra: %c", a, b);
    return 0;
}