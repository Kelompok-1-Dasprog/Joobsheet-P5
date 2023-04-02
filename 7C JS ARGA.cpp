#include <stdio.h>
 
int main(){
	int var = 4;
	int* varPtr = &var;
	int** varPtrPtr = &varPtr;	
	
	printf("Alamat dari variable pointer varPtr : %d\n", &varPtr);;
	printf("Nilaidari variable pointer varPtrPtr :%d\n", *(*varPtrPtr));

}

