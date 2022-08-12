#include <stdio.h>
#include <stdlib.h>

//Aula6
//Variáveis do tipo string/caractere

int main(){

    char sexo = 's';
    
    printf("Valor da variável do tipo char: %c \n", sexo);

    printf("Digite o seu sexo [f, F, m ou M]: ");
    scanf("%c", &sexo);

    printf("Sexo do usuário: %c \n", sexo);
    return 0;
}
