/*
declarar as variáveis M, N e vez
ler um valor de M e N
escrever 'total N' na tela enquano N > 0:
se vez == 0 
escreve 'Paula -'
vez <-- 1
senão 
escreve carlos
vez <-- 0
N = M (N = N-M)
se N < 0
imprime 0
senão 
imprime N 
FIM: ENQUANTO
se vez == 0 
imprime carlos ganhou
else 
imprime paula ganhou
*/

#include <stdio.h>
int main ()
{
	int N, M, vez;
	vez = 0;
	printf ("Escreva quantas bolinhas vocês ganharam: \n");
	scanf ("%d", &N);
	printf ("Escreeva o número de bolinhas que vão comer por vez: \n");
	scanf ("%d", &M);
	while (N>0) {
		if (vez == 0)
		{
			printf ("Paula  - ");
			vez = 1;
		}
		else{
			printf ("Carlos - " );
			vez = 0;
		}
		N = N-M;
		if(N<0){
			printf ("0\n");
		}else{ 
			printf ("%d\n", N);
		}
	}
	if (vez == 0)
		printf("Carlos ganhou \n");
	else
		printf("Paula ganhou \n");
printf ("vocês serão diabéticos \n");
}
