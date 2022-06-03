/*
declarar as variáveis reais de entrada e despesas para cada dia 
declarar as variáveis reais que farão a soma dos valores recebidos, a soma dos gastos e o caixa do dia
pedir as informações de entrada e saída

*/
#include <stdio.h>
int main()
{
float segunda, terca, quarta, quinta, sexta, soma, pagaseg, pagate, pagaqua, pagaqui, pagasex, saldopos, saldoneg, saldo;
printf ("informe o valor recebido na segunda:\n"  );
scanf ("%f", &segunda);
printf("informe o valor da despesa de segunda: \n");
scanf("%f", &pagaseg);
printf ("informe o valor recebido na terça:\n");
scanf ("%f", &terca);
printf("informe o valor da despesa de terça: \n");
scanf("%f", &pagate);
printf ("informe o valor recebido na quarta:\n");
scanf ("%f", &quarta);
printf("informe o valor da despesa de quarta: \n");
scanf("%f", &pagaqua);
printf ("informe o valor recebido na quinta:\n");
scanf ("%f", &quinta);
printf("informe o valor da despesa de quinta: \n");
scanf("%f", &pagaqui);
printf ("informe o valor recebido na sexta:\n");
scanf ("%f", &sexta);
printf("informe o valor da despesa de sexta: \n");
scanf("%f", &pagasex);
soma = segunda + terca + quarta + quinta + sexta; 
saldo = pagaseg + pagate + pagaqua + pagaqui + pagasex;
saldopos = soma - saldo;
 if (soma > 2000)
  printf ("O valor recebido na semana é: %f \n", soma);
  printf ("O valor de despesas foi: %f \n", saldo);
  printf ("O saldo positivo é: %f", saldopos); 
 else if (soma < 500)
  printf ("O valor recebido na semana é: %f \n", soma)




}

