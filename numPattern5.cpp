/*
     1
    21
   321
  4321
 54321
 */
#include<iostream>
using namespace std;

int main(){

	int n  = 5;
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
			cout<<" ";
		
		for(int k=i;k>=0;k--)
			cout<<k+1;
		
		cout<<"\n";
	}
	return 0;
}
