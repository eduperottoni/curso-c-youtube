#include <stdio.h>
#include <stdlib.h>

//Aula 012
//Problema ao ler caractere em C

int main(){
	int idade;
	char sexo;
	float altura, peso;

	printf("Digite idade [anos completos], peso [Kg], altura [m] e sexo [M/F]\n");
	scanf("%d%f%f %c", &idade, &peso, &altura, &sexo);
	//Problema é que o separador será lido pelo buffer e portanto o que é atribuído à variável sexo é o separador
	//Buffer do teclado => 21\n75.666\n1.75\nm
	//Espaço antes de %c garante que a leitura no buffer irá ignorar separadores de TAB, ENTER E ESPAÇO antes de ler e atribuir valor à sexo
	printf("\n--- INFORMAÇÕES ---\n");
	printf("Sexo: %c\nIdade: %d anos\nAltura: %.2f m\nPeso: %.3f Kg\n", sexo, idade, altura, peso);
	return 0;

}