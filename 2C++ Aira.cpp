#include <iostream>
using namespace std;

int main (){
	
	int a,b,c;
	int *x,*y,*z;
	x=&a;
	y=&b;
	z=&c;

	cout<<"Alamat variabel a adalah :"<<&a<<endl;
	cout<<"Alamat variabel b adalah :"<<&b<<endl;
	cout<<"Alamat variabel c adalah :"<<&c<<endl;
	cout<<endl;
	
	cout <<"Nilai dari variabel x adalah :"<<*x<<endl;
	cout <<"Nilai dari variabel y adalah :"<<*y<<endl;
	cout <<"Nilai dari variabel z adalah :"<<*z;
	
return 0;
	
}

