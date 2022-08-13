#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void imp(char vet[10], int pos)
{
	if (vet[pos]=='\0'){
		printf ("\n");
	}else{
		imp(vet, pos+1);
		printf("%c", vet[pos]);
	}
}

int main () {

	char vet[10];
	strcpy(vet,"gabriel");
	imp(vet,0);
}
	
