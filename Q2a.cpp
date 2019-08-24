#include<iostream>
using namespace std;

int main()
{
	int arr[10],k,n,small,temp,kt=0,min_idx;
	cout<<"Enter the size of the array:";
	cin>>n;
	cout<<"Enter the elements of the array:";
	for(int i=0;i<n;i++)
	{
			cin>>arr[i];
			
	}
	cout<<"Enter the value of K:";
	cin>>k;
	
	
		
	

		
		for (int i = 0; i < k; i++)  
    {  
        
        min_idx = i;  
        for (int j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
  
       
       
        temp=arr[min_idx];
        arr[min_idx]=arr[i];
        arr[i]=temp;
		
					
	}
	
	cout<<"K element="<<arr[k-1];
}
