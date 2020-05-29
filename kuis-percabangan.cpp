#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	float uts,uas,keh,tgs,kuis,total;
	char idx[10];
	cout<<"UTS: ";cin>>uts;
	cout<<"UAS: ";cin>>uas;
	cout<<"Kehadiran: ";cin>>keh;
	cout<<"Tugas: ";cin>>tgs;
	cout<<"Kuis: ";cin>>kuis;
	
	uas=uas*0.4;
	uts=uts*0.3;
	keh=keh*0.1;
	tgs=tgs*0.1;
	kuis=kuis*0.1;
	
	total=uas+uts+keh+tgs+kuis;	
	
	//if(uas<30||uts<10&&keh>7.5)
	//cout<<"\nIndeks: E";
	
	//if(uas<30||uts<10&&keh<7.5);
	//cout<<"\nUAS=0, Indeks:E";
	
	if(uas>=30&&uts>=10&&keh>=7.5&&total<=80)
	cout<<"\nIndeks: A";
	
	else if(uas>=30&&uts>=10&&keh>=7.5&&total<=70)
	cout<<"\nIndeks: B";
	
	else if(uas>=30&&uts>=10&&keh>=7.5&&total<=60)
	cout<<"\nIndeks: C";
	
	else if(uas>=30&&uts>=10&&keh>=7.5&&total<=50)
	cout<<"\nIndeks: D";
	
	else //if(uas>=30&&uts>=10&&total<50)
	cout<<"\nIndeks: E";
	
	getch;
}
