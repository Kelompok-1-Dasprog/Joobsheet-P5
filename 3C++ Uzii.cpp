#include <iostream>
using namespace std;

int main (){
	
	int a=3,b=6,c=7;
	int *x,*y,*z;
	x=&a;
	y=&b;
	z=&c;

	cout<<"Isi  ariable a adalah :"<<*x<<endl;
	cout<<"Isi  ariable b adalah :"<<*y<<endl;
	cout<<"Isi  ariable c adalah :"<<*z;
	
return 0;
	
}

