#include <stdio.h>
#include<iostream>
using namespace std;

int main(int argc, char **argv)
{
	//printf("hello world\n");
	int max,i,n,arr[10];
	cout<<"Enter the size of the array:";
label:	cin>>n;
	if(n>=10)
		{	cout<<"Size too large!";
			goto label;
		}
	for(i=0;i<n;i++)
		cin>>arr[i];
	max=arr[0];
	for(i=0;i<n;i++)
	{
				if(max<arr[i])
						max=arr[i];
	}
	cout<<"Largest element:"<<max;
	
	
	return 0;
}
