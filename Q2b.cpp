#include <stdio.h>
using namespace std;
#include<iostream>

int main()
{
    int arr[10],n,temp,l,l1,swap=0;
	cout<<"Enter the size of the array:";
	cin>>n;
	for(int i=0;i<n;i++)
			cin>>arr[i];
	cout<<"Enter the number of largest elements to print:";
	cin>>l;
	
	
			
	for(int i=0;i<l;i++)
	{       
	
	        for(int j=0;j<n-1-i;j++)
	        {
	                if(arr[j+1]<arr[j])
	                {
	                    temp=arr[j];
	                    arr[j]=arr[j+1];
	                    arr[j+1]=temp;
	                    swap++;
	                }
	        }
	        if(swap==0)
	            break;
	        
	}
	for(int i=n-1;i>n-l-1;i--)
			cout<<arr[i]<<endl;
	
}
