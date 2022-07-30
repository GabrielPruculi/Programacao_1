#include <stdio.h>
#include <stdlib.h>
int main () {
int *idade;
idade = malloc(sizeof(int));
printf("Digite sua idade: \n");
scanf("%d", idade);
printf ("Sua idade é %d anos\n", *idade);

}
