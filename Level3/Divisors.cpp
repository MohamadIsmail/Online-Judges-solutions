#include<iostream>
#include<algorithm>
#include<utility>
#include<cmath>
#include<vector>
#include<map>
#include<cstring>
using namespace std;



int main()
{
	long long T,lower,upper,divisors,max,num;
	cin>>T;
	while(T--)
	{
		max=0;
		cin>>lower>>upper;
		for (long long i = lower; i <= upper; i++)
		{
			divisors=0;
			for (long long j = 1; j <= sqrt(i); j++)
			{
				if(i%j==0){
					divisors++;
				if(i/j!=j)
					divisors++;	
				}
			}
			if(max <divisors)
			{
				max=divisors;
				num=i;
			}
		}
		cout<<"Between "<<lower<<" and "<<upper<<", "<<num<<" has a maximum of "<<max<<" divisors.\n";
	}
	return 0;
}