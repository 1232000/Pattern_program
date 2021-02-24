/*
12345
 2345
  345
   45
    5
*/
 
#include<iostream>
using namespace std;

int main(){

	int n  = 5;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
			cout<<" ";
		
		for(int k=i;k<n;k++)
			cout<<k+1;
		
		cout<<"\n";
	}
	return 0;
}
