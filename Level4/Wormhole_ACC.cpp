//#include<iostream>
//#include<cstring>
//#include<utility>
//#include<map>
//#include<vector>
//#include<set>
//#include<queue>
//#include<string>
//#include<cstdio>
//#include<cstdlib>
//#include<climits>
//using namespace std;
//
//struct Edge
//{
//	int from;
//	int to;
//	int cost;
//};
//
//Edge arr[2002];
//int dist [1002],V,E;
//int min(int a, int b){ 
//	return a < b ? a : b; 
//}
//
//bool Bellman_Ford()
//{
//	memset(dist,INT_MAX,V); dist[0] = 0;
//	for (int i = 0; i < V - 1; i++) // relax all E edges V-1 times, overall O(VE)
//		for (int j = 0; j < E; j++) {
//			int u = arr[j].from,v=arr[j].to,weight=arr[j].cost;
//			if(dist[u]+weight<dist[v])
//				dist[v] = dist[u] +weight; // relax
//		}
//	for (int j = 0; j < E; j++) {
//			int u = arr[j].from,v=arr[j].to,weight=arr[j].cost;
//			if(dist[u]+weight<dist[v])
//				return false; // relax
//	}
//	return true;
//}
//int main()
//{
//	int test;
//	cin>>test;
//	while (test--)
//	{
//		cin>>V>>E;
//		for (int i = 0; i < E; i++)
//		{
//			cin>>arr[i].from>>arr[i].to>>arr[i].cost;
//		}
//		bool flag=Bellman_Ford();
//		if(!flag)
//			printf("possible\n");
//		else
//			printf("not possible\n");
//	}
//	return 0;
//}