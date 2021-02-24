/*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/
#include<iostream>
using namespace std;

int main(){

	int n  = 5;
	for(int i=0;i<n-1;i++)
	{
		for(int k=n-1;k>i;k--)
		{
			printf(" ");
		}
		
		for(int k=0;k<(2*i+1);k++)
			printf("*");
		

		printf("\n");
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
			printf(" ");
		
		for(int k=1;k<=(n*2-(i*2+1));k++)
			printf("*");
		
		printf("\n");
	}
	return 0;
}
