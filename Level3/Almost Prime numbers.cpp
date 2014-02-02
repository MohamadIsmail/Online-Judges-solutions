//#include<iostream>
//#include<algorithm>
//#include<utility>
//#include<cmath>
//#include<vector>
//#include<map>
//using namespace std;
//
//#define max 1000002
//bool prime[max];
//int k=0,prime_nums[30000];
//map<int ,int> AlmostPrimeNumbers;
//map<int ,int>::iterator it;
//
//void sieve() 
//{
//	for( int i = 0; i < max; ++i )
//		prime[i] = true;
//	prime[0] = prime[1] = false;
//	int N = (int)sqrt(double(max));
//	for( int i = 2; i < N ; ++i )
//		if (prime[i])
//		{
//			prime_nums[k++]=i;
//			for( int j = i*i; j < max; j += i )
//				prime[j] = false;
//
//			for( int j = i*i; j < max*max; j *= i )
//				AlmostPrimeNumbers[j]=0;	
//		}
//}
//
//int main()
//{
//	sieve();
//	long long  T,m,n,counter;
//	cin>>T;
//	while(T--)
//	{
//		cin>>m>>n;
//		for(int i=m; i<=n; i++)
//		{
//
//		}
//	}
//	return 0;
//}