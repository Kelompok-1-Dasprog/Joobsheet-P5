#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama = "Yusron";
    char *ptr_nama = &nama[0];

    cout << "Huruf pertama: " << *ptr_nama << endl;

    while (*ptr_nama != '\0') {
        ptr_nama++;
    }

    cout << "Huruf terakhir: " << *(ptr_nama-1) << endl;

    return 0;
}

