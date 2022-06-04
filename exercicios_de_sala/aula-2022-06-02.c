/*
Aluno: Gabriel Pruculi
matrícula: 2018103606
declarar as variáveis reais de entrada e despesas para cada dia 
pedir as informações de entrada e saída de cada dia
ler as informações de entrada e saída de cada dia 
para cada dia, utilizar os condicionais para mostrar o valor ganho e gasto do dia, e se o saldo é positivo (>2000) ou negativo (-500)
*/
#include <stdio.h>
int main()
{
float segunda, terca, quarta, quinta, sexta, soma, pagaseg, pagate, pagaqua, pagaqui, pagasex, caixas, caixat, caixaq, caixaqu, caixase; 

// Dados de Segunda

printf ("informe o valor recebido na segunda:\n"  );
scanf ("%f", &segunda);
printf("informe o valor da despesa de segunda: \n");
scanf("%f", &pagaseg);
caixas = segunda - pagaseg;
 if (caixas > 2000)
 {
  printf ("O valor recebido na segunda é: %f \n", segunda);
  printf ("O valor de despesas de segunda foi: %f \n", pagaseg);
  printf ("O saldo positivo é: %f", caixas); 
 }
 else if (caixas < -500)
 {
 printf ("O valor recebido na segunda é: %f \n", segunda);
  printf ("O valor de despesas de terça foi: %f \n", pagaseg);
  printf ("O saldo negativo é: %f \n", caixas); 
 }
 
// Dados de Terça

printf ("informe o valor recebido na terça:\n");
scanf ("%f", &terca);
printf("informe o valor da despesa de terça: \n");
scanf("%f", &pagate);
caixat = terca - pagate;
if (caixat > 2000)
 {
  printf ("O valor recebido na terça é: %f \n", terca);
  printf ("O valor de despesas de terça foi: %f \n", pagate);
  printf ("O saldo positivo é: %f", caixat); 
 }
 else if (caixat < -500)
 {
  printf ("O valor recebido na terça é: %f \n", terca);
  printf ("O valor de despesas de terça foi: %f \n", pagate);
  printf ("O saldo negativo é: %f", caixat); 
 }
 
 // Dados de quarta
 
printf ("informe o valor recebido na quarta:\n");
scanf ("%f", &quarta);
printf("informe o valor da despesa de quarta: \n");
scanf("%f", &pagaqua);
caixaq = quarta - pagaqua;
if (caixaq > 2000)
 {
  printf ("O valor recebido na quarta é: %f \n", quarta);
  printf ("O valor de despesas foi: %f \n", pagaqua);
  printf ("O saldo positivo é: %f \n", caixaq); 
 }
 else if (caixaq < -500)
 {
  printf ("O valor recebido na quarta é: %f \n", quarta);
  printf ("O valor de despesas foi: %f \n", pagaqua);
  printf ("O saldo negativo é: %f \n", caixaq); 
 }
 
 // Dados de Quinta
 
printf ("informe o valor recebido na quinta:\n");
scanf ("%f", &quinta);
printf("informe o valor da despesa de quinta: \n");
scanf("%f", &pagaqui);
caixaqu = quinta - pagaqui;
if (caixaqu > 2000)
 {
  printf ("O valor recebido na quinta é: %f \n", quinta);
  printf ("O valor de despesas foi: %f \n", pagaqui);
  printf ("O saldo positivo é: %f \n", caixaqu); 
 }
 else if (caixaqu < -500)
 {
  printf ("O valor recebido na quinta é: %f \n", quinta);
  printf ("O valor de despesas de quinta foi: %f \n",  pagaqui );
  printf ("O saldo negativo é: %f \n", caixaqu); 
 }
 // Dados de Sexta
printf ("informe o valor recebido na sexta:\n");
scanf ("%f", &sexta);
printf("informe o valor da despesa de sexta: \n");
scanf("%f", &pagasex);
caixase = sexta - pagasex; 
if (caixase > 2000)
 {
  printf ("O valor recebido na sexta é: %f \n", sexta);
  printf ("O valor de despesas de sexta foi: %f \n", pagasex);
  printf ("O saldo positivo é: %f \n", caixase); 
 }
 else if (caixase < -500)
 {
  printf ("O valor recebido na sexta é: %f \n", sexta);
  printf ("O valor de despesas de sexta foi: %f \n", pagasex);
  printf ("O saldo negativo é: %f \n", caixase); 
 }



}

