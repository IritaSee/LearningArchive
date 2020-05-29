#include<iostream>
using namespace std;

int main()
{
	int A[5]; // jml data yg akan ditampilkan
	for(int C=0;C<5;C++) // batasan data
	{
		A[C]=C*100;
		cout<<A[C]<<endl;
	}
	return 0;
}
