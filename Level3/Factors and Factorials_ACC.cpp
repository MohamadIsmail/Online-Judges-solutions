//#include<cstdio>
//#include<algorithm>
//#include<utility>
//#include<cmath>
//#include<map>
//#include<cstring>
//using namespace std;
//
//
//bool prime[102];
//map<int,int> mymap;
//map<int,int> ::iterator it,iter,map_iter;
//
//void sieve() 
//{
//	int counter=0;
//	for( int i = 0; i <=100; ++i )
//		prime[i] = true;
//	prime[0] = prime[1] = false;
//	//int N = (int)sqrt(double(10002));
//	for( int i = 2; i <= 100 ; ++i )
//	{
//		if (prime[i])
//		{
//			mymap[i]=1;
//			for( int j = i*i; j <=100; j += i )
//				prime[j] = false;
//		}
//	}
//}
//int main()
//{
//	sieve();
//	int N,temp;
//	while(scanf("%d",&N)!=EOF  &&N)
//	{
//		printf("%3d! =",N);
//	/*	if(N<10)
//			cout<<"  ";
//		else if(N<100)
//			cout<<" ";
//
//		cout<<N<<"! =";*/
//		iter=mymap.begin();
//		for(int i=2; i<=N; i++)
//		{
//			if(!prime[i])
//			{
//				temp=i,it=mymap.begin();
//				while (temp!=1)
//				{
//					if(temp%it->first==0){
//						it->second++;
//						temp/=it->first;
//					}
//					else
//						it++;
//				}
//			}
//			else
//				iter++;
//		}
//		int count=0;
//		for(map_iter=mymap.begin(); map_iter!=iter; map_iter++, count++)
//		{
//			if(count==15)
//				printf("\n%6c",' ');
//			printf("%3d",map_iter->second);
//		}
//		printf("\n");
//		for(map_iter=mymap.begin(); map_iter!=mymap.end(); map_iter++)
//		{
//			map_iter->second=1;
//		}
//	}
//	return 0;
//}