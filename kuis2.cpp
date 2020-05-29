#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int x=11,y=12,c=2,d=4,e;
	
	cout<<"x++="<<x++<<endl;
	
	c+=x;
	cout<<"c="<<c<<endl;
	
	d+=y++;
	cout<<"d="<<d<<endl;
	
	e=d+c+x+y;
	cout<<"e="<<e<<endl;
}
