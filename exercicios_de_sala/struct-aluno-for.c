#include <stdio.h>
typedef struct {
	char nome[20];
	int idade;
	float nota;
} tipo_aluno;

int main () 
{
	int i;
	tipo_aluno aluno[3];
	for (i=0; i<3;i++){
	
	printf ("Digite seu nome: \n");
	scanf("%s", aluno[i].nome);	
	printf("Digite sua idade: \n");
	scanf("%d", &aluno[i].idade);
	printf("Digite sua nota: \n");
	scanf("%f", &aluno[i].nota);
	printf("\n");
	}
	for (i=0;i<3;i++){
	printf("Nome:%s\nIdade:%d\nNota: %.2f\n\n", aluno[i].nome, aluno[i].idade, aluno[i].nota);
	}

  
}
