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
//#define int_max 2147483647
//#define int_min -2147483648
//#define pi acos(-1.0)
//using namespace std;
//
//vector<int> dfs_low, dfs_num,dfs_parent;
//int dfsnumbercounter,rootchildren,dfsroot;
//vector<vector<int> > adjlist;
//vector<bool>articulation_vertex;
//vector<pair<int ,int> >critical;
//
//void articulationpointandbridge(int u) {
//
//	dfs_low[u] = dfs_num[u] = dfsnumbercounter++; // dfs_low[u] <= dfs_num[u]
//
//	for (int i = 0; i < adjlist[u].size(); i++) {
//		int v = adjlist[u][i];
//		if (dfs_num[v] == -1) { // a tree edge
//			dfs_parent[v] = u; // parent of this children is me
//			if (u == dfsroot) //// special case special case
//				rootchildren++;  // count children of root
//			articulationpointandbridge(v);
//			if (u != dfsroot && dfs_low[v] >= dfs_num[u]) // for articulation point 
//				articulation_vertex[u] = true;
//
//			if (dfs_low[v] > dfs_num[u]){
//				if(u < v)
//					critical.push_back(make_pair(u,v));
//				else
//					critical.push_back(make_pair(v,u));
//			}
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
//	//freopen("1.txt","rt",stdin);
//	int V,edges,from,to;
//	while(scanf("%d",&V) && V)
//	{
//		
//		adjlist.clear();
//		adjlist.resize(V);
//		for (int i = 0; i < V; i++)
//		{
//			scanf("%d (%d)",&from,&edges);
//			for (int j = 0; j < edges; j++)
//			{
//				scanf("%d",&to);
//				adjlist[from].push_back(to);
//			}
//		}
//		dfsnumbercounter=0;
//		dfs_num.assign(V,-1);
//		dfs_low.assign(V,0);
//		dfs_parent.assign(V,0);
//		articulation_vertex.assign(V,0);
//		for (int i = 0; i < V; i++){
//			if (dfs_num[i] == -1) {
//				dfsroot = i; rootchildren = 0;
//				articulationpointandbridge(i);
//				articulation_vertex[dfsroot] = (rootchildren > 1); 
//			}
//		}
//		printf("%d critical links\n",critical.size());
//		sort(critical.begin(), critical.end());
//		for (int i = 0; i < critical.size(); i++)
//		{
//			printf("%d - %d\n", critical[i].first, critical[i].second);
//		}
//		printf("\n");
//		critical.clear();
//	}
//	return 0;
//}