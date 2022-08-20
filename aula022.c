#include <stdio.h>
#include <stdlib.h>

//Aula 022
//Long para double

int main(){
	float x = 3.567;
	double y = 7.1452145214521;
	long double z = 7.93782465923874652934875;

	printf("Valor de y: %.8lf\n", y);

	//Para long double, utiliza-se o %Lf
	//No Windows, %Lf não funciona, sendo necessário usar o __mingw_printf();
	printf("Valor de z: %Lf\n", z);
	printf("Long Double na memória: %ld bytes\n", sizeof z);
	return 0;
}