#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float 	soma(float *v, int tam) {
	int i;
	float r=0;
	for (i=0; i<tam; i++)
		r += v[i];
	return r;
}
	 
int main () {
	float *vet;
	int t, i;
		printf ("Digite o tamanho do seu vetor: ");
		scanf("%d", &t);
		vet= malloc(t*sizeof(float));
	for (i=0; i<t; i++)
		vet[i] = i*i+3;
	printf("%.1f\n", soma(vet, t));
	
	for (i=0; i<t; i++)
		vet[i]= i*i;
		printf("a soma dos quadrados dos vetores é: %.1f\n", soma(vet, t));
}
