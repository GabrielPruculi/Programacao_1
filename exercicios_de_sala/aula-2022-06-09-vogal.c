# include <stdio.h>
int main ()
{
char letra;
printf ("Digite uma letra\n");
scanf ("%c", &letra);
switch (letra) {
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
     printf ("Você digitou uma vogal\n");
     break;
default: 
     printf ("Você digitou uma consoante\n");
     }




}
