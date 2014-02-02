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
//#include <sstream>
//#include <iostream>
//#include <iomanip>
//#include <cstdio>
//#include <cmath>
//#include <cstdlib>
//#include <ctime>
//#include <queue>
//#include <assert.h>
//#include <string.h>
//using namespace std;
//
//#define INF_MAX 2147483647
//#define INF_MIN -2147483647
//
//#define pi acos(-1.0)
//#define INF 1e+9
//#define ll long long
//
//#define For(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fors(i, sz) for( size_t i = 0; i < sz.size (); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define mem(a, s) memset(a, s, sizeof (a))
//#define Read() freopen("1.txt", "r", stdin)
//#define Write() freopen(".txt", "w", stdout)
//#define sz(c) ((int)(c).size())
//#define pb push_back
//#define mp make_pair
//
//int n,widths[5002],heights[5002],dp [5002],parent[5002];
//
//bool sorting(int a ,int b)
//{
//	return mp(widths[a],heights[a]) > mp(widths[b],heights[b]);
//}
//
//
//int main()
//{
//	//Read();
//	string str;
//	while(cin>>n){
//		int cardw,cardh;
//		cin>>cardw >>cardh;
//		widths[0]=INF, heights[0]=INF;
//		for (int i = 1; i<= n; i++)
//		{
//			cin>>widths[i] >> heights[i];
//		}
//		vector<int>index(n+1);
//		for (int i = 0; i <=n; i++)
//		{
//			index[i]=i;
//		}
//		sort(index.begin(),index.end(),sorting);
//		mem(dp,0);
//		mem(parent,-1);
//		for (int i = 1; i <=n; i++)
//		{
//			if(widths[index[i]] > cardw && heights[index[i]] > cardh ){
//				for (int j = 0; j < i; j++)
//				{
//					if(widths[index[j]] > widths[index[i]] && heights[index[j]] > heights[index[i]] && dp[i] < dp[j]+1)
//					{
//						assert(j==0 || dp[j] > 0);
//						dp[i]= dp[j]+1;
//						parent[i] =j;
//					}
//				}
//			}
//		}
//		int ans=0;
//		for (int i = 1; i <=n; i++)
//		{
//			if(dp[ans] <dp[i])
//				ans=i;
//		}
//		printf("%d\n",dp[ans]);
//		if(dp[ans] > 0){
//			for (int i = ans; i!=0; i= parent[i])
//			{
//				printf("%d",index[i]);
//				if(i)
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
