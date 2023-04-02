#include <stdio.h>
#include <string.h>

int main() {
    char nama[] = "Aira";
    char *ptr_nama = &nama[0];

    printf("Huruf pertama: %c\n", *ptr_nama);

    while (*ptr_nama != '\0') {
        ptr_nama++;
    }

    printf("Huruf terakhir: %c\n", *(ptr_nama-1));

 return 0;
}

