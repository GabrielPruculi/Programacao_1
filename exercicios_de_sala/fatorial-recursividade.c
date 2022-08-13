#include<stdio.h>

int fat(int num){
	if (num==1)
		return 1;
	else
		return num*fat(num-1);
}

int main () {

	printf("%d", fat(5));
	printf("\n");

}
