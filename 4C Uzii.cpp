#include <stdio.h>

int main() {
int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
int *ptr = arr;

for (int I = 0; I < 10; i++) {
printf("Nilai elemen %d: %d\n", i+1, *(ptr+i));
}

return 0;
}

