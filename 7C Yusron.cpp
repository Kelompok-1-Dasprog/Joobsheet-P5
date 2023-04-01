#include <stdio.h>

int main() {
    int var = 89;
    int *ptr_var = &var;
    int **ptr_ptr_var = &ptr_var;

    printf("Nilai var: %d\n", var);
    printf("Alamat var: %p\n", (void *)&var);

    printf("Nilai ptr_var: %d\n", *ptr_var);
    printf("Alamat ptr_var: %p\n", (void *)&ptr_var);

    printf("Nilai ptr_ptr_var: %d\n", **ptr_ptr_var);
    printf("Alamat ptr_ptr_var: %p\n", (void *)&ptr_ptr_var);

    return 0;
}






