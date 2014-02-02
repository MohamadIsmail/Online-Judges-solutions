//#include<iostream>
//#include<algorithm>
//#include<utility>
//#include<cmath>
//using namespace std;
//
//pair<int, int> PairPrime[100002];
//bool prime[20000];
//int prime_list[1000];
//
//void sieve() 
//{
//	int l=0;
//	for( int i = 0; i < 20000; ++i )
//		prime[i] = true;
//	prime[0] = prime[1] = false;
//	int N = (int)sqrt(double(20000));
//	for( int i = 2; i < N ; ++i )
//		if (prime[i])
//		{
//			prime_list[l++]=i;
//			for( int j = i*i; j < 20000; j += i )
//				prime[j] = false;
//		}
//}
//
//int main()
//{
//	sieve();
//	int sum,T,var;
//	while(cin>>T && T)
//	{
//		var=T;
//		for(int i=0; )
//	}
//	return 0;
//}