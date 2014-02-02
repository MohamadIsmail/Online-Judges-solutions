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
//vector<string> graph;
//int n,m,dx[]={1,1,1,-1,-1,-1,0,0},dy[]={1,0,-1,1,0,-1,1,-1};
//bool visited [103][103];
//
//bool checkBoundaries(int i, int j) {
//
//	if (i < 0 || j < 0 || i == m || j == n)
//		return false;
//	return true;
//}
//
//void DFS(int i,int j)
//{
//	visited[i][j]=true;
//	for (int k = 0; k < 8; k++)
//	{
//		int x=i+dx[k],y=j+dy[k];
//		if(checkBoundaries(x,y)&& !visited[x][y]){
//			visited[x][y]=true;
//			if(graph[x][y]=='@')
//				DFS(x,y);
//		}
//	}
//}
//
//int main()
//{	
//	//freopen("1.txt","rt",stdin);
//	while (cin>>m>>n && m && n)
//	{
//		graph.clear();
//		for (int i = 0; i < m; i++)
//		{
//			string str;
//			cin>>str;
//			graph.push_back(str);
//		}
//		memset(visited,false,sizeof(visited));
//		int count =0;
//		for (int i = 0; i < m; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if(!visited[i][j]) 
//				{
//					visited[i][j]=true;
//					if( graph[i][j]=='@'){
//					count++;
//					DFS(i,j);}
//				}
//
//			}
//		}
//		printf("%d\n",count );
//	}
//	return 0;
//}