#include<iostream>
using namespace std;

long long power(int a,int b)
{
	long long sum =1;
	for(int i=0; i<b; i++)
		sum*=a;
	return sum;
}

int main()
{
	int x,y;
	while(cin>>x>>y)
	{
		power(x,y);
		cout<<power(x,y)<<endl;
	}
	return 0;
}