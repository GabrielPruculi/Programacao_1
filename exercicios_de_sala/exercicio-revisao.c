#include <stdio.h>
int main ()
{
/*
declarar variáveis decimais para os valores dos pesos das bolas
pedir ao usuário que escreva, para cada bola, seus respecivos pesos
ler os pesos de cada bola
usar o condicional para fazer a operação pedida pelo exercício
se os pesos satisfizerem a operação, escrever que está equilibrado
se não, escrever que não está equilibrado
*/
float A, B, C, D;

printf ("Escreva o peso da bola A: \n");
scanf ("%f", &A);
printf ("Escreva o peso da bola B: \n");
scanf ("%f", &B);
printf ("Escreva o peso da bola C: \n");
scanf ("%f", &C);
printf ("Escreva o peso da bola D: \n");
scanf ("%f", &D);
if (A== B+C+D && D== B+C && B==C) 
{
printf ("Está equilibrado \n");}
else {
printf ("Não está equilibrado \n");
}



}
