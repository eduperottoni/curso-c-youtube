#include <stdio.h>
#include <stdlib.h>

// Aula 4
// Lendo e armazenando números inteiros em variáveis

int main() {

    //Criação
    int valor, valor2; //variável do tipo inteiro criada
    //Atribuição    
    valor = 5; //valor atribuído à variável
    
    //Lendo input
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor); //%d indica que o número será inteiro

    printf("Digite um segundo valor inteiro: ");
    scanf("%d", &valor2);

    printf("Primeiro valor: %d \nSegundo valor: %d \n", valor, valor2);
    return 0;
}