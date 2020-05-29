#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	bool a=true;
	bool b=false;
	bool c=true;
	
	cout<<" (a&&b): "<<(a&&b);
	cout<<" \n (a&&c): "<<(a&&c);
	cout<<" \n (a&&b&&c): "<<(a&&b&&c);
	
	cout<<" (a||b): "<<(a||b);
	cout<<" \n (a||c): "<<(a||c);
	cout<<" \n (a||b||c): "<<(a||b||c);
	
	cout<<" \n !a: "<<!a;
	cout<<" \n !b: "<<!b;
	cout<<" \n !(b&&a): "<<!(b&&a);
	
	getch();
}
