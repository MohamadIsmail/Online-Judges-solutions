//#include<iostream>
//#include<algorithm>
//#include <limits.h>
//#include<utility>
//#include<string>
//#include<cmath>
//using namespace std;
//
//bool prime[20000000];
//int prime_nums[20000000];
//
//void sieve()
//{
//	prime[0]=prime[1]=false;
//
//	for(int i=2; i<=20000000; ++i)
//		prime[i]=true;
//	int N=(int)sqrt(double(20000000));
//	int j=0;
//	for(int i=2; i<N; ++i)
//	{
//		if(prime[i])
//		{
//			prime_nums[j++]=i;
//			for(int k=i*i; k<20000000; k+=i)
//				prime[k]=false;
//		}
//	}
//}
//int main()
//{
//	sieve();
//	int n,t,m;
//	cin>>t;
//	while(t--)
//	{
//		cin>>m>>n;
//		for(int i=m; i<=n; ++i)
//		{
//			if(prime[i])
//				cout<<i<<endl;
//		}
//	}
//	return 0;
//}