#include <iostream>
using namespace std;

int main ()
{
	int A[10]={1,2,3,4,5,6,7,8,9,10};
	int *X=A;
	
	for (int i=0; i<=9; i++)
	{
	cout<<"nilai array :"<<*X<<endl;
		X++;
	}

	
return 0;
	
}
	
