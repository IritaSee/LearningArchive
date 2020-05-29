#include<iostream>
using namespace std;

main()
{
	int j,k;
	int data[5][5]=
	{
		{3,4,-1,9,6},
		{2,3,0,5,1},
		{1,1,2,4,3},
		{5,9,-4,9,9},
		{6,6,2,1,3}
	};
	for(j=0;j<=5;j++)
	{
		for(k=0;k<=5;k++)
		cout<<"data["<<j<<"]["<<k<<"]="<<data[j][k]<<endl;
	}
}
