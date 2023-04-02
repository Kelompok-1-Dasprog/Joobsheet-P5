#include <stdio.h>

int main() 
{
	int a = 10, b = 4, c = 3; // tiga variable biasa
	int *A = &a, *B = &b, *C = &c; // tiga variable pointer

// mencetak nilai ketiga variable biasa menggunakan dereference
	printf("Nilai dari  variable a: %d\n", *A);
	printf("Nilai dari  variable b: %d\n", *B);
	printf("Nilai dari  variable c: %d\n", *C);

return 0;
}

