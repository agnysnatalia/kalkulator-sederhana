#include <iostream>
using namespace std;

int main(){
	float a,b,c;
	cout<<"program oprator bilangan menggunakan if else\n\n";
	cout<<"masukkan bilangan A : ";
	cin>>a;
	cout<<"masukkan bilangan B : ";
	cin>>b;
	
	string simbol;
	cout<<"masukkan jenis penghitungan : ";
	cin>>simbol;
	
	if(simbol=="*"){
		c=a*b;
		cout<<"hasil perkalian dari "<<a<<" dengan "<<b<<" adalah = "<<c;
	}
	else if(simbol=="/"){
		c=a/b;
		cout<<"hasil pembagian dari "<<a<<" dengan "<<b<<" adalah = "<<c;
	}
	else if(simbol=="+"){
		c=a+b;
		cout<<"hasil penjumlahan dari "<<a<<" dengan "<<b<<" adalah = "<<c;
	}
		else if(simbol=="-"){
		c=a-b;
		cout<<"hasil penguranagn dari "<<a<<" dengan "<<b<<" adalah = "<<c;
	}
}
cout << "Nama	: Imanuela Gloriagnys Natalia\n";
cout << "Nim	: 19051397032\n";
cout << "Prodi	: D4 Manajemen Informatika\n";
