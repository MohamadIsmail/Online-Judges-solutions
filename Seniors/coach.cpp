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
//string tostring(int n){ostringstream ss; ss << n; return ss.str();}
//long long tonumber(string str){stringstream ss; ss << str; long long n; ss >>n; return n;}
//
//vector<vi> graph;
//vi connectd_components[1150];
//vi comp;
//bool visited [50];
//void dfs(int u)
//{
//	if(visited[u])
//		return ;
//	visited[u]=true;
//	comp.push_back(u);
//	for (int i = 0; i < graph[u].size(); i++)
//	{
//		if(!visited[graph[u][i]])
//			dfs(graph[u][i]);
//	}
//}
//int main()
//{
//	int n,m,x,y;
//	cin >> n >>m ;
//	graph.clear();
//	graph.resize(n+1);
//	for (int i = 0; i < 1150; i++)
//	{
//		connectd_components[i].clear();
//	}
//	for (int i = 0; i < m; i++)
//	{
//		cin >> x >>y;
//		graph[x].push_back(y);
//		graph[y].push_back(x);
//	}
//	mem(visited,false);
//	int index=0;
//	for (int i = 1; i <= n; i++)
//	{
//		if(!visited[i] && graph[i].size())
//		{
//			comp.clear();
//			dfs(i);
//			connectd_components[index++]=comp;
//		}
//	}
//	if(index > n/3)
//	{
//		puts("-1");
//		return 0;
//	}
//	for (int i = 0; i < n/3; i++)
//	{
//		if(connectd_components[i].size()>3)
//		{
//			puts("-1");
//			return 0;
//		}
//	}
//	index=0;
//	for (int i = 1; i <= n; i++)
//	{
//		if(!visited[i])
//		{
//			while (connectd_components[index].size()==3)
//			{
//				index++;
//			}
//			connectd_components[index].push_back(i);
//		}
//	}
//	for (int i = 0; i < n/3; i++)
//	{
//		for (int j = 0; j < connectd_components[i].size(); j++)
//		{
//			printf("%d ",connectd_components[i][j]);
//		}
//		printf("\n");
//	}
//}