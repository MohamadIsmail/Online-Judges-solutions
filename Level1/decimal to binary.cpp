#include<iostream>
using namespace std;

void binary()
{
	int x,arr[31],i,j;
	while(cin>>x)
	{
		i=0;
		while(x>0)
		{
			arr[i]=x%2;
			x/=2;
			i++;
		}
		for(j=i-1; j>=0; j--)
			cout<<arr[j];
		cout<<endl;
	}
} 

int main()
{
	binary();
	return 0;
}