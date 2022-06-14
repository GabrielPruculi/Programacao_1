#include <stdio.h>
int main() {
int anon, anoa, idade;
printf ("Digite o ano de nascimento: \n");
scanf ("%d", & anon);
printf ("Digite o ano atual \n");
scanf ("%d", & anoa);
idade = anoa - anon;
if (anon > anoa)
  printf ("O ano de nascimento é inválido \n");
else 
  printf ("Sua idade é %d", idade);
  
  
  
  
  
  
  
  

}
