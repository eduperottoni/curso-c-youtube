#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Aula 138
//Buscando caractere em string com strchr e strrchr

//STRCHR -> Retorna ponteiro para a 1ª ocorrência
//STRRCHR -> Retorna ponteiro para a última ocorrência

int main() {
    
    char palavra[] = "ola, eduardo";
    char *letra, *letra2;

    letra = strchr(palavra, 'b');
    //Quando o caracter não existe na string gera um segmentation fault
    letra2 = strrchr(palavra, 'a');

    printf("1a ocorrencia de %c: %d | %c\n", *letra, letra, letra);
    printf("Ultima ocorrencia de %c: %d | %c\n", *letra2, letra2, letra2 );

    return 0;

}