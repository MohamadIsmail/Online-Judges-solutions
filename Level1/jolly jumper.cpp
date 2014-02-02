#include<iostream>
using namespace std;

int main()
{
	int n;
	while((cin>>n)&&(n>0))
	{
		int a[3000],i,j;
		for( i=0; i<n; i++)
			cin >> a[i]; 
		bool x[3000];
		for( i=1; i<n; i++)
			x[i] = false;
		for( i=1; i<=n-1; i++)
		{
			for( j=0; j<n-1; j++)
			{
				if(abs(a[j]-a[j+1])==i)
				{
					x[i]=true;
					break;
				}
			}
		}
		bool m = true;
		 for( i=1; i<=n-1; i++)
		 {
	            if(x[i] == false)
				{
					m = false;
					break;
				}
		 }
	 
	        if(m == false)
	            cout << "Not jolly" << endl;
	        else
	            cout << "Jolly" << endl;
	}
	return 0;
}