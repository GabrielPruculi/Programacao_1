/*algoritmo
declarar variaveis decimais do tipo float tempo1 = 0 e tempo2 = 0 e volta, tempovolta
início
para volta = 1 até volta == 5:
leia tempo da volta em 'tempovolta'
tempo1 = tempo1 + tempovolta
fim: para
para volta = 1 até volta == 5
leia tempo da volta
tempo2 = tempo2 + tempovolta
fim: para
se (tempo1<tempo2): estudante 1 ganhou
senão se (tempo1==tempo2): empate
senão: estudante 2 ganhou 
*/


#include <stdio.h>
int main (){
float t1 = 0, t2 = 0 , volta, tv;

	for (volta=1; volta<=5; volta++)
	{
	scanf ("%f", &tv);
	t1 = t1 + tv;
	}
	for (volta=1; volta<=5; volta++)
	{
	scanf ("%f", &tv);
	t2 = t2 + tv;
	}
if (t1 < t2)
printf ("O estudante 1 ganhou \n");
else if (t1 = t2)
printf ("empate");
else 
printf ("O estudante 2 ganhou");




}
