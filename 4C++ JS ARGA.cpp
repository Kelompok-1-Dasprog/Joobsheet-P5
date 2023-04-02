#include <iostream>
using namespace std;

int main ()
{
	int A[10]={1,2,3,4,5,6,7,8,9,10};
	int *X=A;
	
	for (int i=0; i<=9; i++)
{

	cout<<"nilai array "<<*X<<endl;
		X++;
}

//	cout<<"Isi  ariable a adalah :"<<*x<<endl;
//	cout<<"Isi  ariable b adalah :"<<*y<<endl;
//	cout<<"Isi  ariable c adalah :"<<*z;
	
return 0;
	
}

