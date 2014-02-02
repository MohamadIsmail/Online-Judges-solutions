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
//int n,m,dx[]={0,0,1,-1},dy[]={1,-1,0,0};
//char place;
//
//
//int DFS(int i,int j)
//{
//	if(graph[i][j]==place){
//		int res=1;
//		graph[i][j]=0;
//		for (int k = 0; k < 4; k++)
//		{
//			int x=(i+dx[k]+m)%m,y=(j+dy[k]+n)%n;
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
//	while (scanf("%d %d",&m,&n)==2)
//	{
//		graph.clear();
//		cin.ignore();
//		string str;
//		for (int i = 0; i < m; i++)
//		{*
//			getline(cin,str);
//			graph.push_back(str);
//		}
//		int x,y;
//		cin>>x>>y;
//		place=graph[x][y];
//		DFS(x,y);
//		int count =0;
//		for (int i = 0; i < m; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				count=max(count,DFS(i,j));
//			}
//		}
//		printf("%d\n",count );
//	}
//	return 0;
//}