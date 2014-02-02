#include<iostream>
using namespace std;

bool prime(int x)
{
	if(x==1)
		return false;
	for(int i=2; i<x; i++)
	{
		if(x%i==0)
			return false;
	}
	return true;
}

int main()
{
	int n;
	while((cin>>n)&&(n>0)&&(n<1000001))
	{
		bool y=prime(n);
		if(y==true)
			cout<<"Prime :D"<<endl;
		else
			cout<<"Not Prime :("<<endl;
	}
	return 0;
}