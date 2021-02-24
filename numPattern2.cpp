/*
54321
5432
543
54
5
*/
#include<iostream>
using namespace std;

int main(){

	int n  = 5;
	for(int i=0;i<n;i++)
	{
		for(int j=n;j>i;j--)
		{
			cout<< j;
		}
		cout<<"\n";
	}
	return 0;
}
