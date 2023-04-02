#include <stdio.h>

int main() {
int a, b, c; // tiga variabel biasa
int *ptrA = &a, *ptrB = &b, *ptrC = &c; 
printf("Alamat dari variabel a: %p, Nilai dari pointer ptrA: %p\n", &a, ptrA);
printf("Alamat dari variabel b: %p, Nilai dari pointer ptrB: %p\n", &b, ptrB);
printf("Alamat dari variabel c: %p, Nilai dari pointer ptrC: %p\n", &c, ptrC);
return 0;
}

