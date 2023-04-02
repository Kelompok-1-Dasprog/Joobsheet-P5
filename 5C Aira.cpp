#include <stdio.h>
#include <string.h>

int main() {
    char nama[] = "Aira";
    char *Nama = &nama[0];

    printf("Huruf pertama: %c\n", *Nama);

    while (*Nama != '\0') {
        Nama++;
    }

    printf("Huruf terakhir: %c\n", *(Nama-1));

    return 0;
}

