#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
	int n,m;
	while(cin>>n)
	{
		int arr[10000],x=0,y=0;
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		cin>>m;
		for(int j=0; j<n ;j++)
		{
			for(int l=j+1;l<n;l++)
			{
				if(arr[j]+arr[l]==m)
				{
					if(x!=0)
					{
						if((abs(arr[j]-arr[l]))<(abs(y-x)))
						{
							x=arr[j],y=arr[l];
						}
					}
					else
					{
						x=arr[j],y=arr[l];
					}
				}
			}
		}
		if(x>y)
			cout<<"Peter should buy books whose prices are "<<y<<" and "<<x<<"."<<endl<<endl;
		else
			cout<<"Peter should buy books whose prices are "<<x<<" and "<<y<<"."<<endl<<endl;
	}
}