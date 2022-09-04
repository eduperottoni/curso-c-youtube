#include <stdio.h>
#include <stdlib.h>

int main(){

	int segundos, minutos, horas;

	printf("Tempo inteiro em segundos: ");
	scanf("%d", &segundos);

	horas = (segundos/3600);
	segundos = segundos - horas*3600;
	minutos = (segundos/60);
	segundos = segundos - minutos*60;

	printf("%d:%d:%d", horas, minutos, segundos);

	return 0;
}