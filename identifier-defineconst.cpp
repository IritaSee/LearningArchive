#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int a=6;
	int b(2);
	int c{3};
	int x;
	
	a=a+b;
	x=a-c; // a disini mengambil hasil dari FUNGSI a, bukan KONSTANTA pada variabel a
	cout<<"hasilnya adalah: "<<x<<endl;
	
	getch();
}
