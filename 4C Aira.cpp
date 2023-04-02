#include <stdio.h>

int main() 
{
	int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *B = A;

	for (int i = 0; i < 10; i++) {
	printf("Nilai array %d: %d\n", i+1, *(B+i));
	}

return 0;
}


