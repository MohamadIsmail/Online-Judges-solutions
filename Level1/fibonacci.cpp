#include<iostream>
using namespace std;

void Fibonacci(int a)
{
	long long m=1,i=0,sum,j=1;
	if(a<=1)
		sum=a;
	while((a!=j)&&(a>1))
	{
		j++;
		sum=m+i;
		i=m;
		m=sum;
	}
	cout<<sum<<endl;
}

int main()
{
	int n;
	while(cin>>n)
	{
		if((n>=0)&&(n<=50))
			Fibonacci(n);
	}
	return 0;
}