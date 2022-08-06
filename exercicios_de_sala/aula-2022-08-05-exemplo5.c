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
	float vet[10];
	int i; 
	for (i=0; i<10; i++)
		vet[i]=i*i+3;
	printf("%f\n", soma(vet, 10));	
}
