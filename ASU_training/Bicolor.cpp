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
//vector<vector<int> > graph;
//int n,m,dx[]={0,0,1,1,-1,-1,-1,1},dy[]={1,-1,1,-1,1,-1,0,0};
////bool visited [103][103];
//
//bool checkBoundaries(int i, int j) {
//
//	if (i < 0 || j < 0 || i == m || j == n)
//		return false;
//	return true;
//}
//
//
//bool BFS()
//{
//	queue<int> q; q.push(0);
//	map<int, int> dist; dist[0] = 0;
//	bool isBipartite = true; // addition of one boolean flag, initially true
//	while (!q.empty()) { // similar to the original BFS routine
//		int u = q.front(); q.pop();
//		for (int j = 0; j < (int)graph[u].size(); j++) {
//			int v = graph[u][j];
//			if (!dist.count(v)) {
//				dist[v] = 1 - dist[u]; // but now, instead of recording distance
//				q.push(v); } // we just record two colors {0, 1}
//			else if (dist[v] == dist[u]) // if u-v is neighbor and both have
//				 return false; // the same color, we have coloring conflict
//		}
//	}
//	return true;
//}
//
//int main()
//{	
//	//freopen("1.txt","rt",stdin);
//	while (cin>>n>>m && n)
//	{
//		graph.clear();
//		graph.resize(n);
//		for (int i = 0; i < m; i++)
//		{
//			int j,k;
//			cin>>j>>k;
//			graph[j].push_back(k);
//			graph[k].push_back(j);
//		}
//		if(BFS())
//			printf("BICOLORABLE.\n");
//		else
//			printf("NOT BICOLORABLE.\n");
//	}
//	return 0;
//}