#include <stdio.h>
#include <stdlib.h>
int main () {
	int mat[10][10], lin, col, num_impar[10]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	srand(13);
	for (lin = 0; lin<10; lin++){
	 for (col = 0; col<10; col++){ 
		mat[lin][col] = rand()%1000;
         }
	}
	for (lin = 0; lin<10; lin++){
	 for (col = 0; col<10; col++){
	  printf("%3d ", mat[lin][col]); 
	 }
	  printf ("\n");
	}
	
// vendo quantos são os ímpares em cada linha

	for (lin = 0; lin<10; lin++){
	 for (col = 0; col<10; col++){
	 if (mat[lin][col]%2==1)
	    num_impar[col]++;
	 }
	}
	for (lin = 0; lin<10; lin++){
		printf ("%d: ", lin);
	 	printf("%d\n", num_impar[lin]);
	 }
	
}
