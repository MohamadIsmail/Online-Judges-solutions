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
//#define vi vector<int>
//typedef pair<int,int> PAIR;
//
//struct Edge
//{
//	int from;
//	int to;
//};
//
//Edge arr[10002];
//int dist [102],V,E,energy[102],counter;
//
//bool visited[102];
//bool dfs (int u)
//{
//	if(u==V-1)
//		return true;
//	visited[u]=true;
//	for (int i = 0; i < E; i++)
//	{
//		int j=arr[i].from,v=arr[i].to;
//		if(j==u && !visited[v] && dfs(v))
//			return true;
//	}
//	return false;
//}
//void Bellman_Ford()
//{
//	for (int i = 1; i < V; i++)
//	{
//		dist[i]=INF_MIN;
//	}
//	dist[0] = 100;
//	for (int i = 0; i < V - 1; i++){ // relax all E edges V-1 times, overall O(VE)
//		for (int j = 0; j < E; j++) {
//			int u = arr[j].from,v=arr[j].to;
//			if(dist[u]+energy[v] >dist[v] && dist[u] > 0)
//				dist[v] = dist[u] +energy[v]; // relax
//		}
//	}
//	for (int j = 0; j < E; j++) {
//		int u = arr[j].from,v=arr[j].to;
//		if(dist [u] >0 && dist[u]+energy[v] >dist[v]){
//			if(dfs(u)){
//				dist[V-1]=1;
//				return ;
//			}
//		}
//	}
//}
//int main()
//{
//	//Read();
//	while (cin >>V && V!=-1)
//	{
//		E=0;
//		mem(visited,false);
//		for (int i = 0; i < V; i++)
//		{
//			cin >> energy[i] >> counter;
//			while (counter--)
//			{
//				arr[E].from= i;
//				cin >>arr[E].to;
//				--arr[E++].to;
//			}
//		}
//		Bellman_Ford();
//		if(dist[V-1] >0)
//			printf("winnable\n");
//		else
//			printf("hopeless\n");
//	}
//	return 0;
//}