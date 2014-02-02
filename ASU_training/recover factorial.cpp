//#include <vector>
//#include <list>
//#include <map>
//#include <set>
//#include <deque>
//#include <stack>
//#include <bitset>
//#include <algorithm>
//#include <functional>
//#include <numeric>
//#include <utility>
//#include <cstdlib>
//#include <sstream>
//#include <iostream>
//#include <iomanip>
//#include <cstdio>
//#include <cmath>
//#include <cstdlib>
//#include <ctime>
//#include <queue>
//#include <assert.h>
//#include <string>
//#include <cctype>
//#include <string.h>
//using namespace std;
//#define INF_MAX 2147483647
//#define INF_MIN -2147483647
//#define pi acos(-1.0)
//#define INF 1e9
//#define ll long long
//#define For(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fors(i, sz) for( size_t i = 0; i < sz.size (); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define mem(a, s) memset(a, s, sizeof (a))
//#define Read() freopen("1.txt", "r", stdin)
//#define Write() freopen(".txt", "w", stdout)
//#define sz(c) ((int)(c).size())
//#define pb push_back
//#define mp make_pair
//#define vi vector<int>
//typedef pair<int,int> PAIR;
//typedef pair<PAIR ,int> PAIR2;
//typedef unsigned long long ull;
//typedef long double lld;
//string tostring(long long n){ostringstream ss; ss << n; return ss.str();}
//long long tonumber(string str){stringstream ss; ss << str; long long n; ss >>n; return n;}
//
//int n;
//short int num[2703665]={0}; 
//int sum[2703664]={0};
//void Divisors ()
//{
//	int a,b;
//	for (a=2;a<=2703663;a++)
//	{
//		sum[a]=sum[a-1];
//		if(a%2==0||num[a]!=0)
//		{
//			if(a%2==0)
//				sum[a]+=(sum[a/2]-sum[a/2-1])+1;
//			else
//				sum[a]+=(sum[a/num[a]]-sum[a/num[a]-1])+1;
//		}
//		else sum[a]++;
//	}
//}
//void prime()
//{   
//	int a,b;
//	for(a=3;a<1644;a=a+2)      
//		if(num[a]==0)      
//		{      
//			for(b=3;a*b<=2703664;b=b+2)      
//				num[a*b]=a;      
//		}   
//} 
//int indexL(int n,int top)   
//{   
//	int lower=0, mid, high=top-1;   
//	int index=-1;   
//	do
//	{   
//		mid=(lower+high)/2;   
//		if(sum[mid]<n)      lower=mid+1;   
//		else if(sum[mid]>n) high=mid-1;   
//		else                index=mid;   
//	}while(index==-1&&lower<=high);   
//	return index;
//} 
//int main()
//{
//	//freopen("1.txt","r",stdin);
//	prime();
//	Divisors();
//	int x=0;
//	while(scanf("%d",&n)==1&&n>=0)
//	{
//		printf("Case %d: ",++x);
//		if(n==0) {
//			printf("0!\n");
//			continue;
//		}
//		int find=indexL(n,2703664);
//		if(find!=-1)
//			printf("%d!\n",find);
//		else printf("Not possible.\n");
//	}
//	return 0;
//}