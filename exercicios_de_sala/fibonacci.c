#include <stdio.h>

void fibo (int n){
int n1 = 1, n2 = 1, p, i;
if (n<1) return;
printf ("%d ", n1);
for (i=0; i<n-1; i++){
printf ("%d ", n2);
p = n1 + n2;
n1 = n2;
n2 = p;
}
printf ("\n");
}

int main () {
	int num;
	printf ("Digite um número\n");
	scanf("%d", &num);
	fibo(num);




}
