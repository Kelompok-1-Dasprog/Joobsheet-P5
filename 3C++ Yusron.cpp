#include<iostream>
using namespace std;
	
int main(){ 

	int yusron = 19;
	int *nama = &yusron;
	int usron = 20;
	int *tas = &usron;
	int sron = 21;
	int *baju = &sron;
cout	<<	"alamat	memori var:"<<&yusron<<endl;
cout	<<	"umur saya	:" <<*nama<<endl;
cout	<<	"alamat	memori var:"<<&usron<<endl;
cout	<<	"saya adalah	:" <<*tas<<endl;
cout	<<	"alamat	memori var:"<<&sron<<endl;
cout	<<	"ada berapa	:" <<*baju<<endl;
}


