#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
	float peso, altura;
} tipoIMC;
void 	calc_imc (tipoIMC *imc){
	float resultado; 
	resultado = imc->peso/pow(imc->altura,2);
	printf("%.2f\n", resultado);	
}

int main () {
	tipoIMC *imc;
	imc = malloc(sizeof(tipoIMC));
	printf("Digite seu peso: \n");
	scanf("%f", &imc->peso);
	printf("Digite sua altura: \n");
	scanf("%f", &imc->altura);
	
	calc_imc(imc);

}
