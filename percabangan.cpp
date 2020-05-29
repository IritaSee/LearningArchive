#include<iostream>
using namespace std;

main()
{
	int x;
	float ipk,thn;
	cout<<"Evan Enggana Andika(27)"; 
	cout<<"\n1102184129";
	cout<<"\n=====PROGRAM PENENTU KELULUSAN MAHASISWA JENJANG S1=====";
	cout<<"\nJenis Kelamin:";
	cout<<"\n1.Laki-Laki";
	cout<<"\n2.Perempuan";
	cout<<"\nPilihan: ";cin>>x;
	
	switch(x)
	{
		case 1: cout<<"IPK-nya berapa? ";cin>>ipk;
				cout<<"Kuliahnya berapa lama (dalam tahun)? ";cin>>thn;
				if (ipk>3&&thn<=4.5)
				cout<<"Good :D";
				else if (ipk>2.75&&ipk<=3&&thn<=4.5)
				cout<<"Lulus ;)";
				else cout<<"Tidak Lulus :("; 
				break;
	    case 2: cout<<"IPK-nya berapa? ";cin>>ipk;
				cout<<"Kuliahnya berapa lama (dalam tahun)? ";cin>>thn;
				if (ipk>3&&thn<=4.5)
				cout<<"Good :D";
				else if (ipk>2.75&&ipk<=3&&thn<=4.5)
				cout<<"Lulus ;)";
				else cout<<"Tidak Lulus :("; 
				break;
	}
}


