//#include<iostream>
//#include<cstring>
//#include<utility>
//#include<map>
//#include<vector>
//#include<set>
//#include<queue>
//#include<string>
//#include<cstdio>
//using namespace std;
//
//#define MAXN 100
//#define INF 2000000000
//int capacity [MAXN][MAXN];
//vector<vector<int> >graph;
//vector<bool> visited;
//vector<int>from;
//
//int augmentingPath (int source, int sink)
//{
//	visited=vector<bool>(graph.size(),0);
//	from= vector<int>(graph.size(),1));
//	queue<int>q;
//	q.push(source);
//	visited[source]=true;
//	int minimumFlow;
//	while (!q.empty())
//	{
//		int curNode=q.front();
//		q.pop();
//		if(curNode==sink)
//		{
//			break;
//		}
//		for (int i = 0; i < graph[curNode].size(); i++)
//		{
//			int nextNode=graph[curNode][i];
//			if(!visited[nextNode] && capacity[curNode][nextNode]>0){
//				q.push(nextNode);
//				from[nextNode]=curNode;
//				visited[nextNode]=true;
//			}
//		}
//		if(minimumFlow==INF)
//			return 0;
//	}
//	int curNode=sink;
//	int minimumFlow=INF;
//	while(from[curNode]!= -1)
//	{
//		int parent=from[curNode];
//		minimumFlow= min(minimumFlow, capacity[parent][curNode]);
//		curNode = parent;
//	}
//	curNode= sink;
//	while (from[curNode]!= -1 )
//	{
//		int parent=from[curNode];
//		capacity[parent][curNode]-=minimumFlow;
//		capacity[curNode][parent]+=minimumFlow;
//		curNode =parent;
//	}
//
//	return minimumFlow;
//}
//
//int maximumFlow(int source ,int sink)
//{
//	if(sink==source)
//		return INF;
//	int maximumFlowValue=0; 
//
//	while (true)
//	{
//		int augmentingPathFlow = augmentingPath(source, sink);
//		if(augmentingPathFlow ==0){
//			return maximumFlowValue;
//		}
//		maximumFlowValue+=augmentingPathFlow;
//	}
//}
//
//int main()
//{	
//	
//	int v []={5, 7, 3, 5, 7, 3, 5, 7, 3};
//}