#include<iostream>
using namespace std;
	
int main(){ 

	int yusron ;
	int *nama = &yusron;
	int usron ;
	int *tas = &usron;
	int sron ;
	int *baju = &sron;
cout	<<	"alamat	memori var:"<<&yusron<<endl;
cout	<<	"umur saya	:" <<*nama<<endl;
cout	<<	"alamat	memori var:"<<&usron<<endl;
cout	<<	"saya adalah	:" <<*tas<<endl;
cout	<<	"alamat	memori var:"<<&sron<<endl;
cout	<<	"ada berapa	:" <<*baju<<endl;
}

