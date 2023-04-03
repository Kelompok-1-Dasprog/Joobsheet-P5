#include <iostream>
using namespace std;

void square(int* ptr) 
{
	*ptr = (*ptr) * (*ptr);
}

int main() {
	int var = 4;
	int *pointer = &var;

	cout << "Sebelum kuadrat: " << var << endl;
	square(pointer);
	cout << "Sesudah kuadrat: " << var << endl;

return 0;
}

