#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float *n1, *n2, *soma; 
	
	n1=malloc(sizeof(float));
	printf("Digite um número:\n");
	scanf("%f", n1);
	
	n2=malloc(sizeof(float));
	printf ("Digite outro número: \n");
	scanf("%f", n2);
	
	soma=malloc(sizeof(float));
	*soma=*n1+*n2;
	
	printf("A soma é: %.2f\n", *soma);
	

}
