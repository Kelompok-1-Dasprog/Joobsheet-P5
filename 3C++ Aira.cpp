#include <iostream>
using namespace std;

int main (){
	
	int a=4,b=10,c=3;
	int *x,*y,*z;
	x=&a;
	y=&b;
	z=&c;

	cout<<"Nilai variable a adalah :"<<*x<<endl;
	cout<<"Nilai variable b adalah :"<<*y<<endl;
	cout<<"Nilai variable c adalah :"<<*z;
	
return 0;
	
}

