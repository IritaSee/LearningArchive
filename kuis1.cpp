#include<iostream>
using namespace std;

int main()
{
	char nama1[20],nama2[20];
	int usia1,usia2,a,b;
	bool pilihan1,pilihan2;
	cout<<"masukkan nama 1: ";cin>>nama1;
	cout<<"tahun lahir: ";cin>>usia1;
	cout<<"masukkan nama 2: ";cin>>nama2;
	cout<<"tahun lahir: ";cin>>usia2;
	
	a=2018-usia1;
	b=2018-usia2;
	
	pilihan1= a>17;
	cout<<pilihan1<<endl;;
	pilihan2= b>18;
	cout<<pilihan2;
}
