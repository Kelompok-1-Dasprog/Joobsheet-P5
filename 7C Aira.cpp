#include <stdio.h>
 
int main(){
	int A = 4;
	int *P = &A;
	int **R= &P;	
	
	printf("Alamat dari variable pointer *P : %d\n", &P);;
	printf("Nilai dari variable pointer **R :%d\n", *(*R));

}

