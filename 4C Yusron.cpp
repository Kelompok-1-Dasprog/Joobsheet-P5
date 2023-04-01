#include <stdio.h>

int main() {
int arr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};
int *ptr = arr;

for (int I = 0; I < 10; I++) 
{
printf("Nilai elemen %d: %d\n", I+1, *(ptr+I));
}

return 0;
}

