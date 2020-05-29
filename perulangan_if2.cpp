#include<iostream>

using namespace std;

int main()
{
	char A;
	int B;
	int C;
	
	for(A='a',B=0,C=1;A<='e';A++,B=B+5,C=C*10)
	{
		
		cout<<"Nilai A="<<A<<endl;
		cout<<"Nilai B="<<B<<endl;
		cout<<"Nilai C="<<C<<endl;
		cout<<endl;
	}
	return 0;
}
