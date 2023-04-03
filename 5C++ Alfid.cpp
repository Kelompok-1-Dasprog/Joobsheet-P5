#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama = "Aira";
    char *Nama = &nama[0];

    cout << "Huruf pertama: " << *Nama << endl;

    while (*Nama != '\0') {
        Nama++;
    }

    cout << "Huruf terakhir: " << *(Nama-1) << endl;

    return 0;
}

