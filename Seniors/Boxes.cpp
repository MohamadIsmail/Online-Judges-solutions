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
//#include <cctype>
//#include <string.h>
//using namespace std;
//
//#define INF_MAX 2147483647
//#define INF_MIN -2147483647
//
//#define pi acos(-1.0)
//#define INF 1e9
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
//#define all(v) v.begin(),v.end()
//#define vi vector<int>
//typedef pair<int,int> PAIR;
//typedef pair<PAIR ,int> PAIR2;
//string tostring(long long n){ostringstream ss; ss << n; return ss.str();}
//long long tonumber(string str){stringstream ss; ss << str; long long n; ss >>n; return n;}
//
//int dp[1010][3010],weight[1010],load[1010];
//
//int main()
//{
//	//Read();
//	int n;
//	while (cin >>n && n)
//	{
//		int Max=0;
//		mem(dp,0);
//
//		for (int i = 0; i < n; i++)
//		{
//			cin>> weight[i]>> load[i];
//			dp[i][load[i]]=1;
//		}
//		for (int i = 1; i < n; i++)
//		{
//			for (int j = 0; j <= 3000; j++)
//			{
//				if(dp[i-1][j]>0 )
//				{
//					if(j>=weight[i]){
//						int k=min(load[i],j-weight[i]);
//						dp[i][k]=max(dp[i][k],dp[i-1][j]+1);
//					}
//					dp[i][j]=max(dp[i-1][j],dp[i][j]);
//				}
//			}
//		}
//		for (int i = 0; i < 3001; i++)
//		{
//			Max=max(Max,dp[n-1][i]);
//		}
//		printf("%d\n",Max);
//	}
//	return 0;
//}