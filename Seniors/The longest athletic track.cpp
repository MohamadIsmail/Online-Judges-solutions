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
//int dp[2005][2005];
//vector<vector<pair<int ,int> > > graph;
//
//int dfs(int u, int parent){
//	if(dp[u][parent]!=-1)
//		return dp[u][parent];
//	dp[u][parent]=0;
//	for (int i = 0; i < graph[u].size(); i++)
//	{
//		if(graph[u][i].first!=parent)
//			dp[u][parent]=max(dp[u][parent],dfs(graph[u][i].first,u)+graph[u][i].second);
//	}
//	return dp[u][parent];
//}
//
//int main()
//{
//	//Read();
//	int t;
//	cin >> t;
//	while (t--)
//	{ 
//		int n,x,y,cost;
//		cin >> n;
//		graph.clear();
//		graph.resize(n);
//		for (int i = 0; i < n-1; i++)
//		{
//			cin >> x>>y >>cost;
//			x--,y--;
//			graph[x].push_back(make_pair(y,cost));
//			graph[y].push_back(make_pair(x,cost));
//		}
//		mem(dp,-1);
//		int num=0;
//		for (int i = 0; i < n; i++)
//		{
//			num=max(num,dfs(i,-1));
//		}
//		cout << num << endl;
//	}
//	return 0;
//}