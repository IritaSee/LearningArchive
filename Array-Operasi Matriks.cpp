#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

main()
{
	//deklarasi
	int mata[3][3],matb[3][3],matc[3][3];
	int i,j;
	char opr;
	//input nilai matriks ke-1 dari baris dan kolom
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			cout<<"Masukkan matriks(1) nilai baris ke-"<<i<<" kolom ke-"<<j<<" : ";cin>>mata[i][j];
		}
		cout<<endl;
	}
	//output matriks ke-1
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			cout<<mata[i][j]<<"\t";
		}
		cout<<endl;
	}
		//input nilai matriks ke-2 dari baris dan kolom
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			cout<<"Masukkan matriks(2) nilai baris ke-"<<i<<" kolom ke-"<<j<<" : ";cin>>matb[i][j];
		}
		cout<<endl;
	}
	//output matriks ke-2
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			cout<<matb[i][j]<<"\t";
		}
		cout<<endl;
	}
	//Input Operator
	cout<<"Pilih operator + atau -: ";cin>>opr;
	//Switching Operator
		for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			switch(opr)
			{
				case '+':matc[i][j]=mata[i][j] + matb[i][j];break;
				case '-':matc[i][j]=mata[i][j] - matb[i][j];break;
				default:
				cout<<"Pilihan yang anda masukkan tidak ada";
			}
			//Output Hasil Matriks Dari Operator
			cout<<matc[i][j]<<"\t";
		}
		cout<<endl;
	}
	getch();
	return 0;
}
