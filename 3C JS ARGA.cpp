#include <stdio.h>

int main() {
int a = 10, b = 20, c = 30; // tiga  ariable biasa
int *ptrA = &a, *ptrB = &b, *ptrC = &c; 
printf("Nilai dari  ariable a: %d\n", *ptrA);
printf("Nilai dari  ariable b: %d\n", *ptrB);
printf("Nilai dari  ariable c: %d\n", *ptrC);

return 0;
}

