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
//typedef pair<int,double> PAIR;
//bool visited[102];
//int m,V,dist[102];
//vector<vector <PAIR> >Graph;
//double avg;
//vector<int> path;
//
//void print_path(int u)
//{
//	if(u==-1)
//		return ;
//	print_path(path[u]);
//	avg*=Graph[path[u]][u].second/100.0;
//}
//void dijkstra()
//{
//	path=vector<int>(V,-1);
//	memset(dist,0,sizeof(dist));
//	memset(visited,false,V);
//	priority_queue<pair<int,int> >Q;
//	Q.push(make_pair(0, 1));
//	while (!Q.empty()) { 
//		PAIR front = Q.top(); Q.pop(); 
//		int d = front.first, u = front.second;
//		visited[u]=true;
//		if(u==V)
//			break;
//		if (d == dist[u]) 
//			for (int j = 0; j < (int)Graph[u].size(); j++) {
//				PAIR v = Graph[u][j];
//				double dd = d + Graph[u][j].second;
//				if (d + v.second > dist[v.first] && !visited[v.first]) {
//					dist[v.first] = d + v.second;
//					path[v.first]=u;
//					Q.push(make_pair(dd , v.first));
//				}
//			} 
//	}
//}
//
//int main()
//{	
//	freopen("1.txt","rt",stdin);
//	while (cin>>V && V)
//	{
//		cin>>m;
//		Graph.clear();
//		Graph.resize(V);
//		for (int i = 0; i < V; i++)
//		{
//			Graph[i].resize(V);
//		}
//		avg=1;
//		for (int i = 0; i < m; i++)
//		{
//			int j,k;
//			double value;
//			cin>>j>>k>>value;
//			Graph[j][k]=value;
//			Graph[k][j]=value;
//		}
//		dijkstra();
//		printf("%.6lf percent\n",avg*100.0);
//	}
//	return 0;
//}