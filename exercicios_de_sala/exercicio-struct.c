  #include <stdio.h>
struct pessoa {
	char nome[20];
	int idade;
}
;
int main () 
{
	struct pessoa var1;
	printf("Digite seu nome: \n");
	scanf("%s", var1.nome);
	printf ("Digite sua idade: \n");
	scanf("%d", &var1.idade);
	printf("nome: %s \n idade: %d \n", var1.nome, var1.idade);
	












}
