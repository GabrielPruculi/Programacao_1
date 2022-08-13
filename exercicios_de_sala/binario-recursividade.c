#include <stdio.h>
#include <stdlib.h>

void binario(int num)
{
	if (num/2 == 0){
		printf ("binário %d", num%2);
	}else{
		binario(num/2);
		printf("%d", num%2);
	}
}

int main () {

	int  num;
	binario(10);
}
	
