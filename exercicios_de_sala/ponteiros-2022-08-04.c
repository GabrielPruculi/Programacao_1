#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int *p; 
	printf("Estou apontando para %p\n", p);
	p=malloc(sizeof(int));
	printf("Estou apontando para %p\n", p);
	*p=10;
	printf("valor de *p: %d\n", *p);





}
