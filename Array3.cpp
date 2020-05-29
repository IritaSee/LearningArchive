#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int data[20]={70,98,65,34,57,60,91,87,63,71,78,100,39,65,87,42,65,0,45,75};
	int elm,max,min,rerata;
	cout<<"Nilai A=70\n Nilai A=70";
	//1.maksimum
	max=data[0];
	for(elm=0;elm<=19;elm++)
	{
		if(data[elm]>max)
		max=data[elm];
		else max=max;
	}
	cout<<"\n\nNilai max= "<<max;
	//2.minimum
	min=data[0];
	for(elm=0;elm<=19;elm++)
	{
		if(data[elm]<min)
		min=data[elm];
		else min=min;
	}
	cout<<"\nNilai min= "<<min;
	//3.rerata dan index
	rerata=(70+98+65+34+57+60+91+87+63+71+78+100+39+65+87+42+65+0+45+75)/20;
	cout<<"\nRerata= "<<rerata<<endl;
	
	if(rerata<=100&&rerata>=80)
	cout<<"Indeks= A";
	
	else if(rerata<=79&&rerata>=60)
	cout<<"Indeks= B";
	
	else if(rerata<=59&&rerata>=40)
	cout<<"Indeks= C";
	
	else if(rerata<=39&&rerata>=20)
	cout<<"Indeks= D";
	
	else 
	cout<<"Indeks= E";
	
	getch;
	//4.Urutan besar ke kecil
	
	//5.Yang dibawah rerata
	cout<<"\nYang nilainya dibawah rerata ada 8 orang";
	
}
