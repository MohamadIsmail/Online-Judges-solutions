//#include<iostream>
//#include <cstdio>
//#include <algorithm>
//#include <cstring>
//#include <string>
//#include <cctype>
//#include <stack>
//#include <queue>
//#include <list>
//#include <vector>
//#include <map>
//#include <sstream>
//#include <cmath>
//#include <bitset>
//#include <utility>
//#include <set>
//#include<cstdlib>
//#include<climits>
//using namespace std;
//#define INT_MAX 2147483647
//#define INT_MIN -2147483648
//#define pi acos(-1.0)
//#define MAX_NODES 1002
//#define infinity 1e9
//bool vis[MAX_NODES];
//int source, sink, node_count , edge_count;
//int dist[MAX_NODES];
//
//struct edge{
//	int to, flow, rev;
//};
//
//vector<vector<edge> > adj;
//
//void add_edge(int from,int to, int flow)
//{
//	edge e1={to,flow,adj[to].size()};
//	edge e2={from,0,adj[from].size()};
//	adj[from].push_back(e1);
//	adj[to].push_back(e2);
//}
//
//int dijkstra() {
//	fill(dist, dist + adj.size(), 0);
//	dist[source] = 0;
//	priority_queue<pair<pair<int, int > ,int > > q;
//	q.push(make_pair(make_pair(0, infinity),source));
//	while (q.size()) {
//		int cur = q.top().second;
//		int d = q.top().first.first;
//		int ff=q.top().first.second;
//		q.pop();
//		if (d != dist[cur])
//			continue;
//		if (cur == sink)
//			return ff;
//		for (int i = 0; i < adj[cur].size(); ++i) {
//			int j = adj[cur][i].to;
//			int dd = d + adj[cur][i].flow;
//			int INF;
//			if (dist[j] < dd) {
//				dist[j] = dd;
//				if(adj[cur][i].flow)
//					INF=min(ff,adj[cur][i].flow);
//				q.push(make_pair(make_pair(dd,INF),j));
//			}
//		}
//	}
//	return 0;
//}
//
//int find_path(int cur, int flow)
//{
//	if(cur == sink)
//		return flow;
//	if(vis[cur] || !flow)
//		return 0;
//	vis[cur] = true;
//	for(int i=0 ; i <(int) adj[cur].size(); i++)
//	{
//		edge &e = adj[cur][i];
//		int fl = find_path(e.to,min(flow,e.flow));
//		if(fl){
//			edge &r = adj[e.to][e.rev];
//			e.flow -= fl;
//			r.flow += fl;
//			return fl;
//		}
//	}
//	return 0;
//}
//
//double max_flow()
//{
//	memset(vis,0,sizeof(vis));
//	int res = 0, fl,MAX=dijkstra();
//	while((fl=find_path(source,infinity)))
//	{
//		res += fl;
//		memset(vis,0,sizeof(vis));
//	}
//	return double((double)res / MAX);
//}
//
//int main()
//{
//	//freopen("1.txt","rt",stdin);
//	int P,D,number,U,V;
//	scanf("%d",&P);
//	while(P--)
//	{
//		scanf("%d %d %d %d %d",&D ,&node_count,&edge_count,&source,&sink);
//		adj.clear();
//		adj.resize(node_count);
//		for (int i = 0; i < edge_count; i++)
//		{
//			scanf("%d %d %d",&U,&V,&number);
//			add_edge(U,V,number);
//		}
//		double result=max_flow();
//		printf("%d %.3lf\n",D,result);
//	}
//	return 0;
//}