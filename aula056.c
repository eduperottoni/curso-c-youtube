#include <stdio.h>
#include <stdlib.h>

//Aula 056
//Ex 5 da lista da aula 051

int main(){

	float peso, altura, imc;

	printf("Digite seu peso e sua altura: ");
	scanf("%f %f", &peso, &altura);

	imc = peso / (altura*altura);

	printf("IMC : %f\n", imc);
	
	if (imc < 18.5){
		printf("| Abaixo do peso");
	}else if (imc < 25){
		printf("| Peso normal");
	}else if (imc < 30){
		printf("| Sobrepeso");
	}else if (imc < 35){
		printf("| Obesidade grau 1");
	}else if (imc < 40){
		printf("| Obesidade grau 2");
	}else if (imc >= 40){
		printf("| Obesidade grau 3");
	}


	return 0;
}

