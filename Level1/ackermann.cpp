#include<iostream>
using namespace std;

void reverse()
{
	long long i,j;
	while(cin>>i>>j)
	{
		if((i==0)&&(j==0))break;
		long long c=0,m=i,n;
		bool x =false;
		if(i>j)swap(i,j);
		if(i==0)
		{
			i=1;
			x = true;
		}
		for ( n=i; n<=j; n++)
		{
			long long max=0,d=n;
			do
			{
				if(d%2==0)d/=2;
				else d=(3*d)+1;
				max++;
			}while(d!=1);
			if (max>c)
			{
				c = max;
				m = n;
			}
		}
		if(x == true)
			cout<<"Between "<<i-1<<" and "<<j<<", "<<m<<" generates the longest sequence of "<<c<<" values."<<endl;
		else
			cout<<"Between "<<i<<" and "<<j<<", "<<m<<" generates the longest sequence of "<<c<<" values."<<endl;
	}
}
int main()
{
reverse();
return 0;
}