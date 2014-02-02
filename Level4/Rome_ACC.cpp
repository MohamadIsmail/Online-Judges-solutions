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
//typedef map<string,vector<string> > GRAPH;
//
//map<string,string>path;
//map<string ,int> visited;
//
//void printPath(string u,string source) {
//	if (u == source) {
//		printf("%c", u[0]); 
//		return; 
//	}
//	printPath(path[u],source);
//	printf("%c", u[0]); 
//}
//
//void BFS(string source,string end ,GRAPH graph)
//{
//	queue<string> q;
//	q.push(source);
//	visited[source]=0;
//	while (!q.empty()) {
//		string u = q.front(); 
//		if(u==end)
//			break;
//		q.pop();
//		for (int j = 0; j < (int)graph[u].size(); j++) {
//			if (!visited.count(graph[u][j])) {
//				visited[graph[u][j]] = visited[u] + 1;
//				path[graph[u][j]]=u;
//				q.push(graph[u][j]);
//			}
//		}
//	}
//	printPath(end,source);
//	printf("\n");
//}
//
//
//int main()
//{
//	int n,m,test;
//	cin>>test;
//	cin.ignore();
//	string t;
//	getline(cin,t);
//	while (test--)
//	{
//		cin>>m>>n;
//		string str,arr;
//		GRAPH graph;
//		for (int i = 0; i < m; i++)
//		{
//			cin>>str>>arr;
//			graph[str].push_back(arr);
//			graph[arr].push_back(str);
//		}
//		for (int i = 0; i < n; i++)
//		{
//			visited.clear();
//			path.clear();
//			cin>>str>>arr;
//			BFS(str,arr,graph);
//		}
//		if(test)
//			printf("\n");
//	}
//	return 0;
//}