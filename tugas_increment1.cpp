#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int x,y,Ax,Ay,Bx,By;
	x=10;y=10;
	
	cout<<" nilai x awal: "<<x<<endl;
	cout<<" nilai x--: "<<x--<<endl;
	cout<<" nilai --x: "<<--x<<endl;
	cout<<" nilai x++: "<<x++<<endl;
	cout<<" nilai ++x: "<<++x<<endl;
	cout<<" nilai x akhir: "<<x<<endl;
	
	Ax= 10 + x--;
	Ay= 10 - x--;
	
	cout<<" x= "<<x<<endl;
	cout<<" Ax= "<<Ax<<endl;
	cout<<" Ay= "<<Ay<<endl;	
	
	Bx= 10 + --y;
	By= 10 - --y;
	
	cout<<" x= "<<x<<endl;
	cout<<" Bx= "<<Bx<<endl;
	cout<<" By= "<<By<<endl;	 	
}
