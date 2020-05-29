#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int x,y,A,B;
	x=10;y=10;
	
	A= 10 + x--;
	
	cout<<" x= "<<x<<endl;
	cout<<" A= "<<A<<endl;

	A= 10 - x--;
	
	cout<<" x= "<<x<<endl;
	cout<<" A= "<<A<<endl;
	
	B= 10 + --y;
	
	cout<<" x= "<<x<<endl;
	cout<<" B= "<<B<<endl;

	A= 10 - --y;
	
	cout<<" y= "<<y<<endl;
	cout<<" B= "<<B<<endl;	 	
}
