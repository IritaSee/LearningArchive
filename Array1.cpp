#include<iostream>
using namespace std;

int main()
{
	int x;
	int number[]={1,2,3,4,5,6,7,8,9};
	char character[]={'H','E','L','L','O'};
	for(x=0;x<9;++x)
	{
		cout<<"\nData["<<x<<"]="<<number[x];
	}
	cout<<"\n";
	for(x=0;x<5;++x)
	{
		cout<<"\nData["<<x<<"]="<<character[x];
	}
	
}
