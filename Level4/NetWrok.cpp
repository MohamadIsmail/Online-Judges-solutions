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
//#define INT_MAX 2147483647
//#define INT_MIN -2147483648
//#define pi acos(-1.0)
//using namespace std;
//
//vector<int> dfs_low, dfs_num,dfs_parent;
//int dfsNumberCounter,rootChildren,dfsRoot;
//vector<vector<int> > AdjList;
//vector<bool>articulation_vertex;
//
//void articulationPointAndBridge(int u) {
//
//	dfs_low[u] = dfs_num[u] = dfsNumberCounter++; // dfs_low[u] <= dfs_num[u]
//
//	for (int i = 0; i < AdjList[u].size(); i++) {
//		int v = AdjList[u][i];
//		if (dfs_num[v] == -1) { // a tree edge
//			dfs_parent[v] = u; // parent of this children is me
//			if (u == dfsRoot) //// special case special case
//				rootChildren++;  // count children of root
//			articulationPointAndBridge(v);
//			if (u != dfsRoot && dfs_low[v] >= dfs_num[u]) // for articulation point 
//				articulation_vertex[u] = true;
//
//			//if (dfs_low[v] > dfs_num[u]) // for bridge
//			//	printf(" Edge (%d, %d) is a bridge\n", u, v);
//
//			dfs_low[u] = min(dfs_low[u], dfs_low[v]); // update dfs_low[u]
//		} 
//		else if (v != dfs_parent[u]) // a back edge and not direct cycle     
//			dfs_low[u] = min(dfs_low[u], dfs_num[v]);
//
//	}
//}
//
//int main()
//{	
//	freopen("1.txt","rt",stdin);
//	int V,edges,from,to;
//	while(scanf("%d",&V) ==1)
//	{
//		AdjList.clear();
//		AdjList.resize(V);
//		char input [10000];
//        while ( gets (input) && strcmp (input, "0")) {
//            char *pch;
//            pch = strtok (input, " ");
// 
//            int node = atoi (pch);
//            pch = strtok (NULL, " ");
// 
//            while ( pch != NULL ) {
//                int conn = atoi (pch);
//				AdjList [node].push_back (conn);
//				AdjList [conn].push_back (node);
//                pch = strtok (NULL, " ");
//            }
//        }
//		/*for (int i = 0; i < V; i++)
//		{
//			scanf("%d (%d)",&from,&edges);
//			for (int j = 0; j < edges; j++)
//			{
//				scanf("%d",&to);
//				AdjList[from].push_back(to);
//			}
//		}*/
//		dfsNumberCounter=0;
//		dfs_num.assign(V,-1);
//		dfs_low.assign(V,0);
//		dfs_parent.assign(V,0);
//		articulation_vertex.assign(V,0);
//		//printf("Bridges:\n");
//		for (int i = 0; i < V; i++){
//			if (dfs_num[i] == -1) {
//				dfsRoot = i; rootChildren = 0;
//				articulationPointAndBridge(i);
//				articulation_vertex[dfsRoot] = (rootChildren > 1); 
//			}
//		}
//		//printf("Articulation Points:\n");
//		for (int i = 0; i < V; i++)
//			if (articulation_vertex[i])
//				printf("%d\n", i);
//	}
//	return 0;
//}