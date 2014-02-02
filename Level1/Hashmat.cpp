#include<iostream>
using namespace std;
int main()
{
	long long n,m,res;
	while(cin>>n>>m)
	{
		res=n-m;
		if(res<0)
			res=res*-1;
		cout<<res<<endl;
	}
	return 0;
}
