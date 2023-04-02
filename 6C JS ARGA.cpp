#include <stdio.h>

void tampilkan(int *value){ 
	printf("%d", (*value)*(*value));
}	
		
int main(){
	int var = 4;
	tampilkan(&var);
}
 

