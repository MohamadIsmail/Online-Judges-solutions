//#include <iostream>
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
//#include <cstdlib>
//#include <climits>
//using namespace std;
//#define pi acos(-1.0)
//#define MAX_NODES 1002
//#define infinity 1e9
//bool vis[MAX_NODES];
//int node_count , edge_count, dist[MAX_NODES], source, sink;
//
//struct edge{
//	int to,flow, rev;
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
//int max_flow()
//{
//	memset(vis,0,sizeof(vis));
//	int res = 0, fl;
//	while((fl=find_path(source,infinity)))
//	{
//		res += fl;
//		memset(vis,0,sizeof(vis));
//	}
//	return res;
//}
//
//
//int main()
//{
//	freopen("1.txt","rt",stdin);
//	char U,V;
//	adj.resize(60);
//	while(scanf("%d",&edge_count) ==1)
//	{
//		source=0,sink=25;
//		for (int i = 0; i < edge_count; i++)
//		{
//			int x,y,number;
//			/*scanf("%c %c %d",&U,&V,&number);*/
//			cin>>U>>V>>number;
//			if(islower(U))
//				x=toupper(U)-'A'+26;
//			else
//				x=U-'A';
//			if(islower(V))
//				y=toupper(V)-'A'+26;
//			else
//				y=V-'A';
//			add_edge(x,y,number);
//		}
//		int result=max_flow();
//		printf("%d\n",result);
//	}
//	return 0;
//}