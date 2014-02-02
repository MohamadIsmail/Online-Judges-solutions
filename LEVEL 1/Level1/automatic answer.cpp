#include<iostream>
using namespace std;
int main()
{
	int t,n,answer;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		int answer=0;
		cin>>n;
		answer=((((n*567/9)+7492)*235)/47)-498;
		answer/=10;
		answer%=10;
		if(answer<0)
			answer*=(-1);
		cout<<answer<<endl;
	}
	return 0;
}