#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
	float peso, altura;
} tipoIMC;


int main () {
	tipoIMC *imc;
	imc = malloc(sizeof(tipoIMC));
	printf("Digite seu peso: \n");
	scanf("%f", &imc->peso);
	printf("Digite sua altura: \n");
	scanf("%f", &imc->altura);
	
	printf("peso: %.2f;\naltura: %.2f;\nIMC: %.2f\n", imc->peso, imc->altura, imc->peso/pow(imc->altura,2));


}
