#include <stdio.h>

int main() 
{
	int a, b, c; // tiga variabel biasa
	int *pointA = &a, *pointB = &b, *pointC = &c; // tiga variabel pointer
	
// mencetak alamat variabel biasa dan nilai pointer yang menunjuk ke variabel tersebut
	printf("Alamat dari variabel a: %p, Nilai dari pointer pointerA: %p\n", &a, pointA);
	printf("Alamat dari variabel b: %p, Nilai dari pointer pointerB: %p\n", &b, pointB);
	printf("Alamat dari variabel c: %p, Nilai dari pointer pointerC: %p\n", &c, pointC);

return 0;
}

