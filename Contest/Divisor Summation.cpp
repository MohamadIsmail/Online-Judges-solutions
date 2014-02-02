//#include<iostream>
//#include<algorithm>
//#include<utility>
//#include<cmath>
//#include<cstring>
//using namespace std;
//
//#define maxSize 500005
//int sum[maxSize];
//void divisors()
//{
//	for(int j=1; j<maxSize; j++)
//			sum[j]=1;
//	//memset(sum,1,maxSize);
//	for(int i=2; i<maxSize; ++i)
//	{
//		for(int j=i; j<maxSize; j+=i)
//		{
//			if(j==i)continue;
//			sum[j]+=i;
//		}
//	}
//}
//pair<int, int> PairPrime[100002];
//bool prime[20000000];
//
//void sieve() 
//{
//	for( int i = 0; i < 20000000; ++i )
//		prime[i] = true;
//	prime[0] = prime[1] = false;
//	int N = (int)sqrt(double(20000000));
//	for( int i = 2; i < N ; ++i )
//		if (prime[i])
//		{
//			for( int j = i*i; j < 20000000; j += i )
//				prime[j] = false;
//		}
//}
//
//int main()
//{
//	//sieve();
//	divisors();
//	string str;
//	int k,T;
//	cin>>T;
//	while(T--)
//	{
//		cin>>k;
//		cout<<sum[k]<<endl;
//	}
//	return 0;
//}