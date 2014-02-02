#include<iostream>
using namespace std;

void bubblesort(int arr[], int m)
{
	int i,j,s;
	for(j=0; j<m-1; j++)
	{
		for(i=j+1; i<m; i++)
		{
			if(arr[j]>arr[i])
			{
				s = arr[j];   
				arr[j] = arr[i];
				arr[i] = s;
			}
		}
	}
}
int main()
{
	int b[1000],l,n;
	while((cin>>n)&&(n>0))
	{
		for( l=0; l<n; l++)
		{
			cin >> b[l];
		}
		bubblesort(b,n);
		for( l=0; l<n; l++)
		{
			cout<<b[l]<<" ";
		}
		cout<<endl;
	}
	return 0;
}