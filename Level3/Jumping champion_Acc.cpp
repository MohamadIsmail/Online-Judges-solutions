//#include<iostream>
//#include<algorithm>
//#include<utility>
//#include<cmath>
//#include<vector>
//#include<map>
//using namespace std;
//
//bool prime[20000000];
//int k=0,found[1000001];
//map<int,int> prime_nums,arr;
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
//			prime_nums[k++]=i;
//			for( int j = i*i; j < 20000000; j += i )
//				prime[j] = false;
//		}
//}
//
//bool sorting( map<int,int>::iterator it1,map<int,int>::iterator it2)
//{
//	return it1->second < it2->second;
//}
//
//int main()
//{
//	sieve();
//	map<int,int>::iterator it,iter;
//	int counter,T,n,m,max,occur, max_diff;
//	cin>>T;
//	while(T--)
//	{
//		counter=0;
//		bool temp=true;
//		cin>>n>>m;
//		for(int i=n; i<=m; i++)
//		{
//			if(prime[i])found[counter++]=i;
//		}
//		if(counter<2)temp=false;
//		if(counter==2)
//		{cout<<"The jumping champion is "<<found[1]-found[0]<<endl;  continue;}
//		if(temp)
//		{
//			max=0,occur=0;
//			for(int i=0; i<counter-1; i++)
//			{
//				int diff=found[i+1]-found[i];
//				it=arr.find(diff);
//				if(it==arr.end())arr[diff]=1;
//				else arr[diff]++;
//				if(arr[diff]>max)
//				{
//					max=arr[diff];
//					max_diff=diff;
//				}
//			}
//			for(it=arr.begin(); it!= arr.end(); it++)
//			{
//				iter=it;
//				if(iter->second == max)
//				{
//					if(!occur)
//					{ arr.erase(iter);   occur++;    it=arr.begin();}
//					else
//					{temp=false;  break;}
//				}
//			}
//			if(arr.begin()->second== max)
//				temp =false;
//		}
//
//		if(temp)
//			cout<<"The jumping champion is "<<max_diff<<endl;
//		else
//			cout<<"No jumping champion\n";
//		arr.clear(),prime_nums.clear();
//	}
//	return 0;
//}