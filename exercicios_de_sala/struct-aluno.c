#include <stdio.h>
typedef struct {
	char nome[20];
	int idade;
	float nota;
} tipo_aluno;

int main () 
{
	tipo_aluno aluno;
	printf ("Digite seu nome: \n");
	scanf("%s", aluno.nome);	
	printf("Digite sua idade: \n");
	scanf("%d", &aluno.idade);
	printf("Digite sua nota: \n");
	scanf("%f", &aluno.nota);
	printf("Nome: %s \n Idade: %d \n Nota: %.2f  \n", aluno.nome, aluno.idade, aluno.nota);













}
