#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)break;
		int i,m,s,l;
		char arr[100];
		cin>>arr;
		s=strlen(arr);
		m=s/n;
		for(i=1; i<=n; i++)
		{
			for(l=(m*i)-1; l>=((i-1)*m); l--)
				cout<<arr[l];
		}
		cout<<endl;
	}
}