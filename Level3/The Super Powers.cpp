//#include<iostream>
//#include<algorithm>
//#include<utility>
//#include<cmath>
//#include<vector>
//#include<map>
//#include<set>
//using namespace std;
//
//#define max 20000000
//#define bound 8976902158263259136
//bool prime[max];
//int k=0,prime_nums[30000];
//set<long long>myset;
//set<long long>::iterator it;
//
//void sieve() 
//{
//	for( int i = 0; i < max; ++i )
//		prime[i] = true;
//	prime[0] = prime[1] = false;
//	int N = (int)sqrt(double(max));
//	for( int i = 2; i < N ; ++i )
//	{	
//		if (prime[i])
//		{
//			prime_nums[k++]=i;
//			for( int j = i*i; j < max; j += i )
//				prime[j] = false;
//			long long j=2,l=j,value=(long long)pow((long double)i,(long double)j*l);
//			while(value >0 && value<bound)
//			{
//				while(value >0 && value<bound)
//				{
//					myset.insert(value);
//					l++;
//					value=(long long)pow((long double)i,(long double)j*l);
//				}
//				++j,l=j;
//				value=(long long)pow((long double)i,(long double)j*l);
//			}
//		}
//	}
//}
//
//int main()
//{
//	myset.insert(1);
//	sieve();
//	 for ( it=myset.begin() ; it != myset.end(); it++ )
//		cout <<"\t"<< *it;
//	 cout<<endl;
//	return 0;
//}