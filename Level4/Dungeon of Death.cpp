//#include<iostream>
//#include<vector>
//#include<list>
//#include<map>
//#include<deque>
//#include<algorithm>
//#include<utility>
//#include<cstring>
//#include<string>
//#include<cstdio>
//#include<cmath>
//#include<queue>
//using namespace std;
//#define rev(i) ((i)%2?(i)-1:(i)+1)
//#define INF 1e9
//
//struct edge
//{
//	int from, to,cost,flow;
//};
//
//vector<edge>edgelist;
//vector<int> flow , parent , dist;
//
//void addedge(int from ,int to ,int cost, int flow)
//{
//	edge E1={from, to ,cost, flow};
//	edge E2={to, from, -cost, 0};
//	edgelist.push_back(E1);
//	edgelist.push_back(E2);
//}
//
//void bellmanFord(int numberOfNodes, int source ,int sink)
//{
//	parent=flow = vector<int>(numberOfNodes);
//	dist=vector<int>(numberOfNodes,INF);
//	flow[source]=INF;
//	dist[source]=0;
//	for (int i = 0; i < numberOfNodes -1; i++)
//	{
//		bool relax =false;
//		for (int j = 0; j < edgelist.size(); j++)
//		{
//			edge&e=edgelist[i];
//			if(dist[e.from]+ e.cost < dist[e.to] && e.flow){
//				dist[e.to] = dist[e.from]+ e.cost;
//				relax=true;
//				parent [e.to]= j;
//				flow[e.to] =min(e.flow ,flow[e.from] );
//
//			}
//		}
//		if(!relax){
//			break;		
//		}
//	}
//}
//
//pair<int ,int>mincostMaxFlow(int numberOfnodes, int source ,int sink){
//	if(source ==sink){
//		return make_pair(0,INF);
//	}
//	int cost=0,totalFlow=0;
//	while (true)
//	{
//		bellmanFord(numberOfnodes,source, sink);
//		if(!flow[sink])
//			break;
//		totalFlow+=flow[sink];
//		cost+=dist[sink]*flow[sink];
//		for (int cur = sink; cur != source; cur=edgelist[parent[cur]].from)
//		{
//			int e= parent[cur];
//			int re= rev(e);
//			edgelist[e].flow-=flow[sink];
//			edgelist[re].flow+=flow[sink];
//		}
//	}
//	return make_pair(cost,totalFlow);
//}
//
//int main()
//{
//	int node_count,edge_count,source,sink;
//	while(scanf("%d",&node_count) && node_count)
//	{
//		edgelist.clear();
//		edgelist.resize(node_count);
//		source=0,sink=node_count-1;
//		scanf("%d",&edge_count);
//		for (int i = 0; i < node_count; i++)
//		{
//			addedge(i,i,0,INF);
//		}
//		for (int i = 0; i < edge_count; i++)
//		{
//			int x,y,number;
//			scanf("%d %d %d",&x,&y,&number);
//			--x,--y;
//			addedge(x,y,number,1);
//		}
//		pair<int,int> result=mincostMaxFlow(node_count,source,sink);
//		if(result.second != 2)
//			printf("Back to jail\n");
//		else
//			printf("%d\n",result.first);
//	}
//	return 0;
//}