//#include<iostream>
//#include<algorithm>
//#include<utility>
//#include<cmath>
//using namespace std;
//
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
//	sieve();
//	int k,T,var;
//	/*for(int i = 3; i <= 20000000; i+=2)
//	{
//		if (prime[i] == true && prime[i+2] == true)
//		{
//			PairPrime[k].first = i;
//			PairPrime[k].second = i+2;
//			k++;
//		} 
//		if (k == 100002)break;
//	}*/
//	while(cin>>T)
//	{
//		k=0,var=T;
//		while(var!=0)
//		{
//			k*=10;
//			k+=var%10;
//			var/=10;
//		}
//		if(prime[T] && prime[k] && T!=k)
//		{
//			cout <<T<<" is emirp.\n";
//			continue;
//		}
//		if (prime[T])
//		{	cout<<T<<" is prime.\n";continue;}
//		if(!prime[T])
//			cout<<T<<" is not prime.\n";
//	}
//	return 0;
//}