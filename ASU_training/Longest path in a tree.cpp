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
//#define N 1000000
//#define ll long long
//
//#define For(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fors(i, sz) for( size_t i = 0; i < sz.size (); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define mem(a, s) memset(a, s, sizeof (a))
//#define Read() freopen("1.txt", "r", stdin)
//#define Write() freopen(".txt", "w", stdout)
//
//typedef pair<int,int> PAIR;
//
//vector<vector <PAIR> >Graph;
//int dp [10005][10005];
//int dfs(int u, int parent)
//{
//	if(dp[u][parent]!=-1)
//		return dp[u][parent];
//	dp[u][parent]=0;
//	for (int i = 0; i < Graph[u].size(); i++)
//	{
//		if(Graph[u][i].first !=parent)
//			dp[u][parent]=max(dp[u][parent],dfs(Graph[u][i].first,u)+1);
//	}
//	return dp[u][parent];
//}
//
//
//int main()
//{	
//	//freopen("1.txt","rt",stdin);
//	int V;
//	while (cin>>V)
//	{
//		Graph.clear();
//		Graph.resize(V);
//		for (int i = 0; i < V-1; i++)
//		{
//			int j,k;
//			cin>>j>>k;
//			j--,k--;
//			Graph[j].push_back(make_pair(k,1));
//			Graph[k].push_back(make_pair(j,1));
//		}
//		mem(dp,-1);
//		int Max=0;
//		for (int i = 0; i < V; i++)
//		{
//			Max=max(Max,dfs(i,-1));
//		}
//		printf("%d\n",Max);
//	}
//	return 0;
//}
