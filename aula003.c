#include <stdio.h>
#include <stdlib.h>

//Aula 003
//Comando system("pause") e getchar()

int main(){
    printf("Aula 003");
    printf("Não use o comando %d", printf("system('pause')"));
    //system("pause") funciona apenas no Windows

    printf("\nPressione qualquer tecla para finalizar");
    getchar();
}