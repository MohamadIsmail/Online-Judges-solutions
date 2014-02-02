#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;

int dp[101][101] ;

int ways(int numbers, int sum)
{
	int &res=dp[sum][numbers];
	if(res!=-1)
		return res;
	if(numbers ==1 || sum ==0)
		return 1;
	int big_sum=0;
	for(int i=0; i<=sum; i++)
		big_sum+=ways(numbers-1,sum-i)%1000000;
	return res=big_sum;
}

int main()
{
	freopen("1.txt","r",stdin);
	int n,k;
	memset(dp,-1,sizeof(dp));
	while(scanf("%d %d",&n,&k)==2)
	{
		if(!n && !k) break;
		if(k<2)
		{
			cout<<k<<"\n";
			continue;
		}
		int m=ways(k,n)%1000000;
		printf("%d\n",m);
	}
	return 0;
}