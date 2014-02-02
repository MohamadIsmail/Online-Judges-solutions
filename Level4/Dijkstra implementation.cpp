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
//#define vi vector<int>
//int countBits(long long mask) {int res = 0; while(mask) mask &= (mask - 1), ++ res; return res;}
//
//int m,V;
//
//struct p
//{
//	int index,cost;
//	p(){}
//	p(int i,int j)
//	{
//		index=i;
//		cost=j;
//	}
//	bool operator <(const p &p1)const
//	{
//		return cost > p1.cost;
//	}
//};
//vector<vector <p> >Graph;
//int dist[1002];
//p path[1002];
//
//
//int dijkstra(int source ,int destination)
//{
//	priority_queue<p >Q;
//	for (int i = 0; i < V; i++)
//	{
//		dist[i]=INF_MAX;
//	}
//	dist[source]=0;
//	Q.push(p(source, 0));
//	while (!Q.empty()) { 
//		p front = Q.top(); Q.pop(); 
//		int  u = front.index;
//		int d = front.cost;
//		if(u==destination){
//			return d;
//		}
//		for (int j = 0; j < (int)Graph[u].size(); j++) {
//			p v = Graph[u][j];
//			if (d + v.cost < dist[v.index]) {
//				dist[v.index] = d + v.cost;
//				Q.push(p(v.index , dist[v.index]));
//			}
//		}
//	}	
//	return -1;
//}
//int main()
//{	
//	//freopen("1.txt","rt",stdin);
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		cin >>V >>m;
//		Graph.clear();
//		Graph.resize(V);
//		int x,y;
//		cin >> x >>y;
//		x--,y--;
//		for (int i = 0; i < m; i++)
//		{
//			int j,k,value;
//			cin>>j>>k>>value;
//			j--,k--;
//			Graph[j].push_back(p(k,value));
//			Graph[k].push_back(p(j,value));
//		}
//		printf("%d\n", dijkstra(x,y));
//	}
//	return 0;
//}
