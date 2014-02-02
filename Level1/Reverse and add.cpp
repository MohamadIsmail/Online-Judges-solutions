#include<iostream>
using namespace std;

void reverse()
{
	int g;
	cin>>g;
	for(int i=0; i<g; i++)
	{
		long long res;
		cin>>res;
		long long num,j=0,dig,m=0;
		num = res;
		while(num>0)
		{
			dig=num%10;
			j=(j*10)+dig;
			num=num/10;
		}
		while(true)
		{
			res=res+j;
			m++;
			j=0,num=res;
			while(num>0)
			{
				dig=num%10;
				j=(j*10)+dig;
				num=num/10;
			}
			if(j==res)
				break;
		}
		cout<<m<<" "<<res<<endl;
	}
}

int main()
{
	reverse();
	return 0;
}