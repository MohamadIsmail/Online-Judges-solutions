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
//typedef vector<int> vi;
//
//#define INF_MAX 2147483647
//#define INF_MIN -2147483647
//
//#define pi acos(-1.0)
//#define N 1000000
//#define LL long long 
//#define For(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fors(i, sz) for( size_t i = 0; i < sz.size (); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define mem(a, s) memset(a, s, sizeof (a))
//#define Read() freopen("1.txt", "r", stdin)
//#define Write() freopen(".txt", "w", stdout)
//
//struct edge {
//	int index,weight,fuel;
//	edge(){}
//	edge (int i, int j, int k) {
//		index = i;
//		weight = j;
//		fuel = k;
//	}
//	bool operator < (const edge &n) const {
//		return weight > n.weight;
//	}
//};
//
//
//int n,m,price[1001],dist[1001][1001];
//vector<vector<edge> >graph;
//
//
//
//int dijkstra(int source,int destination,int capacity)
//{
//	for (int i=0; i<n; ++i)
//		for (int j=0; j<=capacity; ++j)
//			dist[i][j] = INT_MAX;
//	dist[source][0]=0;
//	priority_queue<edge>PQ;
//	PQ.push(edge(source,0,0));
//	while (!PQ.empty())
//	{
//		edge cur=PQ.top();
//		PQ.pop();
//		if(cur.index==destination)
//			return cur.weight;
//
//		for(int i=0; i<graph[cur.index].size(); i++){
//			edge e =graph[cur.index][i];
//			if(cur.fuel>=e.weight)  //can move in this path or not
//			{
//				int fu=cur.fuel-e.weight;
//				if(cur.weight <dist[e.index][fu]){
//					dist[e.index][fu]= cur.weight;
//					PQ.push(edge(e.index,cur.weight,fu));
//				}
//			}
//			if(cur.fuel <capacity)
//			{
//				if(dist[e.index][cur.fuel+1] > cur.weight+price[e.index])
//				{
//					dist[e.index][cur.fuel+1]=cur.weight+price[e.index];
//					PQ.push(edge(e.index,cur.weight+price[e.index],cur.fuel+1));
//				}
//			}
//		}
//	}
//	return INF_MAX;
//}
//int main()	
//{
//	freopen("1.txt","rt",stdin);
//	while (cin>>n>>m)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			cin>>price[i];
//		}
//		graph.resize(n);
//		for (int i = 0; i < m; i++)
//		{
//			int from,to,cost;
//			cin>>from >>to >>cost;
//			graph[from].push_back(edge(to,cost,0));
//			graph[to].push_back(edge(from,cost,0));
//
//		}
//		int queries;
//		cin>>queries;
//		for (int i = 0; i < queries; i++)
//		{
//			int cap,source,dist;
//			cin>>cap>>source>>dist;
//			int res=dijkstra(source,dist,cap);
//			if(res==INT_MAX)
//				cout<<"impossible\n";
//			else
//				cout<<res<<endl;
//		}
//	}
//	return 0;
//}