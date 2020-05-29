#include<iostream>
using namespace std;

main()
{
	int data[10]={4,1,0,-9,8,5,-1,2,3,-7};
	int elm,ktm,x;
	cout<<"Data yang dicari: ";cin>>x;
	ktm=1;
	for(elm=1;elm<=9;elm++)
	{
		if(data[elm]==x)
		{
			ktm=!ktm;
			break;
		}
	}
	if(ktm==1)
	cout<<"data tidak ditemukan";
	else cout<<"Data ada di elemen: "<<elm;
}
