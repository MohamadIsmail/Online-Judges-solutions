#include<iostream>
using namespace std;

int main()
{
	int x,n,y;
	cin>>x;
	for(int l=1;l<=x;l++)
	{
		cin>>n;
		cin>>y;
		for(int z=1;z<=y;z++)
		{
			for(int i=1;i<n;i++)
			{
				for(int k=1;k<=i;k++)
					cout<<i;
				cout<<endl;
			}
			for(int t=n;t>=1;t--)
			{
				for(int c=1;c<=t;c++)
					cout<<t;
				cout<<endl;
			}
			if(z!=y)
				cout<<endl;
		}
		if(l!=x)
			cout<<endl;
	}
	return 0;
}
