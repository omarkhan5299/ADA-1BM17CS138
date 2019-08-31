#include <stdio.h>
#include <iostream>
using namespace std;

/*void swap(int *a, int *b)
{
		int t=*a;
		*a=*b;
		*b=t;
}*/

int partition(int a[], int low, int high)
{	int temp;

	int pivot = a[low];
	int i=low+1;
	int j=high;
	while(1)
	{
		while(a[i]<=pivot && i<=high)
		{
			i++;
			
		}
		while(a[j]>pivot && j>=low)
		{
			j--;
			
		}
		if(i<j)
			{
				//swap(a[i],a[j]);
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		else
	{
		a[low]=a[j];
		a[j]=pivot;
		return j;
	}
	}
}
	
	void quicksort(int a[],int low,int high)
	{	
		if(low<high)
		{
			int pivot= partition(a,low,high);
			quicksort(a,low,pivot-1);
			quicksort(a,pivot+1,high);
			
		}
	}
	


int main(int argc, char **argv)
{	int n;
	
	cout<<"Enter the number of elements:";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		{	cout<<"\nEnter the elements:";
			cin>>arr[i];
		}
	

	
	
	quicksort(arr,0,n-1);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<endl;
		
		
		
	return 0;
}

