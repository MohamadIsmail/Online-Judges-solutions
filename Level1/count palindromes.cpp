#include<iostream>
using namespace std;

int no_of_palindromes(int x,int y,int &z)
{
	for(int i=x; i<=y; i++)
	{
		int num,j=0,dig;
		num = i;
		while(num>0)
		{
			dig=num%10;
			j=(j*10)+dig;
			num=num/10;
		}
		if(j==i)z++;
	}
	return z;
}

int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		int c=0;
		no_of_palindromes(n,m,c);
		if(c==0)
			cout<<"From "<<n<<" to "<<m<<", there are no palindromes.\n";
		else if(c==1)
			cout<<"From "<<n<<" to "<<m<<", there is 1 palindrome.\n";
		else
			cout<<"From "<<n<<" to "<<m<<", there are "<<c<< " palindromes.\n";
	}
	return 0;
}