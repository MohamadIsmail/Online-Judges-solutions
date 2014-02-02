//#include<iostream>
//#include<cstring>
//#include<utility>
//#include<map>
//#include<vector>
//#include<set>
//#include<queue>
//#include<string>
//#include<cstdio>
//#include<climits>
//using namespace std;
//typedef pair<int,int> PAIR;
//#define INF 1e9
//
//int dist[20002];
//int src,destination,V,E,t,from ,to,cost;
//vector <PAIR> Graph [20002];
//
//int dijkstra()
//{
//	for (int i = 0; i < V; i++)
//	{
//		dist[i]=INF;
//	}
//	dist[src]=0;
//	priority_queue<pair<int,int> >Q;
//	Q.push(make_pair(0, src));
//	while (!Q.empty()) { 
//		PAIR front = Q.top(); Q.pop(); 
//		int d = -front.first, u = front.second;
//		if(u==destination)
//			return d;
//		if (d == dist[u]) 
//			for (int j = 0; j < (int)Graph[u].size(); j++) {
//				PAIR v = Graph[u][j];
//				int dd = d + Graph[u][j].second;
//				if (d + v.second < dist[v.first]) {
//					dist[v.first] = d + v.second; 
//					Q.push(make_pair(-dd , v.first));
//				}
//			} 
//	}
//	return INF;
//}
//
//int main()
//{
//	scanf("%d",&t);
//	int CASE=0;
//	while (t--)
//	{
//		scanf("%d %d %d %d",&V,&E,&src,&destination);
//		for (int i = 0; i < E; i++)
//		{
//			scanf("%d %d %d",&from,&to,&cost);
//			Graph[from].push_back(make_pair(to,cost));
//			Graph[to].push_back(make_pair(from,cost));
//		}
//		int x=dijkstra();
//		printf("Case #%d: ",++CASE);
//		if(/*dist[destination]*/x!=INF)
//			printf("%d\n",x);
//		else
//			printf("unreachable\n");
//		for (int i = 0; i < V; i++)
//		{
//			Graph[i].clear();
//		}
//	}
//	return 0;
//}