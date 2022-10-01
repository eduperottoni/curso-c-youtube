#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Exercício: ler uma palavra e dizer se ela é palíndroma

int main() {
    char palavra[30];
    char opcao;

    do{
        printf("\nDigite a palavra: ");
        // scanf(" %s", palavra);
        // scanf("%c");
        fgets(palavra, 30, stdin);

        for(int i = 0; i < ((strlen(palavra) - 1) / 2); i++){
;           if (palavra[i] != palavra[strlen(palavra) - 2 - i]) {
                printf("Palavra não é palíndromo!\n");
                break;
            } else if (i == ((strlen(palavra) - 3) / 2)) {
                printf("Palavra é palíndromo!\n");
            } 
        }
    
        printf("Deseja verificar mais uma palavra [S/N]? ");
        scanf("%c", &opcao);
        scanf("%c");
        
    } while (opcao != 'n' && opcao != 'N');

    return 0;
}