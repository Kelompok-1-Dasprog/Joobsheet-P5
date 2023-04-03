#include <stdio.h>

int main() {
int a, b, c; // tiga variabel biasa
int *ptrA = &a, *ptrB = &b, *ptrC = &c; // tiga variabel pointer
// mencetak alamat variabel biasa dan nilai pointeryang menunjuk ke variabel tersebut
printf("Alamat dari variabel a: %p, Nilai dari pointerptrA: %p\n", &a, ptrA);
printf("Alamat dari variabel b: %p, Nilai dari pointerptrB: %p\n", &b, ptrB);
printf("Alamat dari variabel c: %p, Nilai dari pointerptrC: %p\n", &c, ptrC);
return 0;
}

