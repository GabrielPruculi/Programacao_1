#include <stdio.h>
#include <stdlib.h>

int main () {
	int *vetor, i, soma=0;
	vetor = malloc(3*sizeof(int));
	for (i=0;i<3; i++){
		printf("Digite valor:\n");
		scanf("%d", &vetor[i]);
	}
	
	for (i=0;i<3; i++){
		soma = soma +vetor[i];
	}
	printf("media: %d\n", soma/3);

}
