#include<iostream>
using namespace std;
int main()
{
	int n,x=1;
	cin>>n;
	cout<<"\n";
		for(int i=1;i<=n;i++)
		{
			cout<<x<<endl;
			x=(x*10)+1;
		}
		return 0;
}
