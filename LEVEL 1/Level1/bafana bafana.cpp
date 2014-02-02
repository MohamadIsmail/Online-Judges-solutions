#include <iostream>
using namespace std;

int main()
{
	int t,N,p,k,s;
	cin>>t;
	for(int i=1; i<=t; i++)
	{
		cin>>N>>k>>p;
		p%=N;
		for(int j=0; j<p; j++)
		{
			if(k==N)
				k=0;
			k++;
		}
		cout<<"Case "<<i<<": "<<k<<endl;
	}
	return 0;
}