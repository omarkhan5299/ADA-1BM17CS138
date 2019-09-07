#include <stdio.h>
#include <iostream>
using namespace std;

int n,adj[10][10],v[10];
void DFS( int v);

int main(int argc, char **argv)
{	
	cout<<"Enter the number of vertices:";
	cin>>n;
	
	for(int i=0;i<n;i++)
		v[i]=0;
		
	cout<<"Enter the adjacency matrix:"<<endl;
	for(int i=0;i<n;i++){
		
		cout<<"ROW:"<<i<<endl;
		for(int j=0;j<n;j++)
			cin>>adj[i][j];
			
	}
	cout<<endl;
	DFS(0);
	
	for(int i=0;i<n;i++)
		if(v[i]==0)
			{	cout<<endl;
				DFS(i);
			}
	
	cout<<endl;
	return 0;
}

void DFS (int x)
{

	cout<<x;
	
	v[x]=1;
	
	for(int i=1;i<n;i++)
		if(adj[x][i]==1 && v[i]==0)
			DFS(i);
	
	
}
