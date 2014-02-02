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
//typedef pair<double,int> PAIR;
//int m,V;
//
//vector<vector <PAIR> >Graph;
//double dist[102];
//PAIR path[102];
//
//
//double dijkstra()
//{
//	for (int i = 1; i <= V; i++)
//	{
//		dist[i]=0;
//		path[i].first=-1;
//		path[i].second=-1;
//	}
//	priority_queue<PAIR >Q;
//	dist[1]=1;
//	Q.push(make_pair(1, 1));
//	while (!Q.empty()) { 
//		PAIR front = Q.top(); Q.pop(); 
//		int  u = front.second;
//		double d = front.first;
//		if(u==V){
//			return d;
//		}
//		if (d == dist[u]) 
//			for (int j = 0; j < (int)Graph[u].size(); j++) {
//				PAIR v = Graph[u][j];
//				if (d * v.first > dist[v.second]) {
//					dist[v.second] = d * v.first;
//					Q.push(make_pair(dist[v.second] , v.second));
//				}
//			} 
//	}
//	return 0;
//}
//
//int main()
//{	
//	//freopen("1.txt","rt",stdin);
//	while (cin>>V && V)
//	{
//		cin>>m;
//		Graph.clear();
//		Graph.resize(V+1);
//		for (int i = 0; i < m; i++)
//		{
//			int j,k,value;
//			cin>>j>>k>>value;
//			Graph[j].push_back(make_pair(value/100.0,k));
//			Graph[k].push_back(make_pair(value/100.0,j));
//		}
//		printf("%.6lf percent\n",100 * dijkstra());
//	}
//	return 0;
//}
