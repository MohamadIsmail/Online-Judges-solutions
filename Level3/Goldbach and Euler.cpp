//#include<iostream>
//#include<algorithm>
//#include<utility>
//#include<cmath>
//#include<vector>
//#include<map>
//#include<cstring>
//using namespace std;
//
//bool prime[50000003],prime_1[50000003];
//int k=0,prime_nums[100000];
//vector<pair<int,int> > prime_pair;
//
//void sieve() 
//{
//	for( int i = 0; i < 50000003; ++i )
//		prime[i] = true;
//	prime[0] = prime[1] = false;
//	int N = (int)sqrt(double(50000003));
//	for( int i = 2; i <N ; ++i )
//	{	if (prime[i])
//		{
//			prime_nums[k++]=i;
//			for( int j = i*i; j < 50000003; j += i )
//				prime[j] = false;
//		}
//	}
//	for( int i = 2; i <N ; ++i )
//	{	if (prime[i])
//		{
//			
//			for( int j = i*i; j < 50000000; j += i )
//				prime[j] = false;
//		}
//	}
//}
//
//int main()
//{
//	sieve();
//	int T;
//	while(cin>>T)
//	{
//
//	}
//	return 0;
//}