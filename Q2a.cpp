#include<iostream>
using namespace std;

int main()
{
	int arr[10],k,n,small,temp,kt=0;
	cout<<"Enter the size of the array:";
	cin>>n;
	cout<<"Enter the elements of the array:";
	for(int i=0;i<n;i++)
	{
			cin>>arr[i];
			
	}
	cout<<"Enter the value of K:";
	cin>>k;
	
	
		
	
	for(int i=0;i<n-1;i++)
	{	
		
		
		for(int j=0;j<n-1-i;j++)
		{
				if(arr[j+1]<arr[j])
				{
						temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
						
				}
		}
		
					
	}
	
	cout<<"K element="<<arr[k-1];
}