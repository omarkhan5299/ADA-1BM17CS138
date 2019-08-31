#include <stdio.h>
#include <iostream>
using namespace std;
int mscount=0,bscount=0,sscount=0;
void merge(int arr[], int l, int m, int r) 
{ 
    int i,j,k; 
    int n1= m-l+1; 
    int n2=r-m; 
	int L[n1], R[n2]; 
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    i = 0;  
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) 
    { 	::mscount++;
        if (L[i]<=R[j]) 
        { 
            arr[k]=L[i]; 
            i++; 
        } 
        else
		{ 
            arr[k]=R[j]; 
            j++; 
        } 
        k++; 
    } 
  
   
    while (i<n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    
    while (j<n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 

void mergeSort(int arr[], int l, int r) 
{ 
    if (l<r) 
    { 
        
        int m=l+(r-l)/2; 
  
       
        mergeSort(arr,l,m); 
        mergeSort(arr,m+1,r); 
  
        merge(arr,l,m,r); 
    } 
} 


void bubbleSort(int arr[], int n)  
{  
    int i, j,temp;  
    for (i = 0; i < n-1; i++)     
      
      
    for (j = 0; j < n-i-1; j++) 
	{	::bscount++;
        if (arr[j] > arr[j+1])  
            {
				//swap(&arr[j], &arr[j+1]); 
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				
			}
		
	}
} 

void selectionSort(int arr[], int n)  
{  
    int i, j, min_idx,temp;  
  
    
    for (i = 0; i < n-2; i++)  
    {  
        
        min_idx = i;  
        for (j = i+1; j < n; j++)
		{	::sscount++;
			if (arr[j] < arr[min_idx])  
            min_idx = j;  
		}  
        
  
        
        //swap(&arr[min_idx], &arr[i]); 
		temp = arr[min_idx];
		arr[min_idx]=arr[i];
		arr[i]=temp;
		
    }  
}  


int main(int argc, char **argv)
{	int n;
	
	cout<<"Enter the number of elements:";
	cin>>n;
	int arr[n],arr1[n],arr2[n];
	for(int i=0;i<n;i++)
		{	cout<<"\nEnter the elements:";
			cin>>arr[i];
		}
	for(int i=0;i<n;i++)
	{
			arr1[i]=arr[i];
			arr2[i]=arr[i];
			
	}
	
	

	
	
	mergeSort(arr,0,n-1);
	bubbleSort(arr1,n);
	selectionSort(arr2,n);
	//for(int i=0;i<n;i++)
	//	cout<<arr[i]<<endl;
	cout<<"\nComparisons in MergeSort: "<<::mscount;
	cout<<"\nComparisons in BubbleSort: "<<::bscount;
	cout<<"\nComparisons in SelectionSort: "<<::sscount;
		
		
	return 0;
}
