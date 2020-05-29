#include<iostream>
using namespace std;

int main()
{
	float jari,hasil;
	const float p=3.14;
	cout<<"Masukkan jumlah jari-jari: ";cin>>jari;
	hasil=jari*jari*p;
	cout<<"Luas keliling dari jari-jari "<<jari<<" X 3.14 adalah "<<hasil;
	return 0;
}
