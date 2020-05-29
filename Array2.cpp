#include<iostream>
using namespace std;

int main()
{
	int A[7];
	int j,k,C,temp;
	
	cout<<"Masukkan nilai pada elemen array: "<<endl;
	for(C=0;C<7;C++)
	{
		cout<<"A["<<C<<"]=";cin>>A[C];
	}
	//menampilkan nilai sebelum diurutkan
	cout<<"\nNilai elemen array sebelum diurutkan: "<<endl;
	
	for(C=0;C<7;C++)
	{
		cout<<"A["<<C<<"]="<<A[C]<<endl;
	}
	//melakukan pengurutan elemen array
	for(j=0;j<6;j++)
	{
		for(k=7;k>0;k--)
		{
			if(A[k]<A[k-1])
			{
				temp=A[k];
				A[k]=A[k-1];
				A[k-1]=temp;
			}
		}
	}
	//menampilkan nilai sesudah diurutkan
	cout<<"\nNilai elemen array sesudah diurutkan: "<<endl;
	
	for(C=0;C<7;C++)
	{
		cout<<"A["<<C<<"]="<<A[C]<<endl;
	}
}

	//hasil diawali angka nol karena
