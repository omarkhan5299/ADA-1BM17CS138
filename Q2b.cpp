#include <stdio.h>
using namespace std;
#include<iostream>

int main()
{
    int arr[10],n,temp,l,l1;
	cout<<"Enter the size of the array:";
	cin>>n;
	for(int i=0;i<n;i++)
			cin>>arr[i];
	cout<<"Enter the number of largest elements to print:";
	cin>>l;
	
	l1=0;
			
	for(int i=0;i<n-1;i++)
	{       l1++;
	
	        for(int j=0;j<n-1-i;j++)
	        {
	                if(arr[j+1]<arr[j])
	                {
	                    temp=arr[j];
	                    arr[j]=arr[j+1];
	                    arr[j+1]=temp;
	                    
	                }
	        }
	        if(l1==l)
	            break;
	}
	for(int i=n-1;i>n-l-1;i--)
			cout<<arr[i]<<endl;
	
}