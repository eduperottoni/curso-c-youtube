#include <stdio.h>
#include <stdlib.h>

//Aula 005
//Lendo, criando, atribuindo e printando variáveis reais

int main(){

    float numero = 3.1415;

    printf("Valor da minha variável real: %f \n", numero);
    //Por padrão, exibe float com 6 casas decimais
    printf("Valor da minha variável real modificada: %.2f \n", numero);
    
    printf("Digite um número real: ");
    scanf("%f", &numero);

    printf("Número digitado: %.4f", numero);

    return 0;
}
