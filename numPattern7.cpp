/*
    1
   121
  12321
 1234321
123454321
 1234321
  12321
   121
    1
*/
#include<iostream>
using namespace std;

int main(){

	int n  = 5;
	for(int i=0;i<n-1;i++)
	{
		for(int k=n-1;k>i;k--)
		{
			cout<<" ";
		}
		int temp = 2*i+1;
		int a = temp/2+1;
		for(int k=1;k<=temp;k++)
		{
			if(k<=a){
				cout<<k;
			}
			else{
				cout<<--a;
				
			}
		}
		

		cout<<"\n";
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
			cout<<" ";
		int temp = n*2-(i*2+1);
		int a = temp/2+1;
		int temp2 = a;
		for(int k=1;k<=temp;k++)
		{

			if(k<=a){
				cout<<k;
			}
			else{
				cout<< --a;
				
			}
		}
		
		cout<<"\n";
	}

	return 0;
}
