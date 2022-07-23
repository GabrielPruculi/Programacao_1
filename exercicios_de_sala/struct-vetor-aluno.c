#include <stdio.h>
typedef struct {
	char nome[20];
	int idade;
	float nota;
} tipo_aluno;

int main () 
{
	tipo_aluno aluno[3];
  
	//primeiro aluno
  
	printf ("Digite seu nome: \n");
	scanf("%s", aluno[0].nome);	
	printf("Digite sua idade: \n");
	scanf("%d", &aluno[0].idade);
	printf("Digite sua nota: \n");
	scanf("%f", &aluno[0].nota);
	printf("Nome: %s \n Idade: %d \n Nota: %.2f  \n", aluno[0].nome, aluno[0].idade, aluno[0].nota);
  
	//segundo aluno
  
	printf ("Digite seu nome: \n");
	scanf("%s", aluno[1].nome);	
	printf("Digite sua idade: \n");
	scanf("%d", &aluno[1].idade);
	printf("Digite sua nota: \n");
	scanf("%f", &aluno[1].nota);
	printf("Nome: %s \n Idade: %d \n Nota: %.2f  \n", aluno[1].nome, aluno[1].idade, aluno[1].nota);	
  
	//terceiro aluno
  
	printf ("Digite seu nome: \n");
	scanf("%s", aluno[2].nome);	
	printf("Digite sua idade: \n");
	scanf("%d", &aluno[2].idade);
	printf("Digite sua nota: \n");
	scanf("%f", &aluno[2].nota);
	printf("Nome: %s \n Idade: %d \n Nota: %.2f  \n", aluno[2].nome, aluno[2].idade, aluno[2].nota);




}
