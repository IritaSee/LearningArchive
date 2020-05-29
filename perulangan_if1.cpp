#include<iostream>

using namespace std;

int main()
{
	cout<<"INCREMENT"<<endl;
		for(int i=0;i<10;i+=2)
		{
			cout<<i+1<<endl;
		}
	
	cout<<endl;
	cout<<"DECREMENT"<<endl;
		for(int j=10;j>0;j-=3)
		{
			cout<<j<<endl;
		}
	return 0;
}
