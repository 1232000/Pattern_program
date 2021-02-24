/*
      1
     123
    12345
   1234567
*/
#include<iostream>
using namespace std;

int main(){

	int n  = 5;
	for(int i=1;i<n;i++)
	{
		for(int k=n-1;k>i;k--)
		{
			cout<<" ";
		}
		for(int j=0;j<(2*i-1);j++)
		{
			cout<< j+1;
		}
		cout<<"\n";
	}
	return 0;
}
