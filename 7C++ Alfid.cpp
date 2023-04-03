#include <iostream>

using namespace std;

int main() {
	int A = 4;
	int *B= &A;
	int **C = &B;

	cout << "Alamat variabel pointer A: " << &A << endl;
	cout << "Nilai variabel pointer A: " << A<< endl;
	cout << "Nilai yang ditunjuk oleh B: " << *B << endl; 
	cout << "Nilai yang ditunjuk oleh **C: " << **C << endl;

return 0;
}

