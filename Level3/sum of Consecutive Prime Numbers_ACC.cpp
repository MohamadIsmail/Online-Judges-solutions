//#include<iostream>
//#include<algorithm>
//#include<utility>
//#include<cmath>
//#include<map>
//#include<cstring>
//using namespace std;
//
//
//bool prime[10002];
//int prime_list[1500],counter,Prime_sums[10002];
//
//void sieve() 
//{
//	int counter=0;
//	for( int i = 0; i < 10002; ++i )
//		prime[i] = true;
//	prime[0] = prime[1] = false;
//	//int N = (int)sqrt(double(10002));
//	for( int i = 2; i < 10002 ; ++i )
//	{
//		if (prime[i])
//		{
//			prime_list[counter++]=i;
//			for( int j = i*i; j < 10002; j += i )
//				prime[j] = false;
//		}
//	}
//	memset(Prime_sums,0,sizeof(Prime_sums));
//	for( int i = 0; i < counter ; i++ )
//	{
//		int T=0;
//		for( int j = i; j < counter; j ++ )
//		{
//			T+=prime_list[j];
//			if(T>10000)continue;
//			++Prime_sums[T];
//		}
//	}
//}
//int main()
//{
//	sieve();
//	int T;
//	while(cin>>T && T)
//	{
//		cout<<Prime_sums[T]<<endl;
//	}
//	return 0;
//}