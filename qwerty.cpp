#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
bool hasil;
int x;
char nama[50];//karena nama

cout<<"nama: "; gets(nama);//karena char

cout<<"nilai: "; cin>>x;

hasil = x > 70;//definisi boolean
if (hasil)
cout<<x<<"\nalhamdulillah "<<nama<<" lulus ";

else
cout<<x<<"\nGUOBLOG!";

getch(;
}
