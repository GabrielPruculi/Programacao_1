#include <stdio.h>

int main() {
float num;
printf ("Digite um número: \n");
scanf ("%f", & num);
if (num > 20 && num < 50)
   printf ("O número está entre 20 e 50 \n");
  else 
   printf ("O número não está entre 20 e 50 \n");
  return 0;
}
