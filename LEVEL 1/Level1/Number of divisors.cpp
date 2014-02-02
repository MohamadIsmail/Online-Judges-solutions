#include<iostream>
using namespace std;

void Divisors (int x,int &y)
{
	for(int i=1; i<=x; i++)
	{
		if(x%i==0)
			y++;
	}
}

int main()
{
	int n,number;
	while(cin>>n)
	{
		number=0;
		Divisors(n,number);
		cout<<number<<endl;
	}
	return 0;
}