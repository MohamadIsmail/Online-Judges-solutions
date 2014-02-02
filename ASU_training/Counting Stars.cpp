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
//int DFS(int i,int j)
//{
//	if(checkBoundaries(i,j)&& graph[i][j]=='*'){
//		int res=1;
//		graph[i][j]='.';
//		for (int k = 0; k < 8; k++)
//		{
//			int x=i+dx[k],y=j+dy[k];
//			res+=DFS(x,y);
//		}
//		return res;
//	}
//	return 0;
//}
//
//int main()
//{	
//	freopen("1.txt","rt",stdin);
//	while (cin>>m>>n && m && n)
//	{
//		graph.clear();
//		for (int i = 0; i < m; i++)
//		{
//			string str;
//			cin>>str;
//			graph.push_back(str);
//		}
//		//memset(visited,false,sizeof(visited));
//		int count =0;
//		for (int i = 0; i < m; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if(graph[i][j]=='*' && DFS(i,j)==1)
//					count++;
//			}
//		}
//		printf("%d\n",count );
//	}
//	return 0;
//}